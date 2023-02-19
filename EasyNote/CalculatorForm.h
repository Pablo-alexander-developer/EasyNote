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

	/// <summary>
	/// Resumen de CalculatorForm
	/// </summary>
	/// 

	public ref class CalculatorForm : public System::Windows::Forms::Form
	{
	public:
		CalculatorForm(void)
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
		~CalculatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ ValueTextBox;
	private: System::Windows::Forms::PictureBox^ Change;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^ Zero;
	private: System::Windows::Forms::PictureBox^ Comma;
	private: System::Windows::Forms::PictureBox^ Cclear;

	private: System::Windows::Forms::PictureBox^ Equal;
	private: System::Windows::Forms::PictureBox^ Divide;





	private: System::Windows::Forms::PictureBox^ Minus;

	private: System::Windows::Forms::PictureBox^ Three;

	private: System::Windows::Forms::PictureBox^ Two;

	private: System::Windows::Forms::PictureBox^ One;
	private: System::Windows::Forms::PictureBox^ Multipy;


	private: System::Windows::Forms::PictureBox^ Plus;

	private: System::Windows::Forms::PictureBox^ Six;

	private: System::Windows::Forms::PictureBox^ Five;

	private: System::Windows::Forms::PictureBox^ Four;
	private: System::Windows::Forms::PictureBox^ Delete;


	private: System::Windows::Forms::PictureBox^ Nine;

	private: System::Windows::Forms::PictureBox^ Eight;


	private: System::Windows::Forms::PictureBox^ Seven;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CalculatorForm::typeid));
			this->ValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->Change = (gcnew System::Windows::Forms::PictureBox());
			this->Zero = (gcnew System::Windows::Forms::PictureBox());
			this->Comma = (gcnew System::Windows::Forms::PictureBox());
			this->Cclear = (gcnew System::Windows::Forms::PictureBox());
			this->Equal = (gcnew System::Windows::Forms::PictureBox());
			this->Divide = (gcnew System::Windows::Forms::PictureBox());
			this->Minus = (gcnew System::Windows::Forms::PictureBox());
			this->Three = (gcnew System::Windows::Forms::PictureBox());
			this->Two = (gcnew System::Windows::Forms::PictureBox());
			this->One = (gcnew System::Windows::Forms::PictureBox());
			this->Multipy = (gcnew System::Windows::Forms::PictureBox());
			this->Plus = (gcnew System::Windows::Forms::PictureBox());
			this->Six = (gcnew System::Windows::Forms::PictureBox());
			this->Five = (gcnew System::Windows::Forms::PictureBox());
			this->Four = (gcnew System::Windows::Forms::PictureBox());
			this->Delete = (gcnew System::Windows::Forms::PictureBox());
			this->Nine = (gcnew System::Windows::Forms::PictureBox());
			this->Eight = (gcnew System::Windows::Forms::PictureBox());
			this->Seven = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Change))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Zero))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Comma))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cclear))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Equal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Divide))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Minus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Three))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Two))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->One))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Multipy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Plus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Six))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Five))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Four))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Delete))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nine))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Eight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Seven))->BeginInit();
			this->SuspendLayout();
			// 
			// ValueTextBox
			// 
			this->ValueTextBox->Location = System::Drawing::Point(21, 32);
			this->ValueTextBox->Margin = System::Windows::Forms::Padding(6);
			this->ValueTextBox->Name = L"ValueTextBox";
			this->ValueTextBox->Size = System::Drawing::Size(359, 32);
			this->ValueTextBox->TabIndex = 0;
			this->ValueTextBox->Text = L"0";
			this->ValueTextBox->TextChanged += gcnew System::EventHandler(this, &CalculatorForm::ValueTextBox_TextChanged);
			// 
			// Change
			// 
			this->Change->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Change.Image")));
			this->Change->Location = System::Drawing::Point(21, 311);
			this->Change->Name = L"Change";
			this->Change->Size = System::Drawing::Size(67, 68);
			this->Change->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Change->TabIndex = 1;
			this->Change->TabStop = false;
			this->Change->Click += gcnew System::EventHandler(this, &CalculatorForm::Change_Click);
			// 
			// Zero
			// 
			this->Zero->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Zero->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Zero.Image")));
			this->Zero->Location = System::Drawing::Point(94, 311);
			this->Zero->Name = L"Zero";
			this->Zero->Size = System::Drawing::Size(67, 68);
			this->Zero->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Zero->TabIndex = 2;
			this->Zero->TabStop = false;
			this->Zero->Click += gcnew System::EventHandler(this, &CalculatorForm::Zero_Click);
			// 
			// Comma
			// 
			this->Comma->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Comma->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Comma.Image")));
			this->Comma->Location = System::Drawing::Point(167, 311);
			this->Comma->Name = L"Comma";
			this->Comma->Size = System::Drawing::Size(67, 68);
			this->Comma->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Comma->TabIndex = 3;
			this->Comma->TabStop = false;
			this->Comma->Click += gcnew System::EventHandler(this, &CalculatorForm::Comma_Click);
			// 
			// Cclear
			// 
			this->Cclear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Cclear->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cclear.Image")));
			this->Cclear->Location = System::Drawing::Point(240, 311);
			this->Cclear->Name = L"Cclear";
			this->Cclear->Size = System::Drawing::Size(67, 68);
			this->Cclear->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Cclear->TabIndex = 4;
			this->Cclear->TabStop = false;
			this->Cclear->Click += gcnew System::EventHandler(this, &CalculatorForm::Cclear_Click);
			// 
			// Equal
			// 
			this->Equal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Equal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Equal.Image")));
			this->Equal->Location = System::Drawing::Point(313, 311);
			this->Equal->Name = L"Equal";
			this->Equal->Size = System::Drawing::Size(67, 68);
			this->Equal->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Equal->TabIndex = 5;
			this->Equal->TabStop = false;
			this->Equal->Click += gcnew System::EventHandler(this, &CalculatorForm::Equal_Click);
			// 
			// Divide
			// 
			this->Divide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Divide->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Divide.Image")));
			this->Divide->Location = System::Drawing::Point(313, 237);
			this->Divide->Name = L"Divide";
			this->Divide->Size = System::Drawing::Size(67, 68);
			this->Divide->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Divide->TabIndex = 10;
			this->Divide->TabStop = false;
			this->Divide->Click += gcnew System::EventHandler(this, &CalculatorForm::Divide_Click);
			// 
			// Minus
			// 
			this->Minus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Minus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Minus.Image")));
			this->Minus->Location = System::Drawing::Point(240, 237);
			this->Minus->Name = L"Minus";
			this->Minus->Size = System::Drawing::Size(67, 68);
			this->Minus->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Minus->TabIndex = 9;
			this->Minus->TabStop = false;
			this->Minus->Click += gcnew System::EventHandler(this, &CalculatorForm::Minus_Click);
			// 
			// Three
			// 
			this->Three->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Three->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Three.Image")));
			this->Three->Location = System::Drawing::Point(167, 237);
			this->Three->Name = L"Three";
			this->Three->Size = System::Drawing::Size(67, 68);
			this->Three->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Three->TabIndex = 8;
			this->Three->TabStop = false;
			this->Three->Click += gcnew System::EventHandler(this, &CalculatorForm::Three_Click);
			// 
			// Two
			// 
			this->Two->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Two->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Two.Image")));
			this->Two->Location = System::Drawing::Point(94, 237);
			this->Two->Name = L"Two";
			this->Two->Size = System::Drawing::Size(67, 68);
			this->Two->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Two->TabIndex = 7;
			this->Two->TabStop = false;
			this->Two->Click += gcnew System::EventHandler(this, &CalculatorForm::Two_Click);
			// 
			// One
			// 
			this->One->Cursor = System::Windows::Forms::Cursors::Hand;
			this->One->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"One.Image")));
			this->One->Location = System::Drawing::Point(21, 237);
			this->One->Name = L"One";
			this->One->Size = System::Drawing::Size(67, 68);
			this->One->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->One->TabIndex = 6;
			this->One->TabStop = false;
			this->One->Click += gcnew System::EventHandler(this, &CalculatorForm::One_Click);
			// 
			// Multipy
			// 
			this->Multipy->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Multipy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Multipy.Image")));
			this->Multipy->Location = System::Drawing::Point(313, 163);
			this->Multipy->Name = L"Multipy";
			this->Multipy->Size = System::Drawing::Size(67, 68);
			this->Multipy->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Multipy->TabIndex = 15;
			this->Multipy->TabStop = false;
			this->Multipy->Click += gcnew System::EventHandler(this, &CalculatorForm::Multipy_Click);
			// 
			// Plus
			// 
			this->Plus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Plus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Plus.Image")));
			this->Plus->Location = System::Drawing::Point(240, 163);
			this->Plus->Name = L"Plus";
			this->Plus->Size = System::Drawing::Size(67, 68);
			this->Plus->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Plus->TabIndex = 14;
			this->Plus->TabStop = false;
			this->Plus->Click += gcnew System::EventHandler(this, &CalculatorForm::Plus_Click);
			// 
			// Six
			// 
			this->Six->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Six->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Six.Image")));
			this->Six->Location = System::Drawing::Point(167, 163);
			this->Six->Name = L"Six";
			this->Six->Size = System::Drawing::Size(67, 68);
			this->Six->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Six->TabIndex = 13;
			this->Six->TabStop = false;
			this->Six->Click += gcnew System::EventHandler(this, &CalculatorForm::Six_Click);
			// 
			// Five
			// 
			this->Five->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Five->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Five.Image")));
			this->Five->Location = System::Drawing::Point(94, 163);
			this->Five->Name = L"Five";
			this->Five->Size = System::Drawing::Size(67, 68);
			this->Five->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Five->TabIndex = 12;
			this->Five->TabStop = false;
			this->Five->Click += gcnew System::EventHandler(this, &CalculatorForm::Five_Click);
			// 
			// Four
			// 
			this->Four->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Four->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Four.Image")));
			this->Four->Location = System::Drawing::Point(21, 163);
			this->Four->Name = L"Four";
			this->Four->Size = System::Drawing::Size(67, 68);
			this->Four->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Four->TabIndex = 11;
			this->Four->TabStop = false;
			this->Four->Click += gcnew System::EventHandler(this, &CalculatorForm::Four_Click);
			// 
			// Delete
			// 
			this->Delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete.Image")));
			this->Delete->Location = System::Drawing::Point(240, 89);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(140, 68);
			this->Delete->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Delete->TabIndex = 19;
			this->Delete->TabStop = false;
			this->Delete->Click += gcnew System::EventHandler(this, &CalculatorForm::Delete_Click);
			// 
			// Nine
			// 
			this->Nine->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Nine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nine.Image")));
			this->Nine->Location = System::Drawing::Point(167, 89);
			this->Nine->Name = L"Nine";
			this->Nine->Size = System::Drawing::Size(67, 68);
			this->Nine->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Nine->TabIndex = 18;
			this->Nine->TabStop = false;
			this->Nine->Click += gcnew System::EventHandler(this, &CalculatorForm::Nine_Click);
			// 
			// Eight
			// 
			this->Eight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Eight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Eight.Image")));
			this->Eight->Location = System::Drawing::Point(94, 89);
			this->Eight->Name = L"Eight";
			this->Eight->Size = System::Drawing::Size(67, 68);
			this->Eight->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Eight->TabIndex = 17;
			this->Eight->TabStop = false;
			this->Eight->Click += gcnew System::EventHandler(this, &CalculatorForm::Eight_Click);
			// 
			// Seven
			// 
			this->Seven->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Seven->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Seven.Image")));
			this->Seven->Location = System::Drawing::Point(21, 89);
			this->Seven->Name = L"Seven";
			this->Seven->Size = System::Drawing::Size(67, 68);
			this->Seven->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Seven->TabIndex = 16;
			this->Seven->TabStop = false;
			this->Seven->Click += gcnew System::EventHandler(this, &CalculatorForm::Seven_Click);
			// 
			// CalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(401, 421);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Nine);
			this->Controls->Add(this->Eight);
			this->Controls->Add(this->Seven);
			this->Controls->Add(this->Multipy);
			this->Controls->Add(this->Plus);
			this->Controls->Add(this->Six);
			this->Controls->Add(this->Five);
			this->Controls->Add(this->Four);
			this->Controls->Add(this->Divide);
			this->Controls->Add(this->Minus);
			this->Controls->Add(this->Three);
			this->Controls->Add(this->Two);
			this->Controls->Add(this->One);
			this->Controls->Add(this->Equal);
			this->Controls->Add(this->Cclear);
			this->Controls->Add(this->Comma);
			this->Controls->Add(this->Zero);
			this->Controls->Add(this->Change);
			this->Controls->Add(this->ValueTextBox);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CalculatorForm";
			this->Text = L"Calculator EasyNote";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Change))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Zero))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Comma))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cclear))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Equal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Divide))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Minus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Three))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Two))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->One))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Multipy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Plus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Six))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Five))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Four))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Delete))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nine))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Eight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Seven))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	//Con esta funcion logramo quitar el cero del principio de la interfaz

		void RemoveZeroFunction(int number)
		{
			if (ValueTextBox->Text == "0")
			{
				ValueTextBox->Text = number.ToString();
			}
			else
			{
				ValueTextBox->Text += number.ToString();
			}
		}


	// Funcionalida sobre los botenes de la calculadora //

	// ZERO-BUTTON //

	private: System::Void Zero_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RemoveZeroFunction(0);
	}

	// ONE-BUTTON //

	private: System::Void One_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RemoveZeroFunction(1);
	}

	// TWO-BUTTON //

	private: System::Void Two_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RemoveZeroFunction(2);
	}

	// THREE-BUTTON //

	private: System::Void Three_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RemoveZeroFunction(3);
	}

	// FOUR-BUTTON //

	private: System::Void Four_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RemoveZeroFunction(4);
	}

	// FIVE-BUTTON //

	private: System::Void Five_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RemoveZeroFunction(5);
	}

	// SIX-BUTTON //

	private: System::Void Six_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RemoveZeroFunction(6);
	}

	// SEVEN-BUTTON //

	private: System::Void Seven_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RemoveZeroFunction(7);
	}

	// EIGHT-BUTTON //

	private: System::Void Eight_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RemoveZeroFunction(8);
	}

	// NINE-BUTTON //

	private: System::Void Nine_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RemoveZeroFunction(9);
	}

	// DELETE-BUTTON //

	private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if(ValueTextBox->Text->Length >0)
		{
			ValueTextBox->Text = ValueTextBox->Text->Remove(ValueTextBox->Text->Length - 1, 1);
		}
	}

	// TEXT DEFAULT-BUTTON //

	private: System::Void ValueTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (ValueTextBox->Text == "")
		{
			ValueTextBox->Text = "0";
		}
	}


	// CCLEAR-BUTTON //
			
	private: System::Void Cclear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ValueTextBox->Clear();
		ValueTextBox->Text = "0";
	}

	// CHANGE-BUTTON //

	private: System::Void Change_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (ValueTextBox->Text->Contains("-"))
		{
			ValueTextBox->Text = ValueTextBox->Text->Remove(0, 1);
		}
		else 
		{
			ValueTextBox->Text = "-" + ValueTextBox->Text;
		}
	}

	// COMMA-BUTTON //

	private: System::Void Comma_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (!ValueTextBox->Text->Contains(","))
		{
			ValueTextBox->Text += ",";
		}

	}

	//FUNCION DE ASIGNACION
	
	Double FirtsNumber, SecondNumber, Answer;
	String^ operaTor;

	void CalculateFunction(String^ opratoR)
	{
		operaTor = opratoR;

		FirtsNumber = Double::Parse(ValueTextBox->Text);

		ValueTextBox->Text = "0";
	}

	// PLUS-BUTTON //

	private: System::Void Plus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CalculateFunction("+");
	}
	
	// MINUS-BUTTON //

	private: System::Void Minus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		CalculateFunction("-");
	}

	// MULTIPLY-BUTTON //

	private: System::Void Multipy_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		CalculateFunction("*");
	}
		   
	// DIVIDE-BUTTON //

	private: System::Void Divide_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		CalculateFunction("/");
	}
		   
	// EQUAL-BUTTON //

	private: System::Void Equal_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SecondNumber = Double::Parse(ValueTextBox->Text);

		if (operaTor->Equals("+"))
		{
			Answer = FirtsNumber + SecondNumber;
		}
		else if (operaTor->Equals("-"))
		{
			Answer = FirtsNumber - SecondNumber;
		}
		else if (operaTor->Equals("*"))
		{
			Answer = FirtsNumber * SecondNumber;
		}
		else if (operaTor->Equals("/"))
		{
			Answer = FirtsNumber / SecondNumber;
		}

		ValueTextBox->Text = Answer.ToString();
	}

};
}
