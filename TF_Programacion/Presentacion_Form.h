#pragma once
#include "Nivel1.h"
#include "MyForm2.h"
#include "Creditos.h"
#include "Room.h"
#include "Pantalla_Derrota.h"
#include "Pantalla_Victoria.h"
#include "Registro.h"
#include "Datos.h"
namespace TFProgramacion {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		void set_Musica(bool habilitar) {
			this->habilitar_musica = habilitar;
		}
		MyForm(void)
		{
			InitializeComponent();
			g = this->CreateGraphics();
			fondo = gcnew Bitmap("imgg/fondoprincipal.png");
			music = gcnew SoundPlayer("soundtracks/menu_principal2.wav");
			habilitar_musica = false;
			aux_sonido = true;
			mostrar_registro = true;
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
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		SoundPlayer^ music;
		Graphics^ g;
		bool aux_sonido;
		bool habilitar_musica;
		bool mostrar_registro;
	private: System::Windows::Forms::Timer^ reloj_presentacion;

	private: System::Windows::Forms::Button^ btn_jugar;
	private: System::Windows::Forms::Button^ btn_instrucciones;
	private: System::Windows::Forms::Button^ btn_creditos;
	private: System::Windows::Forms::Button^ btn_salir;
	private: System::Windows::Forms::Button^ btn_sonido;
		   Bitmap^ fondo;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->reloj_presentacion = (gcnew System::Windows::Forms::Timer(this->components));
			this->btn_jugar = (gcnew System::Windows::Forms::Button());
			this->btn_instrucciones = (gcnew System::Windows::Forms::Button());
			this->btn_creditos = (gcnew System::Windows::Forms::Button());
			this->btn_salir = (gcnew System::Windows::Forms::Button());
			this->btn_sonido = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// reloj_presentacion
			// 
			this->reloj_presentacion->Enabled = true;
			this->reloj_presentacion->Tick += gcnew System::EventHandler(this, &MyForm::reloj_presentacion_Tick);
			// 
			// btn_jugar
			// 
			this->btn_jugar->BackColor = System::Drawing::Color::DarkViolet;
			this->btn_jugar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_jugar->Location = System::Drawing::Point(3, 178);
			this->btn_jugar->Name = L"btn_jugar";
			this->btn_jugar->Size = System::Drawing::Size(252, 58);
			this->btn_jugar->TabIndex = 1;
			this->btn_jugar->Text = L"JUGAR";
			this->btn_jugar->UseVisualStyleBackColor = false;
			this->btn_jugar->Click += gcnew System::EventHandler(this, &MyForm::btn_jugar_Click);
			// 
			// btn_instrucciones
			// 
			this->btn_instrucciones->BackColor = System::Drawing::Color::DarkViolet;
			this->btn_instrucciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_instrucciones->Location = System::Drawing::Point(3, 304);
			this->btn_instrucciones->Name = L"btn_instrucciones";
			this->btn_instrucciones->Size = System::Drawing::Size(252, 58);
			this->btn_instrucciones->TabIndex = 2;
			this->btn_instrucciones->Text = L"COMO JUGAR";
			this->btn_instrucciones->UseVisualStyleBackColor = false;
			this->btn_instrucciones->Click += gcnew System::EventHandler(this, &MyForm::btn_instrucciones_Click);
			// 
			// btn_creditos
			// 
			this->btn_creditos->BackColor = System::Drawing::Color::DarkViolet;
			this->btn_creditos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_creditos->Location = System::Drawing::Point(3, 427);
			this->btn_creditos->Name = L"btn_creditos";
			this->btn_creditos->Size = System::Drawing::Size(252, 58);
			this->btn_creditos->TabIndex = 3;
			this->btn_creditos->Text = L"CREDITOS";
			this->btn_creditos->UseVisualStyleBackColor = false;
			this->btn_creditos->Click += gcnew System::EventHandler(this, &MyForm::btn_creditos_Click);
			// 
			// btn_salir
			// 
			this->btn_salir->BackColor = System::Drawing::Color::DarkViolet;
			this->btn_salir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_salir->Location = System::Drawing::Point(749, 569);
			this->btn_salir->Name = L"btn_salir";
			this->btn_salir->Size = System::Drawing::Size(252, 58);
			this->btn_salir->TabIndex = 4;
			this->btn_salir->Text = L"SALIR";
			this->btn_salir->UseVisualStyleBackColor = false;
			this->btn_salir->Click += gcnew System::EventHandler(this, &MyForm::btn_salir_Click);
			// 
			// btn_sonido
			// 
			this->btn_sonido->BackColor = System::Drawing::Color::DarkViolet;
			this->btn_sonido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sonido->Location = System::Drawing::Point(3, 548);
			this->btn_sonido->Name = L"btn_sonido";
			this->btn_sonido->Size = System::Drawing::Size(252, 58);
			this->btn_sonido->TabIndex = 5;
			this->btn_sonido->Text = L"REGISTROS";
			this->btn_sonido->UseVisualStyleBackColor = false;
			this->btn_sonido->Click += gcnew System::EventHandler(this, &MyForm::btn_sonido_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1013, 639);
			this->ControlBox = false;
			this->Controls->Add(this->btn_sonido);
			this->Controls->Add(this->btn_salir);
			this->Controls->Add(this->btn_creditos);
			this->Controls->Add(this->btn_instrucciones);
			this->Controls->Add(this->btn_jugar);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Presentacion";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		music->PlayLooping();	
	}
	Void reloj_presentacion_Tick(System::Object^ sender, System::EventArgs^ e) {
		BufferedGraphicsContext^ bfc = BufferedGraphicsManager::Current;
		BufferedGraphics^ bf = bfc->Allocate(g, this->ClientRectangle);
		bf->Graphics->DrawImage(fondo, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
		bf->Render(g);
		delete bf;
		delete bfc;
	}
	Void btn_jugar_Click(System::Object^ sender, System::EventArgs^ e) { 
		TFProgramacion::Registro^ registro = gcnew TFProgramacion::Registro();
		registro->ShowDialog();
		delete registro;
		this->Show();
		this->music->PlayLooping();
	}
    Void btn_salir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
	Void btn_instrucciones_Click(System::Object^ sender, System::EventArgs^ e) {
		TFProgramacion::MyForm2^ instrucciones = gcnew TFProgramacion::MyForm2();
		instrucciones->Show();
	}
    Void btn_creditos_Click(System::Object^ sender, System::EventArgs^ e) {
		TFProgramacion::Creditos^ creditos = gcnew TFProgramacion::Creditos();
		creditos->Show();
}
    Void btn_sonido_Click(System::Object^ sender, System::EventArgs^ e) {
		//Ver registros
		TFProgramacion::Datos^ datitos = gcnew TFProgramacion::Datos();
		datitos->Show();
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
