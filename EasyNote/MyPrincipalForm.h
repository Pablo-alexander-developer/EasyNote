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
	using namespace System::IO;  //filee reading and writing
	using namespace System::Text; // Text property

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->formatToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(774, 24);
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
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::newToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::saveToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::openToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPrincipalForm::closeToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// formatToolStripMenuItem
			// 
			this->formatToolStripMenuItem->Name = L"formatToolStripMenuItem";
			this->formatToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->formatToolStripMenuItem->Text = L"Format";
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(0, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(774, 506);
			this->textBox1->TabIndex = 1;
			// 
			// MyPrincipalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(774, 530);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyPrincipalForm";
			this->Text = L"MyPrincipalForm";
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
		String^ fileName; 
		String^ path = L"c:\\text.txt";

		FileStream^ fs = gcnew FileStream(path,FileMode::CreateNew,FileAccess::Write);
		StreamWriter^ sw = gcnew StreamWriter(fs);
		
		sw->Write(textBox1->Text);
		sw->Close(); //Aqui cerramos el evento

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
};
}
