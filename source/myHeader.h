#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <conio.h>
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include <allegro5\allegro.h>
#include <allegro5\allegro_native_dialog.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro_ttf.h>
#include <allegro5\allegro_font.h>

#define WINDOW_X 1600
#define WINDOW_Y 900	
#define DISPLAY_POSITION_X 0
#define DISPLAY_POSITION_Y 0
#define WINDOW_TITLE "Knowledge Management"
#define FONT_SIZE 18
#define FONT_TYPE "times.ttf"
#define FONT_COLOR al_map_rgb(0,0,0)
#define NODE_HEIGHT 15
#define	NODE_WIDTH 15
#define WINDOW_COLOR al_map_rgb(255,255,255)
#define EDGE_COLOR al_map_rgb(150,150,150)
#define EDGE_WIDTH 1
#define HIGHLIGHT_WIDTH 3
#define TYPE_STRING_SIZE 20
#define NICKNAME_STRING_SIZE 20
#define DESCRIPTION_STRING_SIZE 255
#define ITERATION_LIMIT 10
#define REPULSION_CONSTANT 0.0001
#define SPRING_CONSTANT 0.00000001
#define DELTA_TIME 1000000
#define MAX_DISPLACEMENT_SQUARED 10
#define SPRING_REST_LENGTH 50
#define ARROW_RADIANS 0.17
#define ARROW_SIZE 15
#define MENU_X_OFFSET 300 
#define DIVISIONS 15
#define DIVIDER_COLOR al_map_rgb(0,0,0)
#define DIVIDER_THICKNESS 1
#define LIST_NODE_SCALAR 1.1
#define ZOOM_MAX 10
#define ZOOM_MIN -10
#define PAN_FRAME 5
#define PARENT_OFFSET -125
#define CHILD_OFFSET 125
#define BOX_SIZE 125
#define BTN_HEIGHT 40
#define BTN_WIDTH 130
#define CLICKED_BTN_COLOR al_map_rgb(200,200,200)
#define BTN_COLOR al_map_rgb(150,150,150)

class Node
{
public:
	float x, y, forceX, forceY;
	int id;
	std::string type, nickname, description, fileLocation;
};
class Edge
{
public:
	int parent;
	int child;
	std::string parentName, childName;
};
class nodeTransition
{
public:
	float originalX, originalY, updatedX, updatedY;
	int id;
	float deltaX(int panFrame)
	{
		float delta;
		delta = (updatedX - originalX) / panFrame;
		return delta;
	}
	float deltaY(int panFrame)
	{
		float delta;
		delta = (updatedY - originalY + NODE_HEIGHT) / panFrame;
		return delta;
	}
};
class button
{
public:
	int xCoord, yCoord;
	std::string text;
};
void drawEdges(std::vector<Node> tempNodeVector, std::vector<Edge> tempEdgeVector,int translateX, int translateY);
void drawNodes(std::vector<Node> tempNodeVector, ALLEGRO_FONT *subFont, std::vector<Edge> tempEdgeVector, int translateX, int translateY);
void ExportNodesEdges(std::vector<Node>, std::vector<Edge>, std::string nodeFileName, std::string edgeFileName);
void redrawNodesEdges(std::vector<Node> nodeVector, std::vector<Edge> edgeVector);
Node addNode(std::vector<Node> &nodeVector, std::vector<Edge> &edgeVector, ALLEGRO_FONT *font, ALLEGRO_EVENT_QUEUE *event_queue, ALLEGRO_EVENT events, Node tempNode, int translateX, int translateY);
Edge addEdge(std::vector<Node> &nodeVector, std::vector<Edge> &edgeVector, ALLEGRO_EVENT_QUEUE *event_queue, ALLEGRO_EVENT events, ALLEGRO_FONT * subFont, int translateX, int translateY);
std::vector<Node> moveChildren(std::vector<Node> nodeVector, std::vector<Edge> edgeVector, ALLEGRO_EVENT_QUEUE *event_queue, ALLEGRO_EVENT events, int translateX, int translateY);
void drawMenu(int i, ALLEGRO_FONT *menuFont);
std::vector<Node> deleteNode(std::vector<Node> &nodeVector, std::vector<Edge> &edgeVector, ALLEGRO_EVENT_QUEUE *event_queue, ALLEGRO_EVENT events, int translateX, int translateY);
std::vector<Edge> deleteEdge(std::vector<Node> &nodeVector, std::vector<Edge> &edgeVector, ALLEGRO_EVENT_QUEUE *event_queue, ALLEGRO_EVENT events, int translateX, int translateY);
void highlightRelatives(int &activeNode, std::vector<Edge> &edgeVector, std::vector<Node> &nodeVector, int translateX, int translateY);
void drawBackground(int translateX, int translateY);
void populateListNodeVector(std::vector<Node> &nodeVector, std::vector<Edge> &edgeVector, std::vector<Node> &listNodeVector);
void drawListDividers();
void populateInterrogateNodeVector(std::vector<Node> &interrogateNodeVector, std::vector<Node> listNodeVector, std::vector<Edge> &edgeVector, int activeNode);
std::vector<nodeTransition> parentTransition(std::vector<Node> &nodeVector, std::vector<Edge> &edgeVector, Node selectedNode);
std::vector<nodeTransition> childTransition(std::vector<Node> &nodeVector, std::vector<Edge> &edgeVector, Node selectedNode);
void copyVectors(std::vector<Node> &origNode, std::vector<Node> &copyNode, std::vector<Edge> &origEdge, std::vector<Edge> &copyEdge);
void undoChange(std::vector<Node> &origNode, std::vector<Node> &copyNode, std::vector<Edge> &origEdge, std::vector<Edge> &copyEdge);
std::vector<button> createButtons(std::vector<const char *> btnNames);
void drawButtons(std::vector<button> buttons, ALLEGRO_FONT *btnFont, int clickedBtnIndex, std::vector<const char *> btnNames);
void drawScreen(int translateX, int translateY, ALLEGRO_FONT *font, const char * message, std::vector<Node> nodeVector, std::vector<Edge> edgeVector, ALLEGRO_FONT * subFont, std::vector<button> buttons, ALLEGRO_FONT *btnFont, int clickedBtnIndex, std::vector<const char *> btnNames);
void drawScreen(int translateX, int translateY, ALLEGRO_FONT *font, std::vector<Node> nodeVector, std::vector<Edge> edgeVector, ALLEGRO_FONT * subFont, std::vector<button> buttons, ALLEGRO_FONT *btnFont, int clickedBtnIndex, std::vector<const char *> btnNames);
void openDocument(ALLEGRO_EVENT events, int translateX, int translateY, std::vector<Node> &nodeVector, int &activeNode, ALLEGRO_EVENT_QUEUE * event_queue);