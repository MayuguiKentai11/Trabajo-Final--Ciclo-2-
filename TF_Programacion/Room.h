#pragma once
#include "Nivel1.h"
#include "Nivel2.h"
namespace TFProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Room
	/// </summary>
	public ref class Room : public System::Windows::Forms::Form
	{
	public:
		void set_EmpezarJuego(bool empezar) {
			this->empezar_juego = empezar;
		}
		bool get_EmpezarJuego() {
			return this->empezar_juego;
		}
		Room(String^nombre)
		{
			InitializeComponent();
			empezar_juego = false;
			music_room = gcnew SoundPlayer("soundtracks/Musica_roomm.wav");
			this->nombre = nombre;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Room()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_nivel1;
	protected:
	private: System::Windows::Forms::Button^ btn_Nivel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private:
		System::ComponentModel::Container ^components;
		bool empezar_juego;
	private: System::Windows::Forms::Button^ btn_back;
		   SoundPlayer^ music_room;
		   String^ nombre;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Room::typeid));
			this->btn_nivel1 = (gcnew System::Windows::Forms::Button());
			this->btn_Nivel2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_nivel1
			// 
			this->btn_nivel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_nivel1->Location = System::Drawing::Point(257, 37);
			this->btn_nivel1->Name = L"btn_nivel1";
			this->btn_nivel1->Size = System::Drawing::Size(182, 54);
			this->btn_nivel1->TabIndex = 0;
			this->btn_nivel1->Text = L"NIVEL 1";
			this->btn_nivel1->UseVisualStyleBackColor = true;
			this->btn_nivel1->Click += gcnew System::EventHandler(this, &Room::btn_nivel1_Click);
			// 
			// btn_Nivel2
			// 
			this->btn_Nivel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Nivel2->Location = System::Drawing::Point(493, 37);
			this->btn_Nivel2->Name = L"btn_Nivel2";
			this->btn_Nivel2->Size = System::Drawing::Size(182, 54);
			this->btn_Nivel2->TabIndex = 1;
			this->btn_Nivel2->Text = L"NIVEL 2";
			this->btn_Nivel2->UseVisualStyleBackColor = true;
			this->btn_Nivel2->Click += gcnew System::EventHandler(this, &Room::btn_Nivel2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(763, 617);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Room::pictureBox1_Click);
			// 
			// btn_back
			// 
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_back->Location = System::Drawing::Point(12, 37);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(220, 54);
			this->btn_back->TabIndex = 3;
			this->btn_back->Text = L"REGRESAR";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &Room::btn_back_Click);
			// 
			// Room
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 614);
			this->ControlBox = false;
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->btn_Nivel2);
			this->Controls->Add(this->btn_nivel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Room";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Room";
			this->Load += gcnew System::EventHandler(this, &Room::Room_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Room_Load(System::Object^ sender, System::EventArgs^ e) {
		music_room->PlayLooping();
	}
	Void btn_nivel1_Click(System::Object^ sender, System::EventArgs^ e) {
		TFProgramacion::MyForm1^ nivel1 = gcnew TFProgramacion::MyForm1(nombre);
		music_room->Stop();
		btn_Nivel2->Enabled = true;
		this->Hide();
		nivel1->ShowDialog();
		delete nivel1;
		this->Close();
	}
	Void btn_Nivel2_Click(System::Object^ sender, System::EventArgs^ e) {
		TFProgramacion::Nivel2^ nivel2 = gcnew TFProgramacion::Nivel2(nombre);
		music_room->Stop();
		this->Hide();
		nivel2->ShowDialog();
		delete nivel2;
		this->Close();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		music_room->Stop();
		this->Close();
	}
};
}
