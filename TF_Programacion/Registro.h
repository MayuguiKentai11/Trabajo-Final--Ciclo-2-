#pragma once
#include "Room.h"
namespace TFProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class Registro : public System::Windows::Forms::Form
	{
	public:
		Registro(void)
		{
			InitializeComponent();
		}

	protected:
		~Registro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Lbl2;
	protected:
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ btn_Aceptar;
	private: System::Windows::Forms::Timer^ reloj_Registro;
	private: System::ComponentModel::IContainer^ components;


	private:

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Lbl2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_Aceptar = (gcnew System::Windows::Forms::Button());
			this->reloj_Registro = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// Lbl2
			// 
			this->Lbl2->AutoSize = true;
			this->Lbl2->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl2->Location = System::Drawing::Point(217, 9);
			this->Lbl2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl2->Name = L"Lbl2";
			this->Lbl2->Size = System::Drawing::Size(225, 34);
			this->Lbl2->TabIndex = 9;
			this->Lbl2->Text = L"REGISTRO DE DATOS";
			this->Lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nombre de Usuario:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(271, 99);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(359, 39);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Registro::textBox1_TextChanged);
			// 
			// btn_Aceptar
			// 
			this->btn_Aceptar->Location = System::Drawing::Point(260, 169);
			this->btn_Aceptar->Name = L"btn_Aceptar";
			this->btn_Aceptar->Size = System::Drawing::Size(135, 60);
			this->btn_Aceptar->TabIndex = 14;
			this->btn_Aceptar->Text = L"ACEPTAR";
			this->btn_Aceptar->UseVisualStyleBackColor = true;
			this->btn_Aceptar->Click += gcnew System::EventHandler(this, &Registro::btn_Aceptar_Click);
			// 
			// reloj_Registro
			// 
			this->reloj_Registro->Enabled = true;
			this->reloj_Registro->Tick += gcnew System::EventHandler(this, &Registro::reloj_Registro_Tick);
			// 
			// Registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(632, 258);
			this->ControlBox = false;
			this->Controls->Add(this->btn_Aceptar);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Lbl2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Registro";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro";
			this->Load += gcnew System::EventHandler(this, &Registro::Registro_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	Void Registro_Load(System::Object^ sender, System::EventArgs^ e) {

	}
    Void btn_Aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		TFProgramacion::Room^ room = gcnew TFProgramacion::Room(textBox1->Text);
		this->Hide();
		room->ShowDialog();
		delete room;
		this->Close();
}
    Void reloj_Registro_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->ToString() != "") {
			btn_Aceptar->Enabled = true;
		}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
