#pragma once

namespace TicTacToe {

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



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel10;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel10->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 138);
			this->button1->TabIndex = 5;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(202, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(202, 138);
			this->button2->TabIndex = 6;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(403, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(202, 138);
			this->button3->TabIndex = 7;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1, 138);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(202, 138);
			this->button4->TabIndex = 8;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(202, 138);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(202, 138);
			this->button5->TabIndex = 9;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(403, 138);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(202, 138);
			this->button6->TabIndex = 10;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(1, 272);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(202, 138);
			this->button7->TabIndex = 11;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(202, 272);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(202, 138);
			this->button8->TabIndex = 12;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(403, 272);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(202, 138);
			this->button9->TabIndex = 13;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(662, 580);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(406, 46);
			this->button10->TabIndex = 14;
			this->button10->Text = L"RESET";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Desktop;
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(568, 162);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(607, 411);
			this->panel1->TabIndex = 15;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(40, 22);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1287, 78);
			this->panel2->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(205, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(635, 67);
			this->label2->TabIndex = 0;
			this->label2->Text = L"TIC TAC TOE";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Desktop;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Location = System::Drawing::Point(40, 223);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(391, 65);
			this->panel3->TabIndex = 18;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->button11);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel4->Location = System::Drawing::Point(1, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(387, 29);
			this->panel4->TabIndex = 0;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::GrayText;
			this->button11->Location = System::Drawing::Point(347, 5);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(24, 20);
			this->button11->TabIndex = 2;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(5, 6);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Enter Name of Player 1 :";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->Location = System::Drawing::Point(155, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(185, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->button12);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Location = System::Drawing::Point(1, 33);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(387, 30);
			this->panel5->TabIndex = 1;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::GrayText;
			this->button12->Location = System::Drawing::Point(347, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(24, 20);
			this->button12->TabIndex = 3;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(5, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Enter Name of Player 2 :";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox2->Location = System::Drawing::Point(155, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(185, 20);
			this->textBox2->TabIndex = 0;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(-7, -2);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 53);
			this->label5->TabIndex = 19;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Desktop;
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->panel9);
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(this->panel8);
			this->panel6->Location = System::Drawing::Point(43, 315);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(252, 164);
			this->panel6->TabIndex = 20;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ControlText;
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label13);
			this->panel9->Controls->Add(this->label12);
			this->panel9->Controls->Add(this->label7);
			this->panel9->Location = System::Drawing::Point(2, 108);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(246, 53);
			this->panel9->TabIndex = 23;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label13.Image")));
			this->label13->Location = System::Drawing::Point(187, -4);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(57, 54);
			this->label13->TabIndex = 23;
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label12.Image")));
			this->label12->Location = System::Drawing::Point(144, -4);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 53);
			this->label12->TabIndex = 22;
			this->label12->Text = L":";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(-9, -2);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 51);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Draws  ";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->label10);
			this->panel7->Controls->Add(this->label5);
			this->panel7->Location = System::Drawing::Point(2, 1);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(246, 53);
			this->panel7->TabIndex = 21;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel7_Paint);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(188, -2);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 54);
			this->label8->TabIndex = 20;
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->Location = System::Drawing::Point(144, -3);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 56);
			this->label10->TabIndex = 21;
			this->label10->Text = L":";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->label11);
			this->panel8->Controls->Add(this->label9);
			this->panel8->Controls->Add(this->label6);
			this->panel8->Location = System::Drawing::Point(2, 54);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(246, 53);
			this->panel8->TabIndex = 22;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label11.Image")));
			this->label11->Location = System::Drawing::Point(144, -1);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 52);
			this->label11->TabIndex = 22;
			this->label11->Text = L":";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(187, -2);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 54);
			this->label9->TabIndex = 21;
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(-8, -1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(165, 51);
			this->label6->TabIndex = 20;
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::IndianRed;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(-4, -4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(255, 105);
			this->button13->TabIndex = 21;
			this->button13->Text = L"NEW GAME";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::Desktop;
			this->panel10->Controls->Add(this->button13);
			this->panel10->ForeColor = System::Drawing::Color::IndianRed;
			this->panel10->Location = System::Drawing::Point(40, 106);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(240, 92);
			this->panel10->TabIndex = 22;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button10);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		bool check, draw=true;
		int plusx=0, pluso=0, plusd=0;

#pragma endregion
		
		
		

	 void off()
		{
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;

		}
		

		void score()
		{
			
				if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X")
				{
					button1->BackColor = System::Drawing::Color::DarkGray;
					button2->BackColor = System::Drawing::Color::DarkGray;
					button3->BackColor = System::Drawing::Color::DarkGray;
					plusx = plusx + 1;
					label8->Text = System::Convert::ToString(plusx);
					MessageBox::Show(" THE WINNER IS PLAYYER X", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;
				}
				if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X")
				{
					button4->BackColor = System::Drawing::Color::DarkGray;
					button5->BackColor = System::Drawing::Color::DarkGray;
					button6->BackColor = System::Drawing::Color::DarkGray;
					
					plusx = plusx + 1;
					label8->Text = System::Convert::ToString(plusx);
					MessageBox::Show(" THE WINNER IS PLAYYER X", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					draw = false;
			       off();
				}
				if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X")
				{
					button7->BackColor = System::Drawing::Color::DarkGray;
					button8->BackColor = System::Drawing::Color::DarkGray;
					button9->BackColor = System::Drawing::Color::DarkGray;
					
					plusx = plusx + 1;
					label8->Text = System::Convert::ToString(plusx);
					MessageBox::Show(" THE WINNER IS PLAYYER X", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;

				}
				if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X")
				{
					button1->BackColor = System::Drawing::Color::DarkGray;
					button4->BackColor = System::Drawing::Color::DarkGray;
					button7->BackColor = System::Drawing::Color::DarkGray;
					plusx = plusx + 1;
					label8->Text = System::Convert::ToString(plusx);
					MessageBox::Show(" THE WINNER IS PLAYYER X", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;

				}
				if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X")
				{
					button2->BackColor = System::Drawing::Color::DarkGray;
					button5->BackColor = System::Drawing::Color::DarkGray;
					button8->BackColor = System::Drawing::Color::DarkGray;
					
					plusx = plusx + 1;
					label8->Text = System::Convert::ToString(plusx);
					MessageBox::Show(" THE WINNER IS PLAYYER X", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
				    off();
					draw = false;

				}
				if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X")
				{
					button3->BackColor = System::Drawing::Color::DarkGray;
					button6->BackColor = System::Drawing::Color::DarkGray;
					button9->BackColor = System::Drawing::Color::DarkGray;
					plusx = plusx + 1;
					label8->Text = System::Convert::ToString(plusx);
					MessageBox::Show(" THE WINNER IS PLAYYER X", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;

				}
				if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X")
				{
					button1->BackColor = System::Drawing::Color::DarkGray;
					button5->BackColor = System::Drawing::Color::DarkGray;
					button9->BackColor = System::Drawing::Color::DarkGray;
					
					plusx = plusx + 1;
					label8->Text = System::Convert::ToString(plusx);
					MessageBox::Show(" THE WINNER IS PLAYYER X", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;

				}
				if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X")
				{
					button3->BackColor = System::Drawing::Color::DarkGray;
					button5->BackColor = System::Drawing::Color::DarkGray;
					button7->BackColor = System::Drawing::Color::DarkGray;
					
					plusx = plusx + 1;
					label8->Text = System::Convert::ToString(plusx);
					MessageBox::Show(" THE WINNER IS PLAYYER X", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;

				}
				//***********************************************************************************************************************************


				if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O")
				{
					button1->BackColor = System::Drawing::Color::DarkGray;
					button2->BackColor = System::Drawing::Color::DarkGray;
					button3->BackColor = System::Drawing::Color::DarkGray;
					
					pluso = pluso + 1;
					label9->Text = System::Convert::ToString(pluso);
					MessageBox::Show(" THE WINNER IS PLAYYER O", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;


				;
				}
				if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O")
				{
					button4->BackColor = System::Drawing::Color::DarkGray;
					button5->BackColor = System::Drawing::Color::DarkGray;
					button6->BackColor = System::Drawing::Color::DarkGray;
					pluso = pluso + 1;
					label9->Text = System::Convert::ToString(pluso);
					MessageBox::Show(" THE WINNER IS PLAYYER O", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;

				}
				if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O")
				{
					button7->BackColor = System::Drawing::Color::DarkGray;
					button8->BackColor = System::Drawing::Color::DarkGray;
					button9->BackColor = System::Drawing::Color::DarkGray;
					pluso = pluso + 1;
					label9->Text = System::Convert::ToString(pluso);
					MessageBox::Show(" THE WINNER IS PLAYYER O", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;


					
				}
				if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O")
				{
					button1->BackColor = System::Drawing::Color::DarkGray;
					button4->BackColor = System::Drawing::Color::DarkGray;
					button7->BackColor = System::Drawing::Color::DarkGray;
					pluso = pluso + 1;
					label9->Text = System::Convert::ToString(pluso);
					MessageBox::Show(" THE WINNER IS PLAYYER O", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;

					
				}
				if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O")
				{
					button2->BackColor = System::Drawing::Color::DarkGray;
					button5->BackColor = System::Drawing::Color::DarkGray;
					button8->BackColor = System::Drawing::Color::DarkGray;
					pluso = pluso + 1;
					label9->Text = System::Convert::ToString(pluso);
					MessageBox::Show(" THE WINNER IS PLAYYER O", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;

				}
				if (button3->Text == "O" && button6->Text == "O" && button9->Text == "O")
				{
					button3->BackColor = System::Drawing::Color::DarkGray;
					button6->BackColor = System::Drawing::Color::DarkGray;
					button9->BackColor = System::Drawing::Color::DarkGray;
					
					pluso = pluso + 1;
					label9->Text = System::Convert::ToString(pluso);
					MessageBox::Show(" THE WINNER IS PLAYYER O", " TIC TAC TOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;

				}
				if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O")
				{
					button1->BackColor = System::Drawing::Color::DarkGray;
					button5->BackColor = System::Drawing::Color::DarkGray;
					button9->BackColor = System::Drawing::Color::DarkGray;
					pluso = pluso + 1;
					label9->Text = System::Convert::ToString(pluso);
					MessageBox::Show(" THE WINNER IS PLAYYER O", " WNNER ANNOUNCEMENT ", MessageBoxButtons::OK, MessageBoxIcon::Information);
					off();
					draw = false;

				}
				if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O")
				{
					button3->BackColor = System::Drawing::Color::DarkGray;
					button5->BackColor = System::Drawing::Color::DarkGray;
					button7->BackColor = System::Drawing::Color::DarkGray;
					pluso = pluso + 1;
					label9->Text = System::Convert::ToString(pluso);
					MessageBox::Show(" THE WINNER IS PLAYYER O", " WINNER ANNOUNCEMENT", MessageBoxButtons::OK, MessageBoxIcon::Information);
					
					draw = false;

					off();
				}
			
				
				if (((button1->Text == "X"|| button1->Text == "O")&& (button2->Text == "X" || button2->Text == "O")&& (button3->Text == "X" || button3->Text == "O")&& (button4->Text == "X" || button4->Text == "O")&& (button5->Text == "X" || button5->Text == "O")&& (button6->Text == "X" || button6->Text == "O")&& (button7->Text == "X" || button7->Text == "O")&&(button8->Text == "X" || button8->Text == "O")&& (button9->Text == "X" || button9->Text == "O"))&&(draw=true))
				{
					MessageBox::Show(" Draw", " WINNER ANNOUNCEMENT", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plusd = plusd + 1;
					label13->Text = System::Convert::ToString(plusd);
				}

			
}

//**************************************************************************************************************************************
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	
	MessageBox::Show(" WELCOME TO TIC TAC TOE\nEnter Your Names in The Text Box\nThen Press The Button Infront", " GAME", MessageBoxButtons::OK, MessageBoxIcon::Information);
		

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (check == false)
	{
		button1->Text = "X";
		check = true;
	}
	else
	{
		button1->Text = "O";
		check = false;
	}
	score();
	button1->Enabled = false;

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (check == false)
	{
		button2->Text = "X";
		check = true;
	}
	else
	{
		button2->Text = "O";
		check = false;
	}
	score();
	button2->Enabled = false;
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (check == false)
	{
		button3->Text = "X";
		check = true;
	}
	else
	{
		button3->Text = "O";
		check = false;
	}
	score();
	button3->Enabled = false;
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (check == false)
	{
		button4->Text = "X";
		check = true;
	}
	else
	{
		button4->Text = "O";
		check = false;
	}
	score();
	button4->Enabled = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (check == false)
	{
		button5->Text = "X";
		check = true;
	}
	else
	{
		button5->Text = "O";
		check = false;
	}
	score();
	button5->Enabled = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (check == false)
	{
		button6->Text = "X";
		check = true;
	}
	else
	{
		button6->Text = "O";
		check = false;
	}
	score();
	button6->Enabled = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (check == false)
	{
		button7->Text = "X";
		check = true;
	}
	else
	{
		button7->Text = "O";
		check = false;
	}
	score();
	button7->Enabled = false;
}


private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (check == false)
	{
		button8->Text = "X";
		check = true;
	}
	else
	{
		button8->Text = "O";
		check = false;
	}
	score();
	button8->Enabled = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (check == false)
	{
		button9->Text = "X";
		check = true;
	}
	else
	{
		button9->Text = "O";
		check = false;
	}
	score();
	button9->Enabled = false;
}
	

	  
	



private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) 
{
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;
	button13->Enabled = true;
	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";
	button1->BackColor = System::Drawing::Color::White;
	button2->BackColor = System::Drawing::Color::White;
	button3->BackColor = System::Drawing::Color::White;
	button4->BackColor = System::Drawing::Color::White;
	button5->BackColor = System::Drawing::Color::White;
	button6->BackColor = System::Drawing::Color::White;
	button7->BackColor = System::Drawing::Color::White;
	button8->BackColor = System::Drawing::Color::White;
	button9->BackColor = System::Drawing::Color::White;
}



private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label5->Text = textBox1->Text ;
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label6->Text = textBox2->Text;
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) 
{
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;
	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";
	button1->BackColor = System::Drawing::Color::White;
	button2->BackColor = System::Drawing::Color::White;
	button3->BackColor = System::Drawing::Color::White;
	button4->BackColor = System::Drawing::Color::White;
	button5->BackColor = System::Drawing::Color::White;
	button6->BackColor = System::Drawing::Color::White;
	button7->BackColor = System::Drawing::Color::White;
	button8->BackColor = System::Drawing::Color::White;
	button9->BackColor = System::Drawing::Color::White;
	plusx = 0;
	label8->Text = System::Convert::ToString(plusx);
	pluso = 0;
	label9->Text = System::Convert::ToString(pluso);
	plusd = 0;
	label13->Text = System::Convert::ToString(plusd);
	label5->Text = "";
	textBox1->Text = "";
	label6->Text = "";
	textBox2->Text = "";





}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
