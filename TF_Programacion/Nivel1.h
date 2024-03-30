#pragma once
#include "Controller.h"
#include "Pantalla_Derrota.h"
#include "Binary.h"
namespace TFProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(String^nombre)
		{
			InitializeComponent();
			g = this->CreateGraphics();
			r = gcnew Random();
			fondo_nivel1 = gcnew Bitmap("imgg/fondonivel1.png");
			Remoto = new Controller((g->VisibleClipBounds.Width/2)-20,(g->VisibleClipBounds.Height/2)-100);
			img_jugador = gcnew Bitmap("imgg/Personaje1.png");
			img_Omicron = gcnew Bitmap("imgg/virus_rojo.png");
			img_Omega = gcnew Bitmap("imgg/virus_azul.png");
			img_Delta = gcnew Bitmap("imgg/virus_verde.png");
			img_Balas = gcnew Bitmap("imgg/bola_roja.png");
			img_Jeringa = gcnew Bitmap("imgg/jeringa.png");
			img_Botiquin = gcnew Bitmap("imgg/botiquin.png");
			img_inmunidad = gcnew Bitmap("imgg/inmunidad.png");
			fondo_muerte = gcnew Bitmap("imgg/You_diefoto.jpg");
			img_pastilla_amarilla = gcnew Bitmap("imgg/pastilla_amarilla.png");
			img_pastilla_azul = gcnew Bitmap("imgg/pastilla_azul.png");
			img_pastilla_morada = gcnew Bitmap("imgg/pastilla_morada.png");
			img_pastilla_verde = gcnew Bitmap("imgg/pastilla_verde.png");
			aux = false;
			cont = 0;
			auxx = false;
			music_nivell = gcnew SoundPlayer("soundtracks/musica_nivel1.wav");
			this->nombre = nombre;
		}
		string getString(String^ a)
		{
			char cStr[50] = { 0 };

			String^ text_to_convert = a;

			if (text_to_convert->Length < sizeof(cStr))
			{
				sprintf(cStr, "%s", text_to_convert);
			}

			return cStr;
		}
	protected:
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		Controller* Remoto;
		Random^ r;
		Graphics^ g;
		Bitmap^ img_jugador;
		Bitmap^ img_Omicron;
		Bitmap^ img_Delta;
		Bitmap^ img_Omega;
		Bitmap^ img_Balas;
		Bitmap^ img_Jeringa;
		Bitmap^ img_Botiquin;
		Bitmap^ img_inmunidad;
		Bitmap^ fondo_muerte;
		SoundPlayer^ music_nivell;
		String^ nombre;
		//Imagenes de pildoras
		Bitmap^ img_pastilla_amarilla;
		Bitmap^ img_pastilla_azul;
		Bitmap^ img_pastilla_morada;
		Bitmap^ img_pastilla_verde;
		bool aux;
		bool auxx; 
		short cont;
	private: System::Windows::Forms::Timer^ reloj_Nivel1;
	private: System::Windows::Forms::Timer^ agregar_virus;
	private: System::Windows::Forms::Timer^ agregar_Omicron;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ cantidadbalas;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ cantidadvidas;
	private: System::Windows::Forms::Timer^ agregarObjetos;
	private: System::Windows::Forms::Timer^ agregar_Jeringas;
	private: System::Windows::Forms::Label^ JuegoPausado;
	private: System::Windows::Forms::Label^ Anuncio;
	private: System::Windows::Forms::Timer^ agregar_Pildoras;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ mostrar_pastillas;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ Aviso;
		   Bitmap^ fondo_nivel1;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->reloj_Nivel1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->agregar_virus = (gcnew System::Windows::Forms::Timer(this->components));
			this->agregar_Omicron = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cantidadbalas = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cantidadvidas = (gcnew System::Windows::Forms::Label());
			this->agregarObjetos = (gcnew System::Windows::Forms::Timer(this->components));
			this->agregar_Jeringas = (gcnew System::Windows::Forms::Timer(this->components));
			this->JuegoPausado = (gcnew System::Windows::Forms::Label());
			this->Anuncio = (gcnew System::Windows::Forms::Label());
			this->agregar_Pildoras = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->mostrar_pastillas = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Aviso = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// reloj_Nivel1
			// 
			this->reloj_Nivel1->Enabled = true;
			this->reloj_Nivel1->Tick += gcnew System::EventHandler(this, &MyForm1::reloj_Nivel1_Tick);
			// 
			// agregar_virus
			// 
			this->agregar_virus->Enabled = true;
			this->agregar_virus->Interval = 8000;
			this->agregar_virus->Tick += gcnew System::EventHandler(this, &MyForm1::agregar_virus_Tick);
			// 
			// agregar_Omicron
			// 
			this->agregar_Omicron->Enabled = true;
			this->agregar_Omicron->Interval = 10000;
			this->agregar_Omicron->Tick += gcnew System::EventHandler(this, &MyForm1::agregar_Omicron_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(531, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cantidad de Balas: ";
			// 
			// cantidadbalas
			// 
			this->cantidadbalas->AutoSize = true;
			this->cantidadbalas->Location = System::Drawing::Point(661, 9);
			this->cantidadbalas->Name = L"cantidadbalas";
			this->cantidadbalas->Size = System::Drawing::Size(44, 16);
			this->cantidadbalas->TabIndex = 1;
			this->cantidadbalas->Text = L"label2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(2, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cantidad de Vidas:";
			// 
			// cantidadvidas
			// 
			this->cantidadvidas->AutoSize = true;
			this->cantidadvidas->Location = System::Drawing::Point(129, 9);
			this->cantidadvidas->Name = L"cantidadvidas";
			this->cantidadvidas->Size = System::Drawing::Size(44, 16);
			this->cantidadvidas->TabIndex = 3;
			this->cantidadvidas->Text = L"label3";
			// 
			// agregarObjetos
			// 
			this->agregarObjetos->Enabled = true;
			this->agregarObjetos->Interval = 15000;
			this->agregarObjetos->Tick += gcnew System::EventHandler(this, &MyForm1::agregarObjetos_Tick);
			// 
			// agregar_Jeringas
			// 
			this->agregar_Jeringas->Enabled = true;
			this->agregar_Jeringas->Interval = 20000;
			this->agregar_Jeringas->Tick += gcnew System::EventHandler(this, &MyForm1::agregar_Jeringas_Tick);
			// 
			// JuegoPausado
			// 
			this->JuegoPausado->AutoSize = true;
			this->JuegoPausado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->JuegoPausado->Location = System::Drawing::Point(152, 239);
			this->JuegoPausado->Name = L"JuegoPausado";
			this->JuegoPausado->Size = System::Drawing::Size(440, 54);
			this->JuegoPausado->TabIndex = 4;
			this->JuegoPausado->Text = L"JUEGO PAUSADO";
			this->JuegoPausado->Visible = false;
			// 
			// Anuncio
			// 
			this->Anuncio->AutoSize = true;
			this->Anuncio->Location = System::Drawing::Point(212, 322);
			this->Anuncio->Name = L"Anuncio";
			this->Anuncio->Size = System::Drawing::Size(329, 16);
			this->Anuncio->TabIndex = 5;
			this->Anuncio->Text = L"PRESIONE ESC PARA CONTINUAR CON EL JUEGO";
			this->Anuncio->Visible = false;
			// 
			// agregar_Pildoras
			// 
			this->agregar_Pildoras->Enabled = true;
			this->agregar_Pildoras->Interval = 8000;
			this->agregar_Pildoras->Tick += gcnew System::EventHandler(this, &MyForm1::agregar_Pildoras_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(255, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Cantidad de Pastillas";
			// 
			// mostrar_pastillas
			// 
			this->mostrar_pastillas->AutoSize = true;
			this->mostrar_pastillas->Location = System::Drawing::Point(395, 9);
			this->mostrar_pastillas->Name = L"mostrar_pastillas";
			this->mostrar_pastillas->Size = System::Drawing::Size(44, 16);
			this->mostrar_pastillas->TabIndex = 7;
			this->mostrar_pastillas->Text = L"label4";
			this->mostrar_pastillas->Click += gcnew System::EventHandler(this, &MyForm1::mostrar_pastillas_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(414, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"/10";
			// 
			// Aviso
			// 
			this->Aviso->AutoSize = true;
			this->Aviso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Aviso->Location = System::Drawing::Point(135, 74);
			this->Aviso->Name = L"Aviso";
			this->Aviso->Size = System::Drawing::Size(467, 51);
			this->Aviso->TabIndex = 9;
			this->Aviso->Text = L"ENTRA AL REFUGIO!";
			this->Aviso->Visible = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 553);
			this->Controls->Add(this->Aviso);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->mostrar_pastillas);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Anuncio);
			this->Controls->Add(this->JuegoPausado);
			this->Controls->Add(this->cantidadvidas);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cantidadbalas);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Nivel1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::MyForm1_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::MyForm1_KeyUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		music_nivell->PlayLooping();
		MessageBox::Show("MUEVETE CON LAS DIRECCIONALES Y DISPARA CON LA TECLA X! RECOGE LAS SUFICIENTES PILDORAS PARA GANAR! TU PUEDES!");
	}
	Void reloj_Nivel1_Tick(System::Object^ sender, System::EventArgs^ e) {
		
			BufferedGraphicsContext^ bfc = BufferedGraphicsManager::Current;
			BufferedGraphics^ bf = bfc->Allocate(g, this->ClientRectangle);
			bf->Graphics->DrawImage(fondo_nivel1, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
			if (Remoto->get_Aux() == false) {
				Remoto->FuncionalidadJugador(bf->Graphics, img_jugador);
				Remoto->MoverDelta();
				Remoto->MoverOmega();
				Remoto->MoverOmicron();
				Remoto->FuncionalidadDelta(bf->Graphics, img_Delta);
				Remoto->FuncionalidadOmega(bf->Graphics, img_Omega);
				Remoto->FuncionalidadOmicron(bf->Graphics, img_Omicron);
				Remoto->FuncionalidadBala(bf->Graphics, img_Balas);

				//Dibujar Objetos
				Remoto->DibujarBotiquin(bf->Graphics, img_Botiquin);
				Remoto->DibujarInmunidad(bf->Graphics, img_inmunidad);
				Remoto->DibujarJeringa(bf->Graphics, img_Jeringa);
				Remoto->DibujarPildoras(bf->Graphics, img_pastilla_amarilla, img_pastilla_azul, img_pastilla_morada, img_pastilla_verde);
				
				//Remoto->DibujarRectangulo(bf->Graphics);
				//Verificar Colisiones
				Remoto->ColisionBalaVirus(bf->Graphics);
				Remoto->ColisionesJugadorVirus();
				Remoto->ColisionJugadorObjetos();
				Remoto->ColisionJugadorPildoras(bf->Graphics);
				Remoto->ColisionesCasas1();
				Remoto->ColisionesCasas2();
				Remoto->ColisionesCasas3();
				Remoto->ColisionesCasas4();
				Remoto->ColisionesCasas5();
			}
			//Mostrar Datos
			cantidadvidas->Text = Convert::ToString(Remoto->get_VidasJugador());
			cantidadbalas->Text = Convert::ToString(Remoto->get_BalasJugador());
			mostrar_pastillas->Text = Convert::ToString(Remoto->get_PastillasObtenidas());
			if (Remoto->ColisionesJugadorVirus() == true) {
				bf->Graphics->DrawImage(fondo_muerte, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
				Remoto->set_Aux(true);
			}
			if (aux == false) {
				if (Remoto->GanasteJuego() == true) {
					reloj_Nivel1->Enabled = false;
					MessageBox::Show("CONSEGUISTE LA CURA! ESCONDETE DE LA HORDA DE VIRUS!");
					reloj_Nivel1->Enabled = true;
					agregar_Omicron->Interval = 3000;
					agregar_virus->Interval = 2500;
					Remoto->set_HabilitarEndGame(true);
					aux = true;
					Aviso->Visible = true;
				}
			}
			if (Remoto->get_HabilitarEndGame() == true) {
				Remoto->ColisionRefugio();
				Remoto->DibujarRefugio(bf->Graphics);
			}
			bf->Render(g);
			
			if (Remoto->get_Aux() == true) {
				reloj_Nivel1->Enabled = false;
				music_nivell->Stop();
				Configuracion* datitos = new Configuracion("data.txt");
				datitos->guardar(getString(nombre), "Perdio", "Nivel 1");
				this->Hide();
				TFProgramacion::Pantalla_Derrota^ derrota = gcnew TFProgramacion::Pantalla_Derrota();
				derrota->ShowDialog();
				delete derrota;
				this->Close();
			}
			if (Remoto->get_HabilitarEndGame() == true) {
				if (Remoto->ColisionRefugio() == true) {
					reloj_Nivel1->Enabled = false;
					MessageBox::Show("FELICIDADES!! LOGRASTE ESCONDERTE DE LOS VIRUS!");
					auxx = false;
					music_nivell->Stop();
					Configuracion* datitos=new Configuracion("data.txt");
					datitos->guardar(getString(nombre), "Gano", "Nivel 1");
					this->Close();
				}
			}
			delete bfc;
			delete bf;
	}

	Void MyForm1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		Remoto->MoverJugador(e->KeyCode, true);
		Remoto->AgregarBala(g, e->KeyCode);
		if (e->KeyCode == Keys::P) {
			g->Clear(Color::White);
			JuegoPausado->Visible = true;
			Anuncio->Visible = true;
			agregar_virus->Enabled = false;
			agregar_Omicron->Enabled = false;
			agregarObjetos->Enabled = false;
			label1->Visible = false;
			cantidadbalas->Visible = false;
			label2->Visible = false;
			cantidadvidas->Visible = false;
			Remoto->set_Aux(true);
			reloj_Nivel1->Enabled = false;
		}
		if (e->KeyCode == Keys::Escape && Remoto->get_Aux() == true) {
			Remoto->set_Aux(false);
			agregar_virus->Enabled = true;
			agregar_Omicron->Enabled = true;
			agregarObjetos->Enabled = true;
			JuegoPausado->Visible = false;
			Anuncio->Visible = false;
			label1->Visible = true;
			cantidadbalas->Visible = true;
			label2->Visible = true;
			cantidadvidas->Visible = true;
			reloj_Nivel1->Enabled = true;
		}
	}

	Void MyForm1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		Remoto->MoverJugador(e->KeyCode, false);
	}
	Void agregar_virus_Tick(System::Object^ sender, System::EventArgs^ e) {
		short aux = r->Next(1, 3);
		switch (aux)
		{
		case 1:Remoto->AgregarOmega(g, r); break;
		case 2:Remoto->AgregarDelta(g, r); break;
		default:
			break;
		}
	}
	Void agregar_Omicron_Tick(System::Object^ sender, System::EventArgs^ e) {
		Remoto->AgregarOmicron(g, r);
	}

    Void agregarObjetos_Tick(System::Object^ sender, System::EventArgs^ e) {
		short aux2 = r->Next(1, 3);
		switch (aux2){
		case 1:Remoto->AgregarBotiquin(g, r); break;
		case 2:Remoto->AgregarInmunidad(g, r); break;
		default:
			break;
		}
}
	Void agregar_Jeringas_Tick(System::Object^ sender, System::EventArgs^ e) {
		Remoto->AgregarJeringas(g, r);
	}
	Void agregar_Pildoras_Tick(System::Object^ sender, System::EventArgs^ e) {
		short aux3 = r->Next(1, 5);
		if (cont<10) {
			Remoto->AgregarPildoras(g, r, aux3);
		}
	}
    Void mostrar_pastillas_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
