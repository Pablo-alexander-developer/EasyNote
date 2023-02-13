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



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->letterColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->boldToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
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
			this->newToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::newToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripMenuItem.Image")));
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::G));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::saveToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripMenuItem.Image")));
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::openToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeToolStripMenuItem.Image")));
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
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
			this->undoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->undoToolStripMenuItem->Text = L"Undo";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::undoToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(177, 6);
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripMenuItem.Image")));
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->cutToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->cutToolStripMenuItem->Text = L"Cut";
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::cutToolStripMenuItem_Click);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripMenuItem.Image")));
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->copyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->copyToolStripMenuItem->Text = L"Copy";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::copyToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteToolStripMenuItem.Image")));
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->pasteToolStripMenuItem->Text = L"Paste";
			this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::pasteToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(177, 6);
			// 
			// selectAllToolStripMenuItem
			// 
			this->selectAllToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"selectAllToolStripMenuItem.Image")));
			this->selectAllToolStripMenuItem->Name = L"selectAllToolStripMenuItem";
			this->selectAllToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->selectAllToolStripMenuItem->Size = System::Drawing::Size(180, 22);
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
			this->fontToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->boldToolStripMenuItem });
			this->fontToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontToolStripMenuItem.Image")));
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->fontToolStripMenuItem->Text = L"Font";
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::fontToolStripMenuItem_Click);
			// 
			// letterColorToolStripMenuItem
			// 
			this->letterColorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"letterColorToolStripMenuItem.Image")));
			this->letterColorToolStripMenuItem->Name = L"letterColorToolStripMenuItem";
			this->letterColorToolStripMenuItem->Size = System::Drawing::Size(180, 22);
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
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ayudaToolStripMenuItem->Text = L"Ask for help";
			this->ayudaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::ayudaToolStripMenuItem_Click);
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"acercaDeToolStripMenuItem.Image")));
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->acercaDeToolStripMenuItem->Text = L"About";
			this->acercaDeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::acercaDeToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(0, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(749, 618);
			this->textBox1->TabIndex = 1;
			// 
			// boldToolStripMenuItem
			// 
			this->boldToolStripMenuItem->Name = L"boldToolStripMenuItem";
			this->boldToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->boldToolStripMenuItem->Text = L"Bold";
			this->boldToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::boldToolStripMenuItem_Click);
			// 
			// MyPrincipalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(749, 642);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyPrincipalForm";
			this->Text = L"EasyNote";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
		textBox1->Clear(); //aqui indicamos que borre todo lo que hay en el textbox para crear una nueva pagina en blanco
	}

	// SAVE SUB-BOTON //

	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos evento de pulsar el boton "Save"
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
		Stream^ myStream; // Aqui creamos nuestro objeto apartir de la clase "Steam"
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog(); //Aqui creamos nuestro objeto apartir de la clase "OpenFileDialog" y le asignamos un nuevo constructor

		openFileDialog1->InitialDirectory = "c:\\"; //Aqui asignamos al objeto la direcion por defecto
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files(*.*)|*.*"; // Aqui indicamos el filtro de que tipo de archivos debe buscar
		openFileDialog1->FilterIndex = 2; // Aqui establecemos el indice del filtro
		openFileDialog1->RestoreDirectory = true; //Aqui indicamos que siempre reinicie el directorio

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) //Aqui indicamos la condicion de nuestro evento sobre el objeto "OpenFileDialog1"
		{
			if((myStream = openFileDialog1->OpenFile())!= nullptr) // Aqui indicamos la segundo condicion para poder abrir la ventana de busqueda
			{
				// Ahora llevaremos el text de un archivo a la aplicacion 

				StreamReader^ sr = gcnew StreamReader(myStream); // Aqui creamos un nuevo objeto nuevo apartir de la clase "Reader" y le asignamos un constructor reader con la instacia del texto
				textBox1->Text = sr->ReadToEnd(); // Aqui indicamos que en el textbox se inserte el texto del archivo elegido

				myStream->Close(); // Aqui cerramos nuestro evento
			}
		}
	}

	// CLOSE SUB-BOTON //

	private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento de pusar en el boton "close"
	{
		Application::Exit(); // Aqui indicamos el cierre de la aplicacion
	}

	/////////////////////////
    ////// EDIT /////////////
    /////////////////////////

	// UNDO SUB-BOTON //

	private: System::Void undoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //Aqui indicamos el evento al pulsar el boton "Undo"
	{
		textBox1->Undo(); // Aqui indicamos el metodo de deshacer
	}

	// CUT SUB-BOTON //

	private: System::Void cutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //Aqui indicamos el evento al pusar el boton "Cut"
	{
		textBox1->Cut(); // Aqui indicamos el metodo de cortar texto
	}

	// COPY SUB-BOTON //

	private: System::Void copyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //Aqui indicamos el evento al pulsar el boton "Copy"
	{
		textBox1->Copy(); // Aqui indicamos el metodo de copiar el texto
	}

	// PASTE SUB-BOTON //

	private: System::Void pasteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento al pulsar el boton "Paste"
	{
		textBox1->Paste(); // Aqui indicamos el metodo de pegar el texto
	}

	// SELECT ALL SUB-BOTON //

	private: System::Void selectAllToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento al pulsar el boton "SelectAll"
	{
		textBox1->SelectAll(); // Aqui indicamos el metodo de selecionar todo el texto
	}

	/////////////////////////
	////// FORMAT ///////////
	/////////////////////////

	// FONT SUB-BOTON //

	private: System::Void fontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento de pulsar el font
	{
		FontDialog^ fd = gcnew FontDialog(); // Aqui creamos un objeto apartir de clase "FontDialog"

		if (fd->ShowDialog() == System::Windows::Forms::DialogResult::OK)  // Aqui indicamos la condicion para que nos salga la ventana de las distintas fonts
		{
			textBox1->Font = fd->Font; // Aqui indicamos el cambio de font a traves del objeto fd
		}
	}

	private: System::Void boldToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Font = gcnew System::Drawing::Font(textBox1->Font, System::Drawing::FontStyle::Bold);
	}

	// LETTER COLOR SUB-BOTON //

	private: System::Void letterColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento de pulsar el "letterColor"
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
};
}
