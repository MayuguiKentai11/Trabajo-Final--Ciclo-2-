#pragma once
#include "Controller2.h"
#include "Pantalla_Victoria.h"
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
	/// <summary>
	/// Resumen de Nivel2
	/// </summary>
	public ref class Nivel2 : public System::Windows::Forms::Form
	{
	public:
		Nivel2(String^nombre)
		{
			InitializeComponent();
			g = this->CreateGraphics();
			r = gcnew Random();
			Remoto = new Controller2((g->VisibleClipBounds.Width / 2) - 20, (g->VisibleClipBounds.Height / 2) - 100,g->VisibleClipBounds.Width/2,100);
			fondo_nivel2 = gcnew Bitmap("imgg/fondo_nivel2.png");
			img_jugador = gcnew Bitmap("imgg/Personaje1.png");
			img_EvDelta = gcnew Bitmap("imgg/evolucionverde.png");
			img_EvOmega = gcnew Bitmap("imgg/evolucionazul.png");
			img_EvOmicron = gcnew Bitmap("imgg/evolucionrojo.png");
			img_Balas = gcnew Bitmap("imgg/bola_roja.png");
			img_Jeringa = gcnew Bitmap("imgg/jeringa.png");
			img_Botiquin = gcnew Bitmap("imgg/botiquin.png");
			img_inmunidad = gcnew Bitmap("imgg/inmunidad.png");
			fondo_muerte = gcnew Bitmap("imgg/You_diefoto.jpg");
			img_pastilla_amarilla = gcnew Bitmap("imgg/pastilla_amarilla.png");
			img_pastilla_azul = gcnew Bitmap("imgg/pastilla_azul.png");
			img_pastilla_morada = gcnew Bitmap("imgg/pastilla_morada.png");
			img_pastilla_verde = gcnew Bitmap("imgg/pastilla_verde.png");
			img_llave = gcnew Bitmap("imgg/llave_peque.png");
			img_doctor = gcnew Bitmap("imgg/doctor_mascarilla.png");
			aux = false;
			cont = 0;
			casifin = false;
			aux_para_doctor = false;
			auxxxx = false;
			music_end = gcnew SoundPlayer("soundtracks/nivel2_epico.wav");
			nuevo_sound = false;
			agregar_evoluciones = false;
			img_Delta = gcnew Bitmap("imgg/virus_verde.png");
			img_Omega = gcnew Bitmap("imgg/virus_azul.png");
			img_Omicron = gcnew Bitmap("imgg/virus_rojo.png");
			juego_pausado = false;
			music_nivel2 = gcnew SoundPlayer("soundtracks/musica_nivel2.wav");
			music_nivel2pt2 = gcnew SoundPlayer("soundtracks/nivel2_musicpt22.wav");
			llaves_aparecidas = 0;
			aparecer_doctor = false;
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
		void set_CasiFin(bool casi) {
			this->casifin = casi;
		}
		bool get_CasiFin() {
			return this->casifin;
		}
		void set_AuxParaDoctor(bool doctor) {
			this->aux_para_doctor = doctor;
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Nivel2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Aviso;
	private: System::Windows::Forms::Label^ JuegoPausado;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ cantidadvidas;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ mostrar_pastillas;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ cantidadbalas;
	private: System::Windows::Forms::Label^ Anuncio;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		Controller2* Remoto;
		String^ nombre;
		Random^ r;
		Graphics^ g;
		Bitmap^ img_jugador;
		Bitmap^ img_EvOmicron;
		Bitmap^ img_EvDelta;
		Bitmap^ img_EvOmega;
		Bitmap^ img_Delta;
		Bitmap^ img_Omega;
		Bitmap^ img_Omicron;
		Bitmap^ img_Balas;
		Bitmap^ img_Jeringa;
		Bitmap^ img_Botiquin;
		Bitmap^ img_inmunidad;
		Bitmap^ fondo_muerte;
		Bitmap^ fondo_nivel2;
		Bitmap^ img_llave;
		Bitmap^ img_doctor;
		//Soundtracks
		SoundPlayer^ music_end;
		SoundPlayer^ music_nivel2;
		SoundPlayer^ music_nivel2pt2;
		//Imagenes de pildoras
		Bitmap^ img_pastilla_amarilla;
		Bitmap^ img_pastilla_azul;
		Bitmap^ img_pastilla_morada;
		Bitmap^ img_pastilla_verde;
		short llaves_aparecidas;
		bool aux;
		bool auxx;
		bool casifin;
		bool auxxxx;
		bool aux_para_doctor;
		bool nuevo_sound;
		bool agregar_evoluciones;
		bool juego_pausado;
		bool aparecer_doctor;
	private: System::Windows::Forms::Timer^ reloj_Nivel2;
	private: System::Windows::Forms::Timer^ agregar_Omicron2;
	private: System::Windows::Forms::Timer^ agregar_virus2;
	private: System::Windows::Forms::Timer^ agregar_Objetos2;

	private: System::Windows::Forms::Timer^ agregar_Pildoras2;
	private: System::Windows::Forms::Timer^ agregar_Jeringas2;
	private: System::Windows::Forms::Timer^ agregar_Llaves;
	private: System::Windows::Forms::Timer^ eliminar_doctor;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ mostrar_llaves;
	private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Timer^ agregar_virusnormales;
private: System::Windows::Forms::Label^ descansito;

	   short cont;
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Método necesario para admitir el Diseñador. No se puede modificar
		   /// el contenido de este método con el editor de código.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   this->Aviso = (gcnew System::Windows::Forms::Label());
			   this->JuegoPausado = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->cantidadvidas = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->mostrar_pastillas = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->cantidadbalas = (gcnew System::Windows::Forms::Label());
			   this->Anuncio = (gcnew System::Windows::Forms::Label());
			   this->reloj_Nivel2 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->agregar_Omicron2 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->agregar_virus2 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->agregar_Objetos2 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->agregar_Pildoras2 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->agregar_Jeringas2 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->agregar_Llaves = (gcnew System::Windows::Forms::Timer(this->components));
			   this->eliminar_doctor = (gcnew System::Windows::Forms::Timer(this->components));
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->mostrar_llaves = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->agregar_virusnormales = (gcnew System::Windows::Forms::Timer(this->components));
			   this->descansito = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // Aviso
			   // 
			   this->Aviso->AutoSize = true;
			   this->Aviso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Aviso->Location = System::Drawing::Point(82, 83);
			   this->Aviso->Name = L"Aviso";
			   this->Aviso->Size = System::Drawing::Size(486, 51);
			   this->Aviso->TabIndex = 10;
			   this->Aviso->Text = L"ENTRA AL HOSPITAL!";
			   this->Aviso->Visible = false;
			   // 
			   // JuegoPausado
			   // 
			   this->JuegoPausado->AutoSize = true;
			   this->JuegoPausado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->JuegoPausado->Location = System::Drawing::Point(123, 312);
			   this->JuegoPausado->Name = L"JuegoPausado";
			   this->JuegoPausado->Size = System::Drawing::Size(440, 54);
			   this->JuegoPausado->TabIndex = 11;
			   this->JuegoPausado->Text = L"JUEGO PAUSADO";
			   this->JuegoPausado->Visible = false;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(12, 9);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(121, 16);
			   this->label2->TabIndex = 12;
			   this->label2->Text = L"Cantidad de Vidas:";
			   // 
			   // cantidadvidas
			   // 
			   this->cantidadvidas->AutoSize = true;
			   this->cantidadvidas->Location = System::Drawing::Point(129, 9);
			   this->cantidadvidas->Name = L"cantidadvidas";
			   this->cantidadvidas->Size = System::Drawing::Size(44, 16);
			   this->cantidadvidas->TabIndex = 13;
			   this->cantidadvidas->Text = L"label3";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(189, 9);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(92, 16);
			   this->label3->TabIndex = 14;
			   this->label3->Text = L"Cant/ Pastillas";
			   // 
			   // mostrar_pastillas
			   // 
			   this->mostrar_pastillas->AutoSize = true;
			   this->mostrar_pastillas->Location = System::Drawing::Point(278, 9);
			   this->mostrar_pastillas->Name = L"mostrar_pastillas";
			   this->mostrar_pastillas->Size = System::Drawing::Size(44, 16);
			   this->mostrar_pastillas->TabIndex = 15;
			   this->mostrar_pastillas->Text = L"label4";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(297, 9);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(25, 16);
			   this->label4->TabIndex = 16;
			   this->label4->Text = L"/10";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(515, 9);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(82, 16);
			   this->label1->TabIndex = 17;
			   this->label1->Text = L"Cant/ Balas: ";
			   // 
			   // cantidadbalas
			   // 
			   this->cantidadbalas->AutoSize = true;
			   this->cantidadbalas->Location = System::Drawing::Point(592, 9);
			   this->cantidadbalas->Name = L"cantidadbalas";
			   this->cantidadbalas->Size = System::Drawing::Size(44, 16);
			   this->cantidadbalas->TabIndex = 18;
			   this->cantidadbalas->Text = L"label2";
			   // 
			   // Anuncio
			   // 
			   this->Anuncio->AutoSize = true;
			   this->Anuncio->Location = System::Drawing::Point(162, 296);
			   this->Anuncio->Name = L"Anuncio";
			   this->Anuncio->Size = System::Drawing::Size(329, 16);
			   this->Anuncio->TabIndex = 19;
			   this->Anuncio->Text = L"PRESIONE ESC PARA CONTINUAR CON EL JUEGO";
			   this->Anuncio->Visible = false;
			   // 
			   // reloj_Nivel2
			   // 
			   this->reloj_Nivel2->Enabled = true;
			   this->reloj_Nivel2->Tick += gcnew System::EventHandler(this, &Nivel2::reloj_Nivel2_Tick);
			   // 
			   // agregar_Omicron2
			   // 
			   this->agregar_Omicron2->Enabled = true;
			   this->agregar_Omicron2->Interval = 10000;
			   this->agregar_Omicron2->Tick += gcnew System::EventHandler(this, &Nivel2::agregar_Omicron2_Tick);
			   // 
			   // agregar_virus2
			   // 
			   this->agregar_virus2->Enabled = true;
			   this->agregar_virus2->Interval = 8000;
			   this->agregar_virus2->Tick += gcnew System::EventHandler(this, &Nivel2::agregar_virus2_Tick);
			   // 
			   // agregar_Objetos2
			   // 
			   this->agregar_Objetos2->Enabled = true;
			   this->agregar_Objetos2->Interval = 20000;
			   this->agregar_Objetos2->Tick += gcnew System::EventHandler(this, &Nivel2::agregar_Objetos2_Tick);
			   // 
			   // agregar_Pildoras2
			   // 
			   this->agregar_Pildoras2->Enabled = true;
			   this->agregar_Pildoras2->Interval = 8000;
			   this->agregar_Pildoras2->Tick += gcnew System::EventHandler(this, &Nivel2::agregar_Pildoras2_Tick);
			   // 
			   // agregar_Jeringas2
			   // 
			   this->agregar_Jeringas2->Enabled = true;
			   this->agregar_Jeringas2->Interval = 18000;
			   this->agregar_Jeringas2->Tick += gcnew System::EventHandler(this, &Nivel2::agregar_Jeringas2_Tick);
			   // 
			   // agregar_Llaves
			   // 
			   this->agregar_Llaves->Interval = 6000;
			   this->agregar_Llaves->Tick += gcnew System::EventHandler(this, &Nivel2::agregar_Llaves_Tick);
			   // 
			   // eliminar_doctor
			   // 
			   this->eliminar_doctor->Interval = 10000;
			   this->eliminar_doctor->Tick += gcnew System::EventHandler(this, &Nivel2::eliminar_doctor_Tick);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(353, 9);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(81, 16);
			   this->label5->TabIndex = 20;
			   this->label5->Text = L"Cant/ Llaves";
			   // 
			   // mostrar_llaves
			   // 
			   this->mostrar_llaves->AutoSize = true;
			   this->mostrar_llaves->Location = System::Drawing::Point(441, 9);
			   this->mostrar_llaves->Name = L"mostrar_llaves";
			   this->mostrar_llaves->Size = System::Drawing::Size(49, 16);
			   this->mostrar_llaves->TabIndex = 21;
			   this->mostrar_llaves->Text = L"awawd";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(461, 9);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(18, 16);
			   this->label6->TabIndex = 22;
			   this->label6->Text = L"/5";
			   // 
			   // agregar_virusnormales
			   // 
			   this->agregar_virusnormales->Interval = 1900;
			   this->agregar_virusnormales->Tick += gcnew System::EventHandler(this, &Nivel2::agregar_virusnormales_Tick);
			   // 
			   // descansito
			   // 
			   this->descansito->AutoSize = true;
			   this->descansito->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->descansito->Location = System::Drawing::Point(223, 215);
			   this->descansito->Name = L"descansito";
			   this->descansito->Size = System::Drawing::Size(211, 22);
			   this->descansito->TabIndex = 23;
			   this->descansito->Text = L"TOMA UN RESPIRO...";
			   this->descansito->Visible = false;
			   // 
			   // Nivel2
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(648, 519);
			   this->Controls->Add(this->descansito);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->mostrar_llaves);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->Anuncio);
			   this->Controls->Add(this->cantidadbalas);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->mostrar_pastillas);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->cantidadvidas);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->JuegoPausado);
			   this->Controls->Add(this->Aviso);
			   this->MaximizeBox = false;
			   this->MinimizeBox = false;
			   this->Name = L"Nivel2";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Nivel2";
			   this->Load += gcnew System::EventHandler(this, &Nivel2::Nivel2_Load);
			   this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Nivel2::Nivel2_KeyDown);
			   this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Nivel2::Nivel2_KeyUp);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void Nivel2_Load(System::Object^ sender, System::EventArgs^ e) {
		music_nivel2->PlayLooping();
		MessageBox::Show("RECOGE PILDORAS Y LLAVES PARA GANAR! TU PUEDES!");
		agregar_virusnormales->Enabled = true;
	}
		   Void reloj_Nivel2_Tick(System::Object^ sender, System::EventArgs^ e) {
			   BufferedGraphicsContext^ bfc = BufferedGraphicsManager::Current;
			   BufferedGraphics^ bf = bfc->Allocate(g, this->ClientRectangle);
			   bf->Graphics->DrawImage(fondo_nivel2, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
			   if (juego_pausado == false) {
				   if (Remoto->get_Aux() == false) {
					   Remoto->FuncionalidadJugador(bf->Graphics, img_jugador);
					   //Virus Normales
					   Remoto->MoverDelta();
					   Remoto->MoverOmega();
					   Remoto->MoverOmicron();
					   Remoto->FuncionalidadDelta(bf->Graphics, img_Delta);
					   Remoto->FuncionalidadOmega(bf->Graphics, img_Omega);
					   Remoto->FuncionalidadOmicron(bf->Graphics, img_Omicron);
					   //Evoluciones de los Virus
					   Remoto->MoverEvDelta();
					   Remoto->MoverEvOmega();
					   Remoto->MoverEvOmicron();
					   Remoto->FuncionalidadEvDelta(bf->Graphics, img_EvDelta);
					   Remoto->FuncionalidadEvOmega(bf->Graphics, img_EvOmega);
					   Remoto->FuncionalidadEvOmicron(bf->Graphics, img_EvOmicron);
					   Remoto->FuncionalidadBala(bf->Graphics, img_Balas);
					   //Dibujar Objetos
					   Remoto->DibujarBotiquin(bf->Graphics, img_Botiquin);
					   Remoto->DibujarInmunidad(bf->Graphics, img_inmunidad);
					   Remoto->DibujarJeringa(bf->Graphics, img_Jeringa);
					   Remoto->DibujarPildoras(bf->Graphics, img_pastilla_amarilla, img_pastilla_azul, img_pastilla_morada, img_pastilla_verde);
					   Remoto->DibujarLlaves(bf->Graphics, img_llave);
					   if (auxxxx == true) {
							   Remoto->MoverDoctor(bf->Graphics, img_doctor);
							   auxxxx = false;
							   eliminar_doctor->Enabled = true;						  
					   }
					   if (aux_para_doctor == true) {
						   Remoto->ColisionJugadorDoctor();
						   Remoto->FuncionalidadDoctor(bf->Graphics, img_doctor, r);
					   }
					   //Remoto->DibujarRectangulo(bf->Graphics);
					   //Verificar Colisiones
					   Remoto->ColisionBalaVirus(bf->Graphics);
					   Remoto->ColisionBalaEvVirus(bf->Graphics);
					   Remoto->ColisionesJugadorVirus();
					   Remoto->ColisionesJugadorEvVirus();
					   Remoto->ColisionJugadorObjetos();
					   Remoto->ColisionJugadorPildoras(bf->Graphics);
					   Remoto->ColisionJugadorLlaves(bf->Graphics);
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
				   mostrar_llaves->Text = Convert::ToString(Remoto->get_LlavesRecolectadas());
				   if (Remoto->ColisionesJugadorVirus() == true) {
					   bf->Graphics->DrawImage(fondo_muerte, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
					   Remoto->set_Aux(true);
				   }
				   if (Remoto->ColisionesJugadorEvVirus() == true) {
					   bf->Graphics->DrawImage(fondo_muerte, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
					   Remoto->set_Aux(true);
				   }
				   //Huida al Hospital
				   if (aux == false) {
					   if (Remoto->GanasteJuego() == true) {
						   reloj_Nivel2->Enabled = false;
						   MessageBox::Show("CONSEGUISTE TODAS LAS LLAVES! ENTRA AL HOSPITAL!!!");
						   reloj_Nivel2->Enabled = true;
						   agregar_Omicron2->Interval = 2000;
						   agregar_virus2->Interval = 1500;
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
				   
				   if (Remoto->get_HabilitarEndGame() == true) {
					   if (Remoto->ColisionRefugio() == true) {
						   reloj_Nivel2->Enabled = false;
						   Configuracion* datitos = new Configuracion("data.txt");
						   datitos->guardar(getString(nombre), "Gano", "Nivel 2");
						   TFProgramacion::Pantalla_Victoria^ victoria = gcnew TFProgramacion::Pantalla_Victoria();
						   MessageBox::Show("FELICIDADES!! LOGRASTE ESCONDERTE DE LOS VIRUS!");
						   music_nivel2pt2->Stop();
						   auxx = false;
						   victoria->ShowDialog();
						   this->Hide();
						   delete victoria;
						   this->Close();
					   }
				   }
				   if (Remoto->get_Aux() == true) {
					   reloj_Nivel2->Enabled = false;
					   Configuracion* datitos = new Configuracion("data.txt");
					   datitos->guardar(getString(nombre), "Perdio", "Nivel 2");
					   TFProgramacion::Pantalla_Derrota^ derrota = gcnew TFProgramacion::Pantalla_Derrota();
					   MessageBox::Show("Haz perdido todas tus vidas :(");
					   music_nivel2->Stop();
					   music_nivel2pt2->Stop();
					   this->Hide();
					   derrota->ShowDialog();
					   delete derrota;
					   this->Close();
				   }
				   if (casifin == false) {
					   if (nuevo_sound == false) {
						   if (Remoto->get_PastillasObtenidas() >= 9) {
							   nuevo_sound = true;
							   descansito->Visible = true;
							   agregar_virusnormales->Enabled = false;
						   }
					   }
					   if (Remoto->get_PastillasObtenidas() >= 10) {
						   descansito->Visible = false;
						   short vidas = 2;
						   reloj_Nivel2->Enabled = false;
						   agregar_Omicron2->Enabled = false;
						   agregar_virus2->Enabled = false;
						   MessageBox::Show("INCREIBLE! SOLO TE FALTAN LAS LLAVES\nSE AVECINA UNA HORDA, RESISTE!","DALE!");
						   MessageBox::Show("AHORA PUEDES LLAMAR A UN ALIADO! PRESIONA LA TECLA \"A\" Y VENDRA A AYUDARTE POR UN INSTANTE!SÓLO LO PUEDES HACER UNA VEZ, USALO CON INTELIGENCIA!");
						   agregar_Llaves->Enabled = true;
						   aparecer_doctor = true;
						   music_nivel2->Stop();
						   music_nivel2pt2->PlayLooping();
						   Remoto->set_JugadorVidas(vidas);
						   Remoto->AgregarOmicron2(bf->Graphics, r);
						   Remoto->AgregarOmega2(bf->Graphics, r);
						   Remoto->AgregarDelta2(bf->Graphics, r);
						   agregar_evoluciones = true;
						   agregar_Omicron2->Enabled = true;
						   agregar_virus2->Enabled = true;
						   agregar_Omicron2->Interval = 4000;
						   agregar_virus2->Interval = 2500;
						   agregar_Objetos2->Interval = 9000;
						   agregar_Jeringas2->Interval = 9000;
						   Remoto->set_ActivarLlaves(true);
						   casifin = true;
						   reloj_Nivel2->Enabled = true;
					   }
				   }
			   }
			   delete bfc;
			   delete bf;
		   }
	Void Nivel2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		Remoto->MoverJugador(e->KeyCode, true);
		Remoto->AgregarBala(g, e->KeyCode);
		//Agregar Doctor
		if (aparecer_doctor == true) {
			if (e->KeyCode == Keys::A) {
				set_AuxParaDoctor(true);
				aux_para_doctor = true;
				auxxxx = true;
				aparecer_doctor = false;
			}
		}
		if (e->KeyCode == Keys::P) {
			g->Clear(Color::White);
			JuegoPausado->Visible = true;
			Anuncio->Visible = true;
			eliminar_doctor->Enabled = false;
			agregar_virus2->Enabled = false;
			agregar_Omicron2->Enabled = false;
			agregar_Objetos2->Enabled = false;
			label1->Visible = false;
			cantidadbalas->Visible = false;
			label2->Visible = false;
			cantidadvidas->Visible = false;
			label5->Visible = false;
			mostrar_llaves->Visible = false;
			Remoto->set_Aux(true);
			reloj_Nivel2->Enabled = false;
			agregar_Pildoras2->Enabled = false;
			agregar_virusnormales->Enabled = false;
			label6->Visible = false;
			label3->Visible = false;
			juego_pausado = true;
			mostrar_pastillas->Visible = false;
			label4->Visible = false;
			agregar_Llaves->Enabled = false;
		}
		if (e->KeyCode == Keys::Escape && Remoto->get_Aux() == true) {
			agregar_Llaves->Enabled = true;
			Remoto->set_Aux(false);
			label4->Visible = true;
			mostrar_pastillas->Visible = true;
			juego_pausado = false;
			label3->Visible = true;
			agregar_Pildoras2->Enabled = true;
			agregar_virus2->Enabled = true;
			agregar_Omicron2->Enabled = true;
			agregar_Objetos2->Enabled = true;
			JuegoPausado->Visible = false;
			Anuncio->Visible = false;
			label1->Visible = true;
			mostrar_llaves->Visible = true;
			label5->Visible = true;
			eliminar_doctor->Enabled = true;
			cantidadbalas->Visible = true;
			label2->Visible = true;
			cantidadvidas->Visible = true;
			reloj_Nivel2->Enabled = true;
			agregar_virusnormales->Enabled = true;
			label6->Visible = true;
		}
	}

	Void Nivel2_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		Remoto->MoverJugador(e->KeyCode, false);
	}

	Void agregar_Omicron2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->agregar_evoluciones == true) {
			Remoto->AgregarOmicron2(g, r);
		}
	}
	Void agregar_virus2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->agregar_evoluciones == true) {
			short aux = r->Next(1, 3);
			switch (aux) {
			case 1:Remoto->AgregarOmega2(g, r); break;
			case 2:Remoto->AgregarDelta2(g, r); break;
			default:
				break;
			}
		}
	}
	Void agregar_Objetos2_Tick(System::Object^ sender, System::EventArgs^ e) {
		short aux2 = r->Next(1, 3);
		switch (aux2) {
		case 1:Remoto->AgregarBotiquin(g, r); break;
		case 2:Remoto->AgregarInmunidad(g, r); break;
		case 3:  break;
		default:
			break;
		}
	}
	Void agregar_Pildoras2_Tick(System::Object^ sender, System::EventArgs^ e) {
		short aux3 = r->Next(1, 5);
		if (cont < 10) {
			Remoto->AgregarPildoras(g, r, aux3);
		}
	}
    Void agregar_Jeringas2_Tick(System::Object^ sender, System::EventArgs^ e) {
		Remoto->AgregarJeringas(g, r);
	}
	Void agregar_Llaves_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (llaves_aparecidas < 5) {
			Remoto->AgregarLlaves(g, r);
			this->llaves_aparecidas++;
		}
	}
    Void eliminar_doctor_Tick(System::Object^ sender, System::EventArgs^ e) {
		aux_para_doctor = false;
		eliminar_doctor->Enabled = false;
}
    Void agregar_virusnormales_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->agregar_evoluciones == false) {
			short aux = r->Next(1, 4);
			switch (aux) {
			case 1:Remoto->AgregarOmega(g, r); break;
			case 2:Remoto->AgregarDelta(g, r); break;
			case 3:Remoto->AgregarOmicron(g, r); break;
			default:
				break;
			}
		}
}
};
}
