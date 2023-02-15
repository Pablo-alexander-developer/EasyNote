/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////	AUTOR: PABLO ALEXANDER FERNANDEZ MORALES  ///////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#pragma once
#include "MyPrincipalForm.h" // Aqui llamamos al codigo de la ventana principal de nuestra app

namespace EasyNote {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			//
			//TODO: agregar código de constructor aquí
			//

			InitializeComponent();
			panel1->Hide(); // Indicamos al constructor que por defecto no muestre la venta de terminos y condiciones //
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(153, 149);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(153, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 174);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(210, 26);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(157, 249);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(210, 26);
			this->textBox2->TabIndex = 3;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox2_KeyDown);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(156, 357);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 44);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttonSignIn_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(269, 357);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 44);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(157, 295);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(102, 20);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"I agree to the";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(251, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Terms and Condicions";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(502, 471);
			this->panel1->TabIndex = 8;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(320, 389);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 44);
			this->button3->TabIndex = 5;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(90, 200);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(321, 173);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = resources->GetString(L"textBox3.Text");
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(86, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(189, 22);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Terms and Condicion";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(502, 471);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"EasyNote";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////	VENTANA DE iNICIO DE SESION ///////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	// Con esta funcion vamos a indicar la funcionalidad del checkBox

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos el evento el cual es tener el checkbox en tick //
	{
		if (checkBox1->Checked)  // Aqui aplicamos la condicion de que el checkbox debe estar en check para darle al boton de sign in //
		{
			button1->Enabled = true; // Con este metodo indicamos que si el checkbox esta en check el boton de "Sign in" puede usarse
		}
		else 
		{
			button1->Enabled = false; // Con este metodo indicamos que si el checkbox no esta en check el boton de "Sign in" no puede usarse
		}
	}

	// Con estas funciones siguientes le daremos funcionalidad al los botones de "Sign in" y "Exit"

	///////////////////////////////
	/////// SIGN IN BUTTON/////////
	///////////////////////////////

	private: System::Void buttonSignIn_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos que al pusar el boton "Sign in" debe ejecutar esta condicion //
	{
		SignInFunction();
	}

		   void SignInFunction()
		   {
			   if (textBox1->Text == "admin") // Primera condicion comprueba que los datos metidos en el apartado de "Username" se han correctos //
			   {
				   if (textBox2->Text == "1234")  // Segunda condicion comprueba que la contraseña es correcta // 
				   {
					   MyPrincipalForm^ myprincipalform = gcnew MyPrincipalForm; //Aqui creamos un Objeto a partir de la clase que llamamos al principio del codigo, que crea una nueva ventanta 

					   myprincipalform->Show(); // Aqui indicamos al objeto creado que muestre la ventana

					   MyForm::Hide(); // Aqui indicamos que oculte la ventana de "Sign in"
				   }
				   else // Aqui nos indica que si la contraseña no es correcta saldra una ventana con un error //
				   {
					   MessageBox::Show("Incorrect Username or Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); // Aqui indicamos que salga una ventana pequeña para mostrar el error
				   }

			   }
			   else // Aqui nos indica que si la contraseña no es correcta saldra una ventana con un error //
			   {
				   MessageBox::Show("Incorrect Username or Password ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); // Aqui indicamos que salga una ventana pequeña para mostrar el error
			   }
		   }

	///////////////////////////////
	/////// EXIT BUTTON ///////////
	///////////////////////////////

	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos que al darle click al boton "Exit" se cierre la app //
	{
		ExitFunction();
	}

		   void ExitFunction()
		   {
			   Application::Exit(); //Con este metodo se cierra la app
		   }

	// Con estas funciones siguientes lo que indicamos es cuando puede aparecer la ventana de "Terms and Condicion"

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos que cuando se pulse el label de "Terms and Condicion" se muestre la ventana de Terminos //
	{
		panel1->Show(); //Este es el metodo que nos muestra la ventana
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) // Aqui indicamos que al pulsar al boton "OK" se deje de mostrar la ventana de terminos
	{
		panel1->Hide(); //Este es el metodo que nos oculta la ventana
	}

	// Con las dos funciones siguientes lo que indicamos es que al pulsar "enter" en nuestro teclado se desplase nuestro indicador de texto

		   //admin 
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) // Esta es la funcion para el primer textbox de "Username"
	{
		if (e->KeyValue == (int)Keys::Enter)  // Con esta condicion lo que indicamos es que al pulsar enter nos desplace al segundo textbox
		{
			textBox2->Focus(); // Aqui indicamos el metodo
		}
	}
		//password
	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) // Esta es la funcion de desplazo del textbox de "Password"
	{
		if (e->KeyValue == (int)Keys::Enter) //Con esta segunda funcion indicamos que al pulsar enter nos desplace el selector al boton de "Sign in" y ademas que lo pulse automaticamente
		{
			button1->Focus(); // Este metodo indica el desplazamiento
			button1->PerformClick(); // Este metodo indica el autoclick
		}
	}
};
}
