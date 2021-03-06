#ifndef MYHEADER_H
#define MYHEADER_H
#include "myHeader.h"
#endif
#pragma once
#ifndef MY_FORM_H
#define MY_FORM_H
#include "MyForm.h"
#endif
#pragma once

namespace knowledgeForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  nodeFileTextBox;




	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TextBox^  nodeNickname;
	private: System::Windows::Forms::TextBox^  nodeDescription;
	private: System::Windows::Forms::TextBox^  nodeFileLocation;



	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ListBox^  nodeType;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::TextBox^  addressBox;
	private: System::Windows::Forms::Button^  goButton;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;


	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  graphToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  networkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  listToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog3;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  stageBtn;
	private: System::Windows::Forms::Label^  label2;






	private: System::Windows::Forms::ListBox^  nodeQueueLst;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->nodeFileTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nodeNickname = (gcnew System::Windows::Forms::TextBox());
			this->nodeDescription = (gcnew System::Windows::Forms::TextBox());
			this->nodeFileLocation = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->nodeType = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->addressBox = (gcnew System::Windows::Forms::TextBox());
			this->goButton = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graphToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->networkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->stageBtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nodeQueueLst = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// nodeFileTextBox
			// 
			this->nodeFileTextBox->Location = System::Drawing::Point(44, 38);
			this->nodeFileTextBox->Name = L"nodeFileTextBox";
			this->nodeFileTextBox->Size = System::Drawing::Size(572, 22);
			this->nodeFileTextBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Path";
			// 
			// nodeNickname
			// 
			this->nodeNickname->Location = System::Drawing::Point(102, 159);
			this->nodeNickname->Name = L"nodeNickname";
			this->nodeNickname->ReadOnly = true;
			this->nodeNickname->Size = System::Drawing::Size(703, 22);
			this->nodeNickname->TabIndex = 7;
			// 
			// nodeDescription
			// 
			this->nodeDescription->Location = System::Drawing::Point(102, 199);
			this->nodeDescription->Name = L"nodeDescription";
			this->nodeDescription->ReadOnly = true;
			this->nodeDescription->Size = System::Drawing::Size(703, 22);
			this->nodeDescription->TabIndex = 8;
			// 
			// nodeFileLocation
			// 
			this->nodeFileLocation->Location = System::Drawing::Point(102, 237);
			this->nodeFileLocation->Name = L"nodeFileLocation";
			this->nodeFileLocation->ReadOnly = true;
			this->nodeFileLocation->Size = System::Drawing::Size(666, 22);
			this->nodeFileLocation->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Nickname";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 202);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Description";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"File Location";
			// 
			// nodeType
			// 
			this->nodeType->FormattingEnabled = true;
			this->nodeType->ItemHeight = 16;
			this->nodeType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Document", L"Observation", L"Process" });
			this->nodeType->Location = System::Drawing::Point(59, 101);
			this->nodeType->Name = L"nodeType";
			this->nodeType->Size = System::Drawing::Size(121, 52);
			this->nodeType->TabIndex = 14;
			this->nodeType->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::nodeType_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 17);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Type";
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(4, 316);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1065, 519);
			this->webBrowser1->TabIndex = 16;
			// 
			// addressBox
			// 
			this->addressBox->Location = System::Drawing::Point(4, 288);
			this->addressBox->Name = L"addressBox";
			this->addressBox->Size = System::Drawing::Size(1018, 22);
			this->addressBox->TabIndex = 17;
			// 
			// goButton
			// 
			this->goButton->Location = System::Drawing::Point(1028, 287);
			this->goButton->Name = L"goButton";
			this->goButton->Size = System::Drawing::Size(36, 23);
			this->goButton->TabIndex = 18;
			this->goButton->Text = L"Go";
			this->goButton->UseVisualStyleBackColor = true;
			this->goButton->Click += gcnew System::EventHandler(this, &MyForm::goButton_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"Select Path";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->graphToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1081, 26);
			this->menuStrip1->TabIndex = 22;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(40, 22);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(117, 26);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(117, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// graphToolStripMenuItem
			// 
			this->graphToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->networkToolStripMenuItem,
					this->listToolStripMenuItem
			});
			this->graphToolStripMenuItem->Name = L"graphToolStripMenuItem";
			this->graphToolStripMenuItem->Size = System::Drawing::Size(59, 22);
			this->graphToolStripMenuItem->Text = L"Graph";
			// 
			// networkToolStripMenuItem
			// 
			this->networkToolStripMenuItem->Name = L"networkToolStripMenuItem";
			this->networkToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->networkToolStripMenuItem->Text = L"Network";
			this->networkToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::networkToolStripMenuItem_Click);
			// 
			// listToolStripMenuItem
			// 
			this->listToolStripMenuItem->Name = L"listToolStripMenuItem";
			this->listToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->listToolStripMenuItem->Text = L"List";
			this->listToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::listToolStripMenuItem_Click);
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"openFileDialog3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(774, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(31, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// stageBtn
			// 
			this->stageBtn->Location = System::Drawing::Point(812, 159);
			this->stageBtn->Name = L"stageBtn";
			this->stageBtn->Size = System::Drawing::Size(38, 100);
			this->stageBtn->TabIndex = 25;
			this->stageBtn->Text = L">>";
			this->stageBtn->UseVisualStyleBackColor = true;
			this->stageBtn->Click += gcnew System::EventHandler(this, &MyForm::stageBtn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(853, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 17);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Staged Nodes";
			// 
			// nodeQueueLst
			// 
			this->nodeQueueLst->FormattingEnabled = true;
			this->nodeQueueLst->ItemHeight = 16;
			this->nodeQueueLst->Location = System::Drawing::Point(856, 70);
			this->nodeQueueLst->Name = L"nodeQueueLst";
			this->nodeQueueLst->Size = System::Drawing::Size(186, 196);
			this->nodeQueueLst->TabIndex = 28;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1081, 847);
			this->Controls->Add(this->nodeQueueLst);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->stageBtn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->goButton);
			this->Controls->Add(this->addressBox);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->nodeType);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->nodeFileLocation);
			this->Controls->Add(this->nodeDescription);
			this->Controls->Add(this->nodeNickname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nodeFileTextBox);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Tacitus - Home";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void goButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	webBrowser1->Navigate(addressBox->Text);
}
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	std::fstream nodeFile;
	std::string path;
	folderBrowserDialog1->ShowDialog();
	nodeFileTextBox->Text = folderBrowserDialog1->SelectedPath;
	msclr::interop::marshal_context context;
	path = context.marshal_as<std::string>(nodeFileTextBox->Text);
	path = path + "/" + "nodes.csv";
	
	nodeFile.open(path, std::ios_base::out | std::ios_base::in);
	if (!nodeFile.is_open())
	{
		nodeFile.open(path, std::fstream::out);
		nodeFile.close();
		path = context.marshal_as<std::string>(nodeFileTextBox->Text);
		path = path + "/" + "edges.csv";
		std::fstream edgeFile;	
		edgeFile.open(path, std::fstream::out);
		edgeFile.close();
	}
	else
	{
		MessageBox::Show("Files already exist. Existing Files loaded.");
	}
	
}
private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	folderBrowserDialog1->ShowDialog();
	nodeFileTextBox->Text = folderBrowserDialog1->SelectedPath;	
}
private: System::Void networkToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	std::vector <Node> nodeVector;
	nodeVector.resize(0);
	std::vector <Edge> edgeVector;
	edgeVector.resize(0);
	std::vector <button> buttons;
	std::vector <const char *> btnNames;
	// { "Add Node", "Add Edge", "Move Child", "Save", "Delete Node", "Delete Edge", "Undo" };
	int clickedBtn = -999;
	//poplulate button names vector
	btnNames.push_back("Add Node");
	btnNames.push_back("Add Edge");
	btnNames.push_back("Open Doc");
	btnNames.push_back("Save");
	btnNames.push_back("Delete Node");
	btnNames.push_back("Delete Edge");
	btnNames.push_back("Undo");
	
	buttons = createButtons(btnNames);
	//create input file stream variables
	std::ifstream nodeFile;
	std::ifstream edgeFile;

	// usefule temporary variables
	Node tempNode;
	Edge tempEdge;
	std::string tempString, delimiter;
	int tempId = 0;
	float tempX = 0;
	float tempY = 0;
	bool nodeActivated = false;
	bool btnActivated = false;
	bool transition = false;
	int activeNode = 0;
	int activeBtn = 0;
	bool done = false; //used for exiting "game loop"
	std::string nodeFileName;
	std::string edgeFileName;
	int zoomScalar = 0;
	int translateX = 0;
	int translateY = 0;
	std::vector<Node> nodeQueueVector;
	int nodeQueueIndex = 0;


	std::stringstream ss;
	ss.str("");
	ss.clear();

	// check that Allegro is initialized
	if (!al_init())
	{
		al_show_native_message_box(NULL, NULL, NULL, "Could not initialize Allegro 5", NULL, NULL);
	}

	// create display
	al_set_new_display_flags(ALLEGRO_WINDOWED);
	ALLEGRO_DISPLAY *display = al_create_display(WINDOW_X, WINDOW_Y);
	al_set_window_position(display, DISPLAY_POSITION_X, DISPLAY_POSITION_Y);
	al_set_window_title(display, "Tacitus - Network");

	// check that display was successfully created
	if (!display)
	{
		al_show_native_message_box(NULL, NULL, NULL, "Could not create Allegro Window", NULL, NULL);
	}

	//get node and edge file names
	msclr::interop::marshal_context context;
	nodeFileName = context.marshal_as<std::string>(nodeFileTextBox->Text) + "/" + "nodes.csv";
	edgeFileName = context.marshal_as<std::string>(nodeFileTextBox->Text) + "/" + "edges.csv";

	//get nodeQueueLst items, format them and place them in a vector
	for (int i = 0; i < nodeQueueLst->Items->Count; i++)
	{
		nodeQueueLst->SelectedIndex = i;
		tempString = context.marshal_as<std::string>(nodeQueueLst->Text);
		ss << tempString;
		std::getline(ss, tempNode.type, '|');
		std::getline(ss, tempNode.nickname, '|');
		std::getline(ss, tempNode.description, '|');
		std::getline(ss, tempNode.fileLocation, '|');
		ss.str("");
		ss.clear();
		nodeQueueVector.push_back(tempNode);
	}
	nodeQueueLst->Items->Clear();

	nodeFile.open(nodeFileName);//open file containing previously saved nodes
	//read data from opened file and put into temporary node object
	nodeFile >> std::ws;
	while (!nodeFile.eof())
	{
		std::getline(nodeFile, tempString, ',');
		ss << tempString;
		ss >> tempNode.id;
		ss.str("");
		ss.clear();
		std::getline(nodeFile, tempString, ',');
		ss << tempString;
		ss >> tempNode.x;
		ss.str("");
		ss.clear();
		std::getline(nodeFile, tempString, ',');
		ss << tempString;
		ss >> tempNode.y;
		ss.str("");
		ss.clear();
		std::getline(nodeFile, tempNode.type, ',');
		std::getline(nodeFile, tempNode.nickname, ',');
		std::getline(nodeFile, tempNode.description, ',');
		std::getline(nodeFile, tempNode.fileLocation, '\n');

		nodeVector.push_back(tempNode);//place temp node into vector of node objects
	}


	nodeFile.close();//close file containing saved nodes

	edgeFile.open(edgeFileName);//open file containing previously saved edges
	//read data from opened file,put into temporary edge object, add add edge object to vector of edges
	edgeFile >> std::ws;
	while (!edgeFile.eof())
	{
		std::getline(edgeFile, tempString, ',');
		ss << tempString;
		ss >> tempEdge.parent;
		ss.str("");
		ss.clear();
		std::getline(edgeFile, tempString, ',');
		ss << tempString;
		ss >> tempEdge.child;
		ss.str("");
		ss.clear();
		std::getline(edgeFile, tempEdge.parentName, ',');
		std::getline(edgeFile, tempEdge.childName, '\n');

		edgeVector.push_back(tempEdge);//place temporary edge into vector of edge objects
	}

	edgeFile.close();//close file containing saved edges

	// need to be able to draw primitives and keyboard input
	al_init_primitives_addon();
	al_install_keyboard();
	al_install_mouse();
	al_init_font_addon();
	al_init_ttf_addon();

	ALLEGRO_FONT *font = al_load_ttf_font(FONT_TYPE, FONT_SIZE, NULL); //create a font for Allegro Display
	ALLEGRO_FONT *subFont = al_load_ttf_font(FONT_TYPE, NODE_WIDTH, NULL); //create a font for Allegro Display

	ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();//create an event queue to store input

	//regester input sources
	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_mouse_event_source());
	al_register_event_source(event_queue, al_get_display_event_source(display));

	al_clear_to_color(WINDOW_COLOR); //redraw screen
	drawBackground(translateX, translateY);
	drawEdges(nodeVector, edgeVector, translateX, translateY);
	drawNodes(nodeVector, subFont, edgeVector, translateX, translateY);
	drawButtons(buttons, font, clickedBtn, btnNames);
	al_flip_display();

	//int zoom;
	int panBufferX, panBufferY;
	std::vector<Node> copyNode;
	std::vector<Edge> copyEdge;

	while (!done)
	{
		ALLEGRO_EVENT events; // create event variable
		char const * exportMessage = "Files Exported";
		char const * moveChildrenMessage = "Moving Node and Children...";
		char const * addNodeMessage = "Adding Node...";
		char const * addEdgeMessage = "Adding Edge...";
		char const * deleteNodeMessage = "Deleting Node...";
		char const * deleteEdgeMessage = "Deleting Edge...";
		char const * panMessage = "Panning...";
		char const * undoMessage = "Last Change Undone";
		char const * openDocMessage = "Choose Document to Open";
		//zoom = events.mouse.w;

		al_wait_for_event(event_queue, &events);

		if (events.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			al_clear_to_color(WINDOW_COLOR);


			switch (events.keyboard.keycode)
			{

			case ALLEGRO_KEY_U:
				undoChange(nodeVector, copyNode, edgeVector, copyEdge);				
				drawScreen(translateX, translateY, font, undoMessage, nodeVector, edgeVector, subFont,buttons, font,clickedBtn,btnNames);
				break;

			case ALLEGRO_KEY_F1:
				ExportNodesEdges(nodeVector, edgeVector, nodeFileName, edgeFileName);
				drawScreen(translateX, translateY, font, exportMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				break;
			case ALLEGRO_KEY_LCTRL:
				drawScreen(translateX, translateY, font, moveChildrenMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);;
				copyVectors(nodeVector, copyNode, edgeVector, copyEdge);
				nodeVector = moveChildren(nodeVector, edgeVector, event_queue, events, translateX, translateY);
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);

			case ALLEGRO_KEY_N:
				drawScreen(translateX, translateY, font, addNodeMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				if (nodeQueueVector.size() == 0 || nodeQueueIndex >= nodeQueueVector.size())
				{
					break;
				}
				tempNode = nodeQueueVector[nodeQueueIndex];

				al_flush_event_queue(event_queue);//clear event queue
				while (events.keyboard.keycode != ALLEGRO_KEY_ESCAPE && events.type != ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) al_wait_for_event(event_queue, &events);//wait for esc to cancel or mouse button to insert new node

				if (events.mouse.button & 1)
				{
					Node newNode = addNode(nodeVector, edgeVector, font, event_queue, events, tempNode, translateX, translateY);
					copyVectors(nodeVector, copyNode, edgeVector, copyEdge);
					nodeVector.emplace(nodeVector.begin(), newNode);
					drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				}
				nodeQueueIndex++;
				break;

			case ALLEGRO_KEY_O:
			
				drawScreen(translateX, translateY, font, openDocMessage,nodeVector,edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				openDocument(events, translateX, translateY, nodeVector, activeNode, event_queue);
				addressBox->Text = context.marshal_as<System::String ^>(nodeVector[activeNode].fileLocation);
				webBrowser1->Navigate(context.marshal_as<System::String ^>(nodeVector[activeNode].fileLocation));
				done = true;
				break;

			case ALLEGRO_KEY_DELETE:
				drawScreen(translateX, translateY, font, deleteNodeMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				copyVectors(nodeVector, copyNode, edgeVector, copyEdge);
				nodeVector = deleteNode(nodeVector, edgeVector, event_queue, events, translateX, translateY);
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				break;
			case ALLEGRO_KEY_BACKSPACE:
				drawScreen(translateX, translateY, font, deleteEdgeMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				copyVectors(nodeVector, copyNode, edgeVector, copyEdge);
				edgeVector = deleteEdge(nodeVector, edgeVector, event_queue, events, translateX, translateY);
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				break;

			case ALLEGRO_KEY_UP:
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);

				for (int i = 0; i < PAN_FRAME; i++)
				{
					translateY -= WINDOW_Y/4/PAN_FRAME;					
					drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				}
				break;

			case ALLEGRO_KEY_DOWN:
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);

				for (int i = 0; i < PAN_FRAME; i++)
				{
					translateY += WINDOW_Y / 4 / PAN_FRAME;
					drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				}

				break;

			case ALLEGRO_KEY_LEFT:
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);

				for (int i = 0; i < PAN_FRAME; i++)
				{
					translateX -= WINDOW_Y / 4 / PAN_FRAME;
					drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				}

				break;

			case ALLEGRO_KEY_RIGHT:
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);

				for (int i = 0; i < PAN_FRAME; i++)
				{
					translateX += WINDOW_Y / 4 / PAN_FRAME;
					drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				}
				break;

			case ALLEGRO_KEY_E:
				drawScreen(translateX, translateY, font, addEdgeMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				al_unregister_event_source(event_queue, al_get_keyboard_event_source());
				tempEdge = addEdge(nodeVector, edgeVector, event_queue, events, subFont, translateX, translateY);
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				al_clear_to_color(WINDOW_COLOR);
				drawBackground(translateX, translateY);
				al_register_event_source(event_queue, al_get_keyboard_event_source());
				if (tempEdge.parent >= 0 
					&& tempEdge.child >= 0 
					&& tempEdge.child != tempEdge.parent)
				{
					copyVectors(nodeVector, copyNode, edgeVector, copyEdge);
					edgeVector.emplace(edgeVector.begin(), tempEdge);
				}
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				break;
			}
		}

		if (events.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
		{
			drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);

			if (events.mouse.button & 1) //record coordinates of cursor upon clicking mouse button 1
			{
				tempX = events.mouse.x + translateX;
				tempY = events.mouse.y + translateY;

				for (int i = 0; i < nodeVector.size(); i++) //cycle through node vector
				{
					if (tempX > nodeVector[i].x && tempX < nodeVector[i].x + NODE_WIDTH && tempY > nodeVector[i].y && tempY < nodeVector[i].y + NODE_HEIGHT)
					{
						nodeActivated = true;
						activeNode = i;

					}
				}
				for (int i = 0; i < buttons.size(); i++)// cycle through button vector
				{
					if (tempX - translateX > buttons[i].xCoord && tempX - translateX < buttons[i].xCoord + BTN_WIDTH && tempY - translateY > buttons[i].yCoord && tempY - translateY < buttons[i].yCoord + BTN_HEIGHT)
					{
						btnActivated = true;
						activeBtn = i;
						nodeActivated = false;
						drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, i, btnNames);
					}
				}
			}
			if (events.mouse.button & 2)
			{
				tempX = events.mouse.x + translateX;
				tempY = events.mouse.y + translateY;

				for (int i = 0; i < nodeVector.size(); i++) //cycle through node vector
				{
					if (tempX > nodeVector[i].x && tempX < nodeVector[i].x + NODE_WIDTH && tempY > nodeVector[i].y && tempY < nodeVector[i].y + NODE_HEIGHT)
					{
						transition = true;
						tempNode = nodeVector[i];
					}
				}
			}
		}

		if (events.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP && nodeActivated == true)
		{
			tempX = events.mouse.x + translateX;
			tempY = events.mouse.y + translateY;

			int translateDeltaX, translateDeltaY;
			
			char const * nodeTypeChar = nodeVector[activeNode].type.c_str();
			char const * nodeNicknameChar = nodeVector[activeNode].nickname.c_str();
			char const * nodeDescriptionChar = nodeVector[activeNode].description.c_str();
			//check if mouse drag was greater then the size of a node
			if (abs(events.mouse.x + translateX - nodeVector[activeNode].x) > NODE_WIDTH || abs(events.mouse.y + translateY - nodeVector[activeNode].y) > NODE_HEIGHT)
			{
				//move the node
				int modX;
				copyVectors(nodeVector, copyNode, edgeVector, copyEdge);
				nodeVector[activeNode].x = events.mouse.x + translateX;
				nodeVector[activeNode].y = events.mouse.y + translateY;
				modX = (events.mouse.x + translateX) % BOX_SIZE;

				if (modX < BOX_SIZE / 2) nodeVector[activeNode].x -= modX;
				else nodeVector[activeNode].x += BOX_SIZE - modX;
			}
			else
			{
				//pan screen such that it is centered on the selected Node
				translateDeltaX = (nodeVector[activeNode].x - WINDOW_X / 2 - translateX) / PAN_FRAME;
				translateDeltaY = (nodeVector[activeNode].y - WINDOW_Y / 2 - translateY) / PAN_FRAME;
				for (int i = 0; i < PAN_FRAME; i++)
				{
					translateX += translateDeltaX;
					translateY += translateDeltaY;
					al_clear_to_color(WINDOW_COLOR); //redraw screen
					drawBackground(translateX, translateY);
					al_draw_text(font, FONT_COLOR, FONT_SIZE, 0, 0, &nodeTypeChar[0]);
					al_draw_text(font, FONT_COLOR, FONT_SIZE, 1 * FONT_SIZE, 0, &nodeNicknameChar[0]);
					al_draw_text(font, FONT_COLOR, FONT_SIZE, 2 * FONT_SIZE, 0, &nodeDescriptionChar[0]);
					drawEdges(nodeVector, edgeVector, translateX, translateY);
					drawNodes(nodeVector, subFont, edgeVector, translateX, translateY);
					highlightRelatives(activeNode, edgeVector, nodeVector, translateX, translateY);
					drawButtons(buttons, font, clickedBtn, btnNames);
					al_flip_display();
				}
			}

			nodeActivated = false;

			al_clear_to_color(WINDOW_COLOR); //redraw screen
			drawBackground(translateX, translateY);
			al_draw_text(font, FONT_COLOR, FONT_SIZE, 0, 0, &nodeTypeChar[0]);
			al_draw_text(font, FONT_COLOR, FONT_SIZE, 1 * FONT_SIZE, 0, &nodeNicknameChar[0]);
			al_draw_text(font, FONT_COLOR, FONT_SIZE, 2 * FONT_SIZE, 0, &nodeDescriptionChar[0]);

			//redrawNodesEdges(nodeVector, edgeVector);
			drawEdges(nodeVector, edgeVector, translateX, translateY);
			drawNodes(nodeVector, subFont, edgeVector, translateX, translateY);
			highlightRelatives(activeNode, edgeVector, nodeVector, translateX, translateY);
			drawButtons(buttons, font, clickedBtn, btnNames);
			al_flip_display();

			addressBox->Text = context.marshal_as<System::String ^>(nodeVector[activeNode].fileLocation);
		}
		if (events.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP && btnActivated == true)
		{

			switch (activeBtn)
			{
			case 0:
				drawScreen(translateX, translateY, font, addNodeMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				if (nodeQueueVector.size() == 0 || nodeQueueIndex >= nodeQueueVector.size())
				{
					break;
				}
				tempNode = nodeQueueVector[nodeQueueIndex];

				al_flush_event_queue(event_queue);//clear event queue
				while (events.keyboard.keycode != ALLEGRO_KEY_ESCAPE && events.type != ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) al_wait_for_event(event_queue, &events);//wait for esc to cancel or mouse button to insert new node

				if (events.mouse.button & 1)
				{
					Node newNode = addNode(nodeVector, edgeVector, font, event_queue, events, tempNode, translateX, translateY);
					copyVectors(nodeVector, copyNode, edgeVector, copyEdge);
					nodeVector.emplace(nodeVector.begin(), newNode);
					drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				}
				nodeQueueIndex++;
				break;


			case 1:
				drawScreen(translateX, translateY, font, addEdgeMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				al_unregister_event_source(event_queue, al_get_keyboard_event_source());	
				tempEdge = addEdge(nodeVector, edgeVector, event_queue, events, subFont, translateX, translateY);
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				al_clear_to_color(WINDOW_COLOR);
				drawBackground(translateX, translateY);
				al_register_event_source(event_queue, al_get_keyboard_event_source());
				if (tempEdge.parent >= 0
					&& tempEdge.child >= 0
					&& tempEdge.child != tempEdge.parent)
				{
					copyVectors(nodeVector, copyNode, edgeVector, copyEdge);
					edgeVector.emplace(edgeVector.begin(), tempEdge);
				}
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				break;

			case 2:
				drawScreen(translateX, translateY, font, openDocMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				openDocument(events, translateX, translateY, nodeVector, activeNode, event_queue);
				addressBox->Text = context.marshal_as<System::String ^>(nodeVector[activeNode].fileLocation);
				webBrowser1->Navigate(context.marshal_as<System::String ^>(nodeVector[activeNode].fileLocation));
				done = true;
				break;

			case 3:
				ExportNodesEdges(nodeVector, edgeVector, nodeFileName, edgeFileName);
				drawScreen(translateX, translateY, font, exportMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				break;

			case 4:
				drawScreen(translateX, translateY, font, deleteNodeMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				while (events.type != ALLEGRO_EVENT_MOUSE_BUTTON_UP) al_wait_for_event(event_queue, &events);//wait for MOUSE UP event
				copyVectors(nodeVector, copyNode, edgeVector, copyEdge);
				nodeVector = deleteNode(nodeVector, edgeVector, event_queue, events, translateX, translateY);
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				break;
			case 5:
				drawScreen(translateX, translateY, font, deleteEdgeMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				copyVectors(nodeVector, copyNode, edgeVector, copyEdge);
				edgeVector = deleteEdge(nodeVector, edgeVector, event_queue, events, translateX, translateY);
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				break;

			case 6:
				undoChange(nodeVector, copyNode, edgeVector, copyEdge);
				drawScreen(translateX, translateY, font, undoMessage, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
				break;
			}

			btnActivated = false;
		}
		if (events.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP && transition == true)
		{
			std::vector<nodeTransition> parentTrans;
			std::vector<nodeTransition> childTrans;
			parentTrans = parentTransition(nodeVector, edgeVector, tempNode);
			childTrans = childTransition(nodeVector, edgeVector, tempNode);
			copyVectors(nodeVector, copyNode, edgeVector, copyEdge);
			for (int k = 0; k < PAN_FRAME; k++)
			{
				for (int i = 0; i < parentTrans.size(); i++) //iterate through node transition vector
				{
					for (int j = 0; j < nodeVector.size(); j++)
					{
						if (parentTrans[i].id == nodeVector[j].id)
						{
							nodeVector[j].x += parentTrans[i].deltaX(PAN_FRAME);
							nodeVector[j].y += parentTrans[i].deltaY(PAN_FRAME);
						}
					}
				}
				for (int i = 0; i < childTrans.size(); i++) //iterate through node transition vector
				{
					for (int j = 0; j < nodeVector.size(); j++)
					{
						if (childTrans[i].id == nodeVector[j].id)
						{
							nodeVector[j].x += childTrans[i].deltaX(PAN_FRAME);
							nodeVector[j].y += childTrans[i].deltaY(PAN_FRAME);
						}
					}
				}
				drawScreen(translateX, translateY, font, nodeVector, edgeVector, subFont, buttons, font, clickedBtn, btnNames);
			}

			transition = false;
		}


		if (events.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			done = true;
		}
	}

	al_destroy_display(display);
	al_destroy_event_queue(event_queue);
}
private: System::Void listToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	std::vector <Node> nodeVector;
	nodeVector.resize(0);
	std::vector <Edge> edgeVector;
	edgeVector.resize(0);
	std::vector <Node> listNodeVector;
	listNodeVector.resize(0);
	std::vector <Node> interrogateNodeVector;
	interrogateNodeVector.resize(0);
	int translateY = 0;

	//create input file stream variables
	std::ifstream nodeFile;
	std::ifstream edgeFile;

	// usefule temporary variables
	Node tempNode;
	Edge tempEdge;
	std::string tempString;
	int tempId = 0;
	float tempX = 0;
	float tempY = 0;
	bool nodeActivated = false;
	int activeNode = 0;
	bool done = false; //used for exiting "game loop"
	std::string nodeFileName;
	std::string edgeFileName;

	std::stringstream ss;
	ss.str("");
	ss.clear();

	// check that Allegro is initialized
	if (!al_init())
	{
		al_show_native_message_box(NULL, NULL, NULL, "Could not initialize Allegro 5", NULL, NULL);
	}

	// create display
	al_set_new_display_flags(ALLEGRO_WINDOWED);
	ALLEGRO_DISPLAY *display = al_create_display(WINDOW_X, WINDOW_Y);
	al_set_window_position(display, DISPLAY_POSITION_X, DISPLAY_POSITION_Y);
	al_set_window_title(display, "Tacitus - List");

	// check that display was successfully created
	if (!display)
	{
		al_show_native_message_box(NULL, NULL, NULL, "Could not create Allegro Window", NULL, NULL);
	}

	//get node and edge file names
	msclr::interop::marshal_context context;
	nodeFileName = context.marshal_as<std::string>(nodeFileTextBox->Text) + "/" + "nodes.csv";
	edgeFileName = context.marshal_as<std::string>(nodeFileTextBox->Text) + "/" + "edges.csv";

	nodeFile.open(nodeFileName);//open file containing previously saved nodes
	//read data from opened file and put into temporary node object
	while (!nodeFile.eof())
	{
		std::getline(nodeFile, tempString, ',');
		ss << tempString;
		ss >> tempNode.id;
		ss.str("");
		ss.clear();
		std::getline(nodeFile, tempString, ',');
		ss << tempString;
		ss >> tempNode.x;
		ss.str("");
		ss.clear();
		std::getline(nodeFile, tempString, ',');
		ss << tempString;
		ss >> tempNode.y;
		ss.str("");
		ss.clear();
		std::getline(nodeFile, tempNode.type, ',');
		std::getline(nodeFile, tempNode.nickname, ',');
		std::getline(nodeFile, tempNode.description, ',');
		std::getline(nodeFile, tempNode.fileLocation, '\n');

		nodeVector.push_back(tempNode);//place temp node into vector of node objects
	}

	nodeFile.close();//close file containing saved nodes

	edgeFile.open(edgeFileName);//open file containing previously saved edges
	//read data from opened file,put into temporary edge object, add add edge object to vector of edges
	while (!edgeFile.eof())
	{
		std::getline(edgeFile, tempString, ',');
		ss << tempString;
		ss >> tempEdge.parent;
		ss.str("");
		ss.clear();
		std::getline(edgeFile, tempString, ',');
		ss << tempString;
		ss >> tempEdge.child;
		ss.str("");
		ss.clear();
		std::getline(edgeFile, tempEdge.parentName, ',');
		std::getline(edgeFile, tempEdge.childName, '\n');

		edgeVector.push_back(tempEdge);//place temporary edge into vector of edge objects
	}

	edgeFile.close();//close file containing saved edges

	// need to be able to draw primitives and keyboard input
	al_init_primitives_addon();
	al_install_keyboard();
	al_install_mouse();
	al_init_font_addon();
	al_init_ttf_addon();

	ALLEGRO_FONT *font = al_load_ttf_font(FONT_TYPE, FONT_SIZE, NULL); //create a font for Allegro Display
	ALLEGRO_FONT *subFont = al_load_ttf_font(FONT_TYPE, NODE_WIDTH, NULL); //create a font for Allegro Display

	ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();//create an event queue to store input

	//register input sources
	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_mouse_event_source());
	al_register_event_source(event_queue, al_get_display_event_source(display));

	populateListNodeVector(nodeVector, edgeVector, listNodeVector);
	al_clear_to_color(WINDOW_COLOR);
	drawListDividers();
	drawNodes(listNodeVector, subFont, edgeVector, 0, 0);
	al_flip_display();
	while (!done)
	{
		ALLEGRO_EVENT events; // create event variable

		al_wait_for_event(event_queue, &events);
		if (events.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			done = true;
		}

		if (events.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			switch (events.keyboard.keycode)
			{

			case ALLEGRO_KEY_PGDN:
				for (int i = 0; i < PAN_FRAME; i++)
				{
					translateY += WINDOW_Y / 4 / PAN_FRAME;
					al_clear_to_color(WINDOW_COLOR); //redraw screen
					drawNodes(listNodeVector, subFont, edgeVector, 0, translateY);
					drawListDividers();
					al_flip_display();
				}

				break;

			case ALLEGRO_KEY_PGUP:
				for (int i = 0; i < PAN_FRAME; i++)
				{
					translateY -= WINDOW_Y / 4 / PAN_FRAME;
					al_clear_to_color(WINDOW_COLOR); //redraw screen
					drawNodes(listNodeVector, subFont, edgeVector, 0, translateY);
					drawListDividers();
					al_flip_display();
				}

				
				if (translateY < 0) translateY = 0;
				break;
			}

			al_clear_to_color(WINDOW_COLOR); //redraw screen
			drawNodes(listNodeVector, subFont, edgeVector, 0, translateY);
			drawListDividers();
			al_flip_display();
		}

		if (events.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
		{
			if (events.mouse.button & 1)
			{
				tempX = events.mouse.x;
				tempY = events.mouse.y + translateY;

				if (tempX < WINDOW_X / 2)
				{
					for (int i = 0; i < listNodeVector.size(); i++)
					{
						if (tempX > listNodeVector[i].x && tempX < listNodeVector[i].x + NODE_WIDTH && tempY > listNodeVector[i].y && tempY < listNodeVector[i].y + NODE_HEIGHT)
						{
							nodeActivated = true;
							activeNode = i;
							populateInterrogateNodeVector(interrogateNodeVector, listNodeVector, edgeVector, activeNode);
						}
					}
				}
				else
				{
					for (int i = 0; i < interrogateNodeVector.size(); i++)
					{
						if (tempX > interrogateNodeVector[i].x && tempX < interrogateNodeVector[i].x + NODE_WIDTH && tempY > interrogateNodeVector[i].y && tempY < interrogateNodeVector[i].y + NODE_HEIGHT)
						{
							nodeActivated = true;
							for (int j = 0; j < listNodeVector.size(); j++)
							{
								if (interrogateNodeVector[i].id == listNodeVector[j].id) activeNode = j;
							}
							populateInterrogateNodeVector(interrogateNodeVector, listNodeVector, edgeVector, activeNode);
							break;
						}
					}
				}
			}
		}
		if (events.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP && nodeActivated == true)
		{
			char const * nodeType = listNodeVector[activeNode].type.c_str();
			char const * nodeNickname = listNodeVector[activeNode].nickname.c_str();
			char const * nodeDescription = listNodeVector[activeNode].description.c_str();
			nodeActivated = false;
			al_clear_to_color(WINDOW_COLOR); //redraw screen
			drawListDividers();
			al_draw_text(font, FONT_COLOR, WINDOW_X / 2 + FONT_SIZE, WINDOW_Y / 2 - FONT_SIZE, 0, &nodeType[0]);
			al_draw_text(font, FONT_COLOR, WINDOW_X / 2 + FONT_SIZE, WINDOW_Y / 2, 0, &nodeNickname[0]);
			al_draw_text(font, FONT_COLOR, WINDOW_X / 2 + FONT_SIZE, WINDOW_Y / 2 + FONT_SIZE, 0, &nodeDescription[0]);

			drawNodes(listNodeVector, subFont, edgeVector, 0, translateY);
			drawNodes(interrogateNodeVector, subFont, edgeVector, 0, 0);
			highlightRelatives(activeNode, edgeVector, listNodeVector, 0, translateY);

			al_flip_display();

			webBrowser1->Navigate(context.marshal_as<System::String ^>(listNodeVector[activeNode].fileLocation));
			addressBox->Text = context.marshal_as<System::String ^>(listNodeVector[activeNode].fileLocation);
		}

	}
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog3->InitialDirectory = nodeFileTextBox->Text;
	openFileDialog3->ShowDialog();
	nodeFileLocation->Text = openFileDialog3->FileName;
}
private: System::Void nodeType_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->nodeType->SelectedItem == "Document")
	{
		this->nodeNickname->ReadOnly = false;
		this->nodeDescription->ReadOnly = false;
		this->nodeFileLocation->ReadOnly = false;
	}
	if (this->nodeType->SelectedItem == "Observation" || this->nodeType->SelectedItem == "Process")
	{
		this->nodeNickname->ReadOnly = false;
		this->nodeDescription->ReadOnly = false;
		this->nodeFileLocation->ReadOnly = true;
	}

}
private: System::Void stageBtn_Click(System::Object^  sender, System::EventArgs^  e) 
{
	std::string nodeBuffer;
	msclr::interop::marshal_context context;
	nodeBuffer = context.marshal_as<std::string>(nodeType->Text);
	nodeBuffer += '|' + context.marshal_as<std::string>(nodeNickname->Text);
	nodeBuffer += '|' + context.marshal_as<std::string>(nodeDescription->Text);
	nodeBuffer += '|' + context.marshal_as<std::string>(nodeFileLocation->Text);

	this->nodeQueueLst->Items->Add(context.marshal_as<System::String ^>(nodeBuffer));
	
}
}
; 
}
;