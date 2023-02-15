/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////	AUTOR: PABLO ALEXANDER FERNANDEZ MORALES  ///////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#pragma once

namespace EasyNote {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;  //libreria para escribir y leer texto en archivos
	using namespace System::Text; // libreria para propiedades de texto

	/// <summary>
	/// Resumen de MyPrincipalForm
	/// </summary>
	public ref class MyPrincipalForm : public System::Windows::Forms::Form
	{
	public:
		MyPrincipalForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyPrincipalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ formatToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ selectAllToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ letterColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ boldToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ normalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ underlineToolStripMenuItem;
	private: System::Windows::Forms::ToolStripContainer^ toolStripContainer1;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonSAVE;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonOPEN;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonSELECT;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonUNDO;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonCUT;



	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonFONTNORMAL;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonFONTBOLD;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonCOLORFONT;
	private: System::Windows::Forms::ToolStripStatusLabel^ MessageToolStripStatusLabel1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator6;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator7;
	private: System::Windows::Forms::ToolStripMenuItem^ selectAllToolStripMenuItem1;
	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyPrincipalForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->selectAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->normalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boldToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->underlineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->letterColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->undoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->selectAllToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->MessageToolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButtonSAVE = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonOPEN = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButtonSELECT = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonUNDO = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonCUT = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButtonFONTNORMAL = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonFONTBOLD = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonCOLORFONT = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->toolStripContainer1->BottomToolStripPanel->SuspendLayout();
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->formatToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(749, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newToolStripMenuItem,
					this->saveToolStripMenuItem, this->openToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newToolStripMenuItem.Image")));
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::newToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripMenuItem.Image")));
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::G));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::saveToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripMenuItem.Image")));
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::openToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeToolStripMenuItem.Image")));
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::closeToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->undoToolStripMenuItem,
					this->toolStripSeparator1, this->cutToolStripMenuItem, this->copyToolStripMenuItem, this->pasteToolStripMenuItem, this->toolStripSeparator2,
					this->selectAllToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"undoToolStripMenuItem.Image")));
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->undoToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->undoToolStripMenuItem->Text = L"Undo";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::undoToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(161, 6);
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripMenuItem.Image")));
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->cutToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->cutToolStripMenuItem->Text = L"Cut";
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::cutToolStripMenuItem_Click);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripMenuItem.Image")));
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->copyToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->copyToolStripMenuItem->Text = L"Copy";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::copyToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteToolStripMenuItem.Image")));
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->pasteToolStripMenuItem->Text = L"Paste";
			this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::pasteToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(161, 6);
			// 
			// selectAllToolStripMenuItem
			// 
			this->selectAllToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"selectAllToolStripMenuItem.Image")));
			this->selectAllToolStripMenuItem->Name = L"selectAllToolStripMenuItem";
			this->selectAllToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->selectAllToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->selectAllToolStripMenuItem->Text = L"Select All";
			this->selectAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::selectAllToolStripMenuItem_Click);
			// 
			// formatToolStripMenuItem
			// 
			this->formatToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fontToolStripMenuItem,
					this->letterColorToolStripMenuItem
			});
			this->formatToolStripMenuItem->Name = L"formatToolStripMenuItem";
			this->formatToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->formatToolStripMenuItem->Text = L"Format";
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->normalToolStripMenuItem,
					this->boldToolStripMenuItem, this->underlineToolStripMenuItem
			});
			this->fontToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontToolStripMenuItem.Image")));
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->fontToolStripMenuItem->Text = L"Font";
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::fontToolStripMenuItem_Click);
			// 
			// normalToolStripMenuItem
			// 
			this->normalToolStripMenuItem->Name = L"normalToolStripMenuItem";
			this->normalToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->normalToolStripMenuItem->Text = L"Normal";
			this->normalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::normalToolStripMenuItem_Click);
			// 
			// boldToolStripMenuItem
			// 
			this->boldToolStripMenuItem->Name = L"boldToolStripMenuItem";
			this->boldToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->boldToolStripMenuItem->Text = L"Bold";
			this->boldToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::boldToolStripMenuItem_Click);
			// 
			// underlineToolStripMenuItem
			// 
			this->underlineToolStripMenuItem->Name = L"underlineToolStripMenuItem";
			this->underlineToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->underlineToolStripMenuItem->Text = L"Underline";
			this->underlineToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::underlineToolStripMenuItem_Click);
			// 
			// letterColorToolStripMenuItem
			// 
			this->letterColorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"letterColorToolStripMenuItem.Image")));
			this->letterColorToolStripMenuItem->Name = L"letterColorToolStripMenuItem";
			this->letterColorToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->letterColorToolStripMenuItem->Text = L"Letter Color";
			this->letterColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::letterColorToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ayudaToolStripMenuItem,
					this->acercaDeToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ayudaToolStripMenuItem.Image")));
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->ayudaToolStripMenuItem->Text = L"Ask for help";
			this->ayudaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::ayudaToolStripMenuItem_Click);
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"acercaDeToolStripMenuItem.Image")));
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->acercaDeToolStripMenuItem->Text = L"About";
			this->acercaDeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::acercaDeToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(749, 571);
			this->textBox1->TabIndex = 1;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->undoToolStripMenuItem1,
					this->toolStripSeparator6, this->cutToolStripMenuItem1, this->copyToolStripMenuItem1, this->pasteToolStripMenuItem1, this->toolStripSeparator7,
					this->selectAllToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(123, 126);
			// 
			// undoToolStripMenuItem1
			// 
			this->undoToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"undoToolStripMenuItem1.Image")));
			this->undoToolStripMenuItem1->Name = L"undoToolStripMenuItem1";
			this->undoToolStripMenuItem1->Size = System::Drawing::Size(122, 22);
			this->undoToolStripMenuItem1->Text = L"Undo";
			this->undoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyPrincipalForm::undoToolStripMenuItemUNDO_Click);
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(119, 6);
			// 
			// cutToolStripMenuItem1
			// 
			this->cutToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripMenuItem1.Image")));
			this->cutToolStripMenuItem1->Name = L"cutToolStripMenuItem1";
			this->cutToolStripMenuItem1->Size = System::Drawing::Size(122, 22);
			this->cutToolStripMenuItem1->Text = L"Cut";
			this->cutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyPrincipalForm::cutToolStripMenuItemCUT_Click);
			// 
			// copyToolStripMenuItem1
			// 
			this->copyToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripMenuItem1.Image")));
			this->copyToolStripMenuItem1->Name = L"copyToolStripMenuItem1";
			this->copyToolStripMenuItem1->Size = System::Drawing::Size(122, 22);
			this->copyToolStripMenuItem1->Text = L"Copy";
			this->copyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyPrincipalForm::copyToolStripMenuItemCOPY_Click);
			// 
			// pasteToolStripMenuItem1
			// 
			this->pasteToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteToolStripMenuItem1.Image")));
			this->pasteToolStripMenuItem1->Name = L"pasteToolStripMenuItem1";
			this->pasteToolStripMenuItem1->Size = System::Drawing::Size(122, 22);
			this->pasteToolStripMenuItem1->Text = L"Paste";
			this->pasteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyPrincipalForm::pasteToolStripMenuItemPASTE_Click);
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			this->toolStripSeparator7->Size = System::Drawing::Size(119, 6);
			// 
			// selectAllToolStripMenuItem1
			// 
			this->selectAllToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"selectAllToolStripMenuItem1.Image")));
			this->selectAllToolStripMenuItem1->Name = L"selectAllToolStripMenuItem1";
			this->selectAllToolStripMenuItem1->Size = System::Drawing::Size(122, 22);
			this->selectAllToolStripMenuItem1->Text = L"Select All";
			this->selectAllToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyPrincipalForm::selectAllToolStripMenuItemSELECT_Click);
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.BottomToolStripPanel
			// 
			this->toolStripContainer1->BottomToolStripPanel->Controls->Add(this->statusStrip1);
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Controls->Add(this->textBox1);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(749, 571);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer1->LeftToolStripPanelVisible = false;
			this->toolStripContainer1->Location = System::Drawing::Point(0, 24);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->RightToolStripPanelVisible = false;
			this->toolStripContainer1->Size = System::Drawing::Size(749, 618);
			this->toolStripContainer1->TabIndex = 2;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStrip1);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->MessageToolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 0);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(749, 22);
			this->statusStrip1->TabIndex = 0;
			// 
			// MessageToolStripStatusLabel1
			// 
			this->MessageToolStripStatusLabel1->Name = L"MessageToolStripStatusLabel1";
			this->MessageToolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->toolStripButtonSAVE,
					this->toolStripButtonOPEN, this->toolStripSeparator3, this->toolStripButtonSELECT, this->toolStripButtonUNDO, this->toolStripButtonCUT,
					this->toolStripSeparator4, this->toolStripButtonFONTNORMAL, this->toolStripButtonFONTBOLD, this->toolStripButtonCOLORFONT, this->toolStripSeparator5
			});
			this->toolStrip1->Location = System::Drawing::Point(3, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(214, 25);
			this->toolStrip1->TabIndex = 0;
			// 
			// toolStripButtonSAVE
			// 
			this->toolStripButtonSAVE->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonSAVE->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonSAVE.Image")));
			this->toolStripButtonSAVE->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonSAVE->Name = L"toolStripButtonSAVE";
			this->toolStripButtonSAVE->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonSAVE->Text = L"toolStripButton1";
			this->toolStripButtonSAVE->Click += gcnew System::EventHandler(this, &MyPrincipalForm::toolStripButtonSAVE_Click);
			// 
			// toolStripButtonOPEN
			// 
			this->toolStripButtonOPEN->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonOPEN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonOPEN.Image")));
			this->toolStripButtonOPEN->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonOPEN->Name = L"toolStripButtonOPEN";
			this->toolStripButtonOPEN->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonOPEN->Text = L"toolStripButton2";
			this->toolStripButtonOPEN->Click += gcnew System::EventHandler(this, &MyPrincipalForm::toolStripButtonOPEN_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButtonSELECT
			// 
			this->toolStripButtonSELECT->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonSELECT->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonSELECT.Image")));
			this->toolStripButtonSELECT->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonSELECT->Name = L"toolStripButtonSELECT";
			this->toolStripButtonSELECT->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonSELECT->Text = L"toolStripButton3";
			this->toolStripButtonSELECT->Click += gcnew System::EventHandler(this, &MyPrincipalForm::toolStripButtonSELECT_Click);
			// 
			// toolStripButtonUNDO
			// 
			this->toolStripButtonUNDO->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonUNDO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonUNDO.Image")));
			this->toolStripButtonUNDO->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonUNDO->Name = L"toolStripButtonUNDO";
			this->toolStripButtonUNDO->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonUNDO->Text = L"toolStripButton4";
			this->toolStripButtonUNDO->Click += gcnew System::EventHandler(this, &MyPrincipalForm::toolStripButtonUNDO_Click);
			// 
			// toolStripButtonCUT
			// 
			this->toolStripButtonCUT->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonCUT->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonCUT.Image")));
			this->toolStripButtonCUT->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonCUT->Name = L"toolStripButtonCUT";
			this->toolStripButtonCUT->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonCUT->Text = L"toolStripButton5";
			this->toolStripButtonCUT->Click += gcnew System::EventHandler(this, &MyPrincipalForm::toolStripButtonCUT_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButtonFONTNORMAL
			// 
			this->toolStripButtonFONTNORMAL->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonFONTNORMAL->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonFONTNORMAL.Image")));
			this->toolStripButtonFONTNORMAL->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonFONTNORMAL->Name = L"toolStripButtonFONTNORMAL";
			this->toolStripButtonFONTNORMAL->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonFONTNORMAL->Text = L"toolStripButton6";
			this->toolStripButtonFONTNORMAL->Click += gcnew System::EventHandler(this, &MyPrincipalForm::toolStripButtonFONTNORMAL_Click);
			// 
			// toolStripButtonFONTBOLD
			// 
			this->toolStripButtonFONTBOLD->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonFONTBOLD->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonFONTBOLD.Image")));
			this->toolStripButtonFONTBOLD->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonFONTBOLD->Name = L"toolStripButtonFONTBOLD";
			this->toolStripButtonFONTBOLD->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonFONTBOLD->Text = L"toolStripButton7";
			this->toolStripButtonFONTBOLD->Click += gcnew System::EventHandler(this, &MyPrincipalForm::toolStripButtonFONTBOLD_Click);
			// 
			// toolStripButtonCOLORFONT
			// 
			this->toolStripButtonCOLORFONT->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonCOLORFONT->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonCOLORFONT.Image")));
			this->toolStripButtonCOLORFONT->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonCOLORFONT->Name = L"toolStripButtonCOLORFONT";
			this->toolStripButtonCOLORFONT->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonCOLORFONT->Text = L"toolStripButton1";
			this->toolStripButtonCOLORFONT->Click += gcnew System::EventHandler(this, &MyPrincipalForm::toolStripButtonCOLORFONT_Click);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 25);
			// 
			// MyPrincipalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(749, 642);
			this->Controls->Add(this->toolStripContainer1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyPrincipalForm";
			this->Text = L"EasyNote";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->toolStripContainer1->BottomToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->BottomToolStripPanel->PerformLayout();
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->ContentPanel->PerformLayout();
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////	VENTANA DE NOTEPAD ////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// En las siguientes funciones veremos los distintos eventos generados para el menubar

	/////////////////////////
	////// FILE /////////////
	/////////////////////////

	// NEW SUB-BOTON //

	private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento de pusar el boton "new"
	{
		NewFunction();
	}

		   void NewFunction()
		   {
			   textBox1->Clear(); //aqui indicamos que borre todo lo que hay en el textbox para crear una nueva pagina en blanco

			   MessageToolStripStatusLabel1->Text = "New Document Created"; // Aqui indicamos que genero un mensaje en el submenu inferior
		   }

	// SAVE SUB-BOTON //

	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos evento de pulsar el boton "Save"
	{
		SaveFunction();  // Indicamos el metodo de guarda que hemos creado abajo
	}

		   void SaveFunction() // Definimos la funcion
		   {
			   Stream^ myStream; //Aqui creamos el objeto apartir de la clase "Stream"
			   SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog(); //Aqui creamos el objeto apartir de la clase "SaveFileDialog"

			   saveFileDialog1->InitialDirectory = "c:\\"; //Aqui asignamos al objeto la direcion por defecto
			   saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files(*.*)|*.*"; // Aqui indicamos el filtro de que tipo de archivos debe buscar
			   saveFileDialog1->FilterIndex = 2; // Aqui establecemos el indice del filtro
			   saveFileDialog1->RestoreDirectory = true; //Aqui indicamos que siempre reinicie el directorio

			   if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) //Aqui indicamos la condicion de nuestro evento sobre el objeto "saveFileDialog1"
			   {
				   if ((myStream = saveFileDialog1->OpenFile()) != nullptr)  // Aqui indicamos la segundo condicion para poder abrir la ventana de busqueda
				   {
					   StreamWriter^ sw = gcnew StreamWriter(myStream); // Aqui creamos un nuevo objeto nuevo apartir de la clase "Writer" y le asignamos un constructor writer con la instacia del texto
					   sw->Write(textBox1->Text); // Aqui indicamos al objeto "sw" que escriba en un archivo el texto que este en el textbox
					   sw->Close(); // Aqui cerramos la accion del objeto "sw"

					   myStream->Close(); // Aqui cerramos nuestro evento
				   }
			   }
		   }

	// OPEN SUB-BOTON //

	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento de pusar el boton "open"
	{
		OpenFunction(); // Indicamos el metodo de guarda que hemos creado abajo
	}

		   void OpenFunction() // Definimos la funcion
		   {
			   Stream^ myStream; // Aqui creamos nuestro objeto apartir de la clase "Steam"
			   OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog(); //Aqui creamos nuestro objeto apartir de la clase "OpenFileDialog" y le asignamos un nuevo constructor

			   openFileDialog1->InitialDirectory = "c:\\"; //Aqui asignamos al objeto la direcion por defecto
			   openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files(*.*)|*.*"; // Aqui indicamos el filtro de que tipo de archivos debe buscar
			   openFileDialog1->FilterIndex = 2; // Aqui establecemos el indice del filtro
			   openFileDialog1->RestoreDirectory = true; //Aqui indicamos que siempre reinicie el directorio

			   if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) //Aqui indicamos la condicion de nuestro evento sobre el objeto "OpenFileDialog1"
			   {
				   if ((myStream = openFileDialog1->OpenFile()) != nullptr) // Aqui indicamos la segundo condicion para poder abrir la ventana de busqueda
				   {
					   // Ahora llevaremos el text de un archivo a la aplicacion 

					   StreamReader^ sr = gcnew StreamReader(myStream); // Aqui creamos un nuevo objeto nuevo apartir de la clase "Reader" y le asignamos un constructor reader con la instacia del texto
					   textBox1->Text = sr->ReadToEnd(); // Aqui indicamos que en el textbox se inserte el texto del archivo elegido

					   myStream->Close(); // Aqui cerramos nuestro evento
				   }
			   }

			   MessageToolStripStatusLabel1->Text = "File Opened";
		   }

	// CLOSE SUB-BOTON //

	private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento de pusar en el boton "close"
	{
		CloseFunction();
	}

		   void CloseFunction()
		   {
			   Application::Exit(); // Aqui indicamos el cierre de la aplicacion
		   }

	/////////////////////////
    ////// EDIT /////////////
    /////////////////////////

	// UNDO SUB-BOTON //

	private: System::Void undoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //Aqui indicamos el evento al pulsar el boton "Undo"
	{
		UndoFunction();
	}

		   void UndoFunction()
		   {
			   textBox1->Undo(); // Aqui indicamos el metodo de deshacer
		   }

	// CUT SUB-BOTON //

	private: System::Void cutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //Aqui indicamos el evento al pusar el boton "Cut"
	{
		CutFunction();
	}

		   void CutFunction()
		   {
			   textBox1->Cut(); // Aqui indicamos el metodo de cortar texto
		   }

	// COPY SUB-BOTON //

	private: System::Void copyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //Aqui indicamos el evento al pulsar el boton "Copy"
	{
		CopyFunction();
	}

		   void CopyFunction()
		   {
			   textBox1->Copy(); // Aqui indicamos el metodo de copiar el texto
		   }

	// PASTE SUB-BOTON //

	private: System::Void pasteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento al pulsar el boton "Paste"
	{
		PasteFunction();
	}

		   void PasteFunction()
		   {
			   textBox1->Paste(); // Aqui indicamos el metodo de pegar el texto
		   }

	// SELECT ALL SUB-BOTON //

	private: System::Void selectAllToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento al pulsar el boton "SelectAll"
	{
		SelectAllFunction(); // Indicamos el metodo de guarda que hemos creado abajo
	}

		   void SelectAllFunction() // Definimos la funcion
		   {
			   textBox1->SelectAll(); // Aqui indicamos el metodo de selecionar todo el texto
		   }

	/////////////////////////
	////// FORMAT ///////////
	/////////////////////////

	// FONT SUB-BOTON //

	private: System::Void fontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento de pulsar el font
	{
		FontViewFunction();
	}

		   void FontViewFunction()
		   {
			   FontDialog^ fd = gcnew FontDialog(); // Aqui creamos un objeto apartir de clase "FontDialog"

			   if (fd->ShowDialog() == System::Windows::Forms::DialogResult::OK)  // Aqui indicamos la condicion para que nos salga la ventana de las distintas fonts
			   {
				   textBox1->Font = fd->Font; // Aqui indicamos el cambio de font a traves del objeto fd
			   }
		   }

	// FONT-NORMAL SUB-BOTON //

	private: System::Void normalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento de pulsar el boton "normal"
	{
		NormalFontFunction();
	}

		   void NormalFontFunction()
		   {
			   textBox1->Font = gcnew System::Drawing::Font(textBox1->Font, System::Drawing::FontStyle::Regular); //Aqui indicamos el metodo para cambiar el font de los string a Normal
		   }

	// FONT-BOlD SUB-BOTON //

	private: System::Void boldToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento de pulsar el boton "bold"
	{
		BoldFunction();
	}

		   void BoldFunction()
		   {
			   textBox1->Font = gcnew System::Drawing::Font(textBox1->Font, System::Drawing::FontStyle::Bold); //Aqui indicamos el metodo para cambiar el font de los string a bold 
		   }

	// FONT-UNDERLINE SUB-BOTON //

	private: System::Void underlineToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento de pulsar el boton "UnderLine"
	{
		UnderlineFunction();
	}

		   void UnderlineFunction()
		   {
			   textBox1->Font = gcnew System::Drawing::Font(textBox1->Font, System::Drawing::FontStyle::Underline); //Aqui indicamos el metodo para cambiar el font de los string a subrayado
		   }

	// LETTER COLOR SUB-BOTON //

	private: System::Void letterColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento de pulsar el "letterColor"
	{
		ColorFontFunction();
	}

		   void ColorFontFunction()
		   {
			   ColorDialog^ cd = gcnew ColorDialog(); // Aqui creamos un objeto y le asignamos el constructor de "ColorDialog"

			   if (cd->ShowDialog() == System::Windows::Forms::DialogResult::OK) // Aqui indicamos la condicion para que nos salga la ventana de las distintas colors
			   {
				   textBox1->ForeColor = cd->Color; // Aqui indicamos el cambio de font a traves del objeto cd
			   }
		   }

	/////////////////////
	///// HELP //////////
	/////////////////////
	
	// ASK FOR HELP SUB-BOTON //

	private: System::Void ayudaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento al pusar el boton "Ask For Help"
	{
		MessageBox::Show("Enviaremos un informe sobre la incidencia, nos pondremos en contacto pronto con usted.", "Ayuda", MessageBoxButtons::OK, MessageBoxIcon::Information); // Aqui ejecutamos un messageBox de informacion
	}

	//  ABOUT SUB-BOTON //

	private: System::Void acercaDeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //Aqui indicamos el evento al usar el boton "About"
	{
		MessageBox::Show("Esta Aplicacion fue creada por Pablo Alexander en 2023.", "Informacion", MessageBoxButtons::OK, MessageBoxIcon::Information); // Aqui ejecutamos un messageBox de informacion
	}

	///////////////////////////////////
	///// ICON QUICK ACCESS //////////
	/////////////////////////////////

	// En las siguientes funciones veremos los quick access de los icons del menu var para ello crearemos metodos de funciones anteriores

	// ICO SAVE //

	private: System::Void toolStripButtonSAVE_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SaveFunction(); // llamamos al metodo SaveFuntion
	}

	// ICO OPEN //

	private: System::Void toolStripButtonOPEN_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenFunction(); // llamamos al metodo OpenFuntion
	}

	// ICO SELECT ALL //

	private: System::Void toolStripButtonSELECT_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SelectAllFunction(); // llamamos al metodo SelectAllFuntion
	}

	// ICO UNDO //

	private: System::Void toolStripButtonUNDO_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		UndoFunction(); // llamamos al metodo UndoFuntion
	}

	// ICO CUT //

	private: System::Void toolStripButtonCUT_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		CutFunction(); // llamamos al metodo CutFuntion
	}

	// ICO FONTNORMAL //

	private: System::Void toolStripButtonFONTNORMAL_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		NormalFontFunction(); // llamamos al metodo NormalFontFuntion
	}

	// ICO FONTBOLD //

	private: System::Void toolStripButtonFONTBOLD_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		BoldFunction(); // llamamos al metodo BoldFuntion
	}

	// ICO COLORFONT //

	private: System::Void toolStripButtonCOLORFONT_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ColorFontFunction();
	}

	///////////////////////////////////
	////////// STRIPMENU /////////////
	/////////////////////////////////

	// STRIPMENU UNDO //

	private: System::Void undoToolStripMenuItemUNDO_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		UndoFunction();
	}
	
	// STRIPMENU CUT //

	private: System::Void cutToolStripMenuItemCUT_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		CutFunction();
	}

	// STRIPMENU COPY //

	private: System::Void copyToolStripMenuItemCOPY_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		CopyFunction();
	}

	// STRIPMENU PASTE //

	private: System::Void pasteToolStripMenuItemPASTE_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		PasteFunction();
	}

	// STRIPMENU SELECT ALL//

	private: System::Void selectAllToolStripMenuItemSELECT_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SelectAllFunction();
	}
};
}
