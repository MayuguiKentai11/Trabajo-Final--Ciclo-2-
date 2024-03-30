#pragma once
#include "Creditos.h"
namespace TFProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	/// <summary>
	/// Resumen de Pantalla_Victoria
	/// </summary>
	public ref class Pantalla_Victoria : public System::Windows::Forms::Form
	{
	public:
		Pantalla_Victoria(void)
		{
			InitializeComponent();
			music_victory = gcnew SoundPlayer("soundtracks/musica_victoria.wav");
		}

	protected:
		~Pantalla_Victoria()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ btn_Aceptar;

	private:
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ lbl_nombre; 
		   SoundPlayer^ music_victory;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pantalla_Victoria::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Aceptar = (gcnew System::Windows::Forms::Button());
			this->lbl_nombre = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(720, 536);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(171, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 41);
			this->label1->TabIndex = 1;
			this->label1->Text = L"VICTORIA!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(634, 175);
			this->label2->TabIndex = 2;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(422, 339);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(298, 182);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 339);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(332, 182);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// btn_Aceptar
			// 
			this->btn_Aceptar->Location = System::Drawing::Point(312, 289);
			this->btn_Aceptar->Name = L"btn_Aceptar";
			this->btn_Aceptar->Size = System::Drawing::Size(131, 44);
			this->btn_Aceptar->TabIndex = 5;
			this->btn_Aceptar->Text = L"DALE!";
			this->btn_Aceptar->UseVisualStyleBackColor = true;
			this->btn_Aceptar->Click += gcnew System::EventHandler(this, &Pantalla_Victoria::btn_Aceptar_Click);
			// 
			// lbl_nombre
			// 
			this->lbl_nombre->AutoSize = true;
			this->lbl_nombre->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_nombre->Location = System::Drawing::Point(340, 39);
			this->lbl_nombre->Name = L"lbl_nombre";
			this->lbl_nombre->Size = System::Drawing::Size(139, 41);
			this->lbl_nombre->TabIndex = 6;
			this->lbl_nombre->Text = L"Mauricio";
			// 
			// Pantalla_Victoria
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 519);
			this->Controls->Add(this->lbl_nombre);
			this->Controls->Add(this->btn_Aceptar);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Pantalla_Victoria";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pantalla_Victoria";
			this->Load += gcnew System::EventHandler(this, &Pantalla_Victoria::Pantalla_Victoria_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	Void btn_Aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		TFProgramacion::Creditos^ creditos = gcnew TFProgramacion::Creditos();
		music_victory->Stop();
		this->Hide();
		creditos->ShowDialog();
		delete creditos;
		this->Close();
	}
    Void Pantalla_Victoria_Load(System::Object^ sender, System::EventArgs^ e) {
		music_victory->PlayLooping();
		
}
};
}
