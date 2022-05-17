#pragma once
#include "DB.h"



namespace RegistroPadillo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de home
	/// </summary>
	public ref class home : public System::Windows::Forms::Form
	{
	public:
		home(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txt_user;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_LogIn;
	private: System::Windows::Forms::Button^ btn_SignIn;
	private: System::Windows::Forms::DataGridView^ dgv_Show;
	private: System::Windows::Forms::Button^ btn_Delete;
	private: System::Windows::Forms::Button^ btn_Pdf;
	private: DB^ data;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_nmail;
	private: System::Windows::Forms::TextBox^ txt_npassword;
	private: System::Windows::Forms::TextBox^ txt_nname;
	private: System::Windows::Forms::TextBox^ txt_nsurname;




	private: System::Windows::Forms::CheckBox^ chb_Male;
	private: System::Windows::Forms::CheckBox^ chb_Female;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ txt_age;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_user = (gcnew System::Windows::Forms::TextBox());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_LogIn = (gcnew System::Windows::Forms::Button());
			this->btn_SignIn = (gcnew System::Windows::Forms::Button());
			this->dgv_Show = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Delete = (gcnew System::Windows::Forms::Button());
			this->btn_Pdf = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_nmail = (gcnew System::Windows::Forms::TextBox());
			this->txt_npassword = (gcnew System::Windows::Forms::TextBox());
			this->txt_nname = (gcnew System::Windows::Forms::TextBox());
			this->txt_nsurname = (gcnew System::Windows::Forms::TextBox());
			this->chb_Male = (gcnew System::Windows::Forms::CheckBox());
			this->chb_Female = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txt_age = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Show))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(340, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BIENVENIDO";
			// 
			// txt_user
			// 
			this->txt_user->Location = System::Drawing::Point(207, 189);
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(129, 20);
			this->txt_user->TabIndex = 1;
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(207, 215);
			this->txt_password->MaxLength = 8;
			this->txt_password->Name = L"txt_password";
			this->txt_password->PasswordChar = '*';
			this->txt_password->Size = System::Drawing::Size(129, 20);
			this->txt_password->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(109, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Usuario:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(109, 215);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Contraseña:";
			// 
			// btn_LogIn
			// 
			this->btn_LogIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_LogIn->Location = System::Drawing::Point(170, 345);
			this->btn_LogIn->Name = L"btn_LogIn";
			this->btn_LogIn->Size = System::Drawing::Size(118, 30);
			this->btn_LogIn->TabIndex = 5;
			this->btn_LogIn->Text = L"Iniciar sesion";
			this->btn_LogIn->UseVisualStyleBackColor = true;
			this->btn_LogIn->Click += gcnew System::EventHandler(this, &home::btn_LogIn_Click);
			// 
			// btn_SignIn
			// 
			this->btn_SignIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_SignIn->Location = System::Drawing::Point(643, 345);
			this->btn_SignIn->Name = L"btn_SignIn";
			this->btn_SignIn->Size = System::Drawing::Size(99, 30);
			this->btn_SignIn->TabIndex = 6;
			this->btn_SignIn->Text = L"Registrarse";
			this->btn_SignIn->UseVisualStyleBackColor = true;
			this->btn_SignIn->Click += gcnew System::EventHandler(this, &home::btn_SignIn_Click);
			// 
			// dgv_Show
			// 
			this->dgv_Show->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Show->Location = System::Drawing::Point(12, 425);
			this->dgv_Show->Name = L"dgv_Show";
			this->dgv_Show->Size = System::Drawing::Size(886, 85);
			this->dgv_Show->TabIndex = 7;
			// 
			// btn_Delete
			// 
			this->btn_Delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Delete->Location = System::Drawing::Point(12, 516);
			this->btn_Delete->Name = L"btn_Delete";
			this->btn_Delete->Size = System::Drawing::Size(76, 34);
			this->btn_Delete->TabIndex = 8;
			this->btn_Delete->Text = L"Borrar";
			this->btn_Delete->UseVisualStyleBackColor = true;
			this->btn_Delete->Click += gcnew System::EventHandler(this, &home::btn_Delete_Click);
			// 
			// btn_Pdf
			// 
			this->btn_Pdf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Pdf->Location = System::Drawing::Point(94, 516);
			this->btn_Pdf->Name = L"btn_Pdf";
			this->btn_Pdf->Size = System::Drawing::Size(105, 34);
			this->btn_Pdf->TabIndex = 9;
			this->btn_Pdf->Text = L"Imprimir PDF";
			this->btn_Pdf->UseVisualStyleBackColor = true;

			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(555, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Email:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Snow;
			this->label5->Location = System::Drawing::Point(554, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Password:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(554, 189);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Nombre:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Snow;
			this->label7->Location = System::Drawing::Point(554, 215);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Apellidos:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(553, 248);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Edad:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(554, 278);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 20);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Sexo:";
			// 
			// txt_nmail
			// 
			this->txt_nmail->Location = System::Drawing::Point(668, 133);
			this->txt_nmail->Name = L"txt_nmail";
			this->txt_nmail->Size = System::Drawing::Size(129, 20);
			this->txt_nmail->TabIndex = 16;
			// 
			// txt_npassword
			// 
			this->txt_npassword->Location = System::Drawing::Point(668, 160);
			this->txt_npassword->MaxLength = 8;
			this->txt_npassword->Name = L"txt_npassword";
			this->txt_npassword->PasswordChar = '*';
			this->txt_npassword->Size = System::Drawing::Size(129, 20);
			this->txt_npassword->TabIndex = 17;
			// 
			// txt_nname
			// 
			this->txt_nname->Location = System::Drawing::Point(668, 189);
			this->txt_nname->Name = L"txt_nname";
			this->txt_nname->Size = System::Drawing::Size(129, 20);
			this->txt_nname->TabIndex = 18;
			// 
			// txt_nsurname
			// 
			this->txt_nsurname->Location = System::Drawing::Point(668, 215);
			this->txt_nsurname->Name = L"txt_nsurname";
			this->txt_nsurname->Size = System::Drawing::Size(129, 20);
			this->txt_nsurname->TabIndex = 19;
			// 
			// chb_Male
			// 
			this->chb_Male->AutoSize = true;
			this->chb_Male->ForeColor = System::Drawing::Color::Snow;
			this->chb_Male->Location = System::Drawing::Point(668, 280);
			this->chb_Male->Name = L"chb_Male";
			this->chb_Male->Size = System::Drawing::Size(74, 17);
			this->chb_Male->TabIndex = 20;
			this->chb_Male->Text = L"Masculino";
			this->chb_Male->UseVisualStyleBackColor = true;
			// 
			// chb_Female
			// 
			this->chb_Female->AutoSize = true;
			this->chb_Female->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->chb_Female->Location = System::Drawing::Point(749, 280);
			this->chb_Female->Name = L"chb_Female";
			this->chb_Female->Size = System::Drawing::Size(72, 17);
			this->chb_Female->TabIndex = 21;
			this->chb_Female->Text = L"Femenino";
			this->chb_Female->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Gray;
			this->label10->Location = System::Drawing::Point(804, 166);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(99, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"* Max. 8 caracteres";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(446, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(3, 339);
			this->panel1->TabIndex = 24;
			// 
			// txt_age
			// 
			this->txt_age->Location = System::Drawing::Point(668, 247);
			this->txt_age->MaxLength = 2;
			this->txt_age->Name = L"txt_age";
			this->txt_age->Size = System::Drawing::Size(32, 20);
			this->txt_age->TabIndex = 25;
			// 
			// home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Blue;
			this->ClientSize = System::Drawing::Size(910, 562);
			this->Controls->Add(this->txt_age);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->chb_Female);
			this->Controls->Add(this->chb_Male);
			this->Controls->Add(this->txt_nsurname);
			this->Controls->Add(this->txt_nname);
			this->Controls->Add(this->txt_npassword);
			this->Controls->Add(this->txt_nmail);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_Pdf);
			this->Controls->Add(this->btn_Delete);
			this->Controls->Add(this->dgv_Show);
			this->Controls->Add(this->btn_SignIn);
			this->Controls->Add(this->btn_LogIn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->txt_user);
			this->Controls->Add(this->label1);
			this->Name = L"home";
			this->Text = L"Registro";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Show))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_LogIn_Click(System::Object^ sender, System::EventArgs^ e) {


		this->Consulta(this->txt_user->Text, this->txt_password->Text);

	}

	public: void Consulta(String^ cmail, String^ cpassword) {

		this->data->OpenConection();
		this->dgv_Show->DataSource = this->data->getData(cmail, cpassword);
		this->data->CloseConection();
	}

	private: System::Void btn_SignIn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sex;
		if (this->chb_Male->Checked && this->chb_Female->Checked) {
			sex = "M";

		}
		else {
			sex = "F";
		}


		this->data->OpenConection();
		this->data->InsertData(this->txt_nmail->Text, this->txt_npassword->Text, this->txt_nname->Text, this->txt_nsurname->Text, sex, this->txt_age->Text);
		this->data->CloseConection();

	}
	private: System::Void btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dgv_Show->ClearSelection();
		this->data->OpenConection();
		this->data->DeleteData(this->txt_user->Text, this->txt_password->Text);
		this->data->CloseConection();

	}


	};
};


