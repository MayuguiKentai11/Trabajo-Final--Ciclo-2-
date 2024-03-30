#pragma once

namespace TFProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			g = this->CreateGraphics();
			fondo_instrucciones = gcnew Bitmap("imgg/fondo_instrucciones.png");
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm2()
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

		Bitmap^ fondo_instrucciones;
	private: System::Windows::Forms::Timer^ reloj_Instrucciones;

	private: System::Windows::Forms::PictureBox^ imgLlave;













	private: System::Windows::Forms::PictureBox^ imgVirus2;








	private: System::Windows::Forms::PictureBox^ imgVirus3;
	private: System::Windows::Forms::PictureBox^ imgVirus1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::Label^ Lbl1;
	private: System::Windows::Forms::Label^ Lbl2;
	private: System::Windows::Forms::Button^ Btn5;
	private: System::Windows::Forms::PictureBox^ imgTeclas;

	private: System::Windows::Forms::Label^ Lbl3;
	private: System::Windows::Forms::Label^ Lbl4;
	private: System::Windows::Forms::Label^ Lbl5;
	private: System::Windows::Forms::Label^ Lbl6;
	private: System::Windows::Forms::PictureBox^ imgJeringa;

	private: System::Windows::Forms::PictureBox^ imgInmunidad;
	private: System::Windows::Forms::PictureBox^ imgBala;


	private: System::Windows::Forms::PictureBox^ imgBotiquin;

	private: System::Windows::Forms::Button^ Btn2;
	private: System::Windows::Forms::Button^ Btn3;
	private: System::Windows::Forms::Button^ Btn4;
	private: System::Windows::Forms::Button^ Btn1;
	private: System::Windows::Forms::PictureBox^ imgPildora1;
	private: System::Windows::Forms::PictureBox^ imgPildora2;
	private: System::Windows::Forms::PictureBox^ imgPildora4;



	private: System::Windows::Forms::PictureBox^ imgPildora3;
	private: System::Windows::Forms::Button^ btn_Disparar;


		   Graphics^ g;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->reloj_Instrucciones = (gcnew System::Windows::Forms::Timer(this->components));
			this->imgLlave = (gcnew System::Windows::Forms::PictureBox());
			this->imgVirus2 = (gcnew System::Windows::Forms::PictureBox());
			this->imgVirus3 = (gcnew System::Windows::Forms::PictureBox());
			this->imgVirus1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Lbl1 = (gcnew System::Windows::Forms::Label());
			this->Lbl2 = (gcnew System::Windows::Forms::Label());
			this->Btn5 = (gcnew System::Windows::Forms::Button());
			this->imgTeclas = (gcnew System::Windows::Forms::PictureBox());
			this->Lbl3 = (gcnew System::Windows::Forms::Label());
			this->Lbl4 = (gcnew System::Windows::Forms::Label());
			this->Lbl5 = (gcnew System::Windows::Forms::Label());
			this->Lbl6 = (gcnew System::Windows::Forms::Label());
			this->imgJeringa = (gcnew System::Windows::Forms::PictureBox());
			this->imgInmunidad = (gcnew System::Windows::Forms::PictureBox());
			this->imgBala = (gcnew System::Windows::Forms::PictureBox());
			this->imgBotiquin = (gcnew System::Windows::Forms::PictureBox());
			this->Btn2 = (gcnew System::Windows::Forms::Button());
			this->Btn3 = (gcnew System::Windows::Forms::Button());
			this->Btn4 = (gcnew System::Windows::Forms::Button());
			this->Btn1 = (gcnew System::Windows::Forms::Button());
			this->imgPildora1 = (gcnew System::Windows::Forms::PictureBox());
			this->imgPildora2 = (gcnew System::Windows::Forms::PictureBox());
			this->imgPildora4 = (gcnew System::Windows::Forms::PictureBox());
			this->imgPildora3 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Disparar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLlave))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgVirus2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgVirus3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgVirus1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgTeclas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgJeringa))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgInmunidad))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBala))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBotiquin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPildora1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPildora2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPildora4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPildora3))->BeginInit();
			this->SuspendLayout();
			// 
			// reloj_Instrucciones
			// 
			this->reloj_Instrucciones->Enabled = true;
			this->reloj_Instrucciones->Tick += gcnew System::EventHandler(this, &MyForm2::reloj_Instrucciones_Tick);
			// 
			// imgLlave
			// 
			this->imgLlave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgLlave.Image")));
			this->imgLlave->Location = System::Drawing::Point(446, 172);
			this->imgLlave->Name = L"imgLlave";
			this->imgLlave->Size = System::Drawing::Size(100, 67);
			this->imgLlave->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgLlave->TabIndex = 6;
			this->imgLlave->TabStop = false;
			this->imgLlave->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox3_Click);
			// 
			// imgVirus2
			// 
			this->imgVirus2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgVirus2.Image")));
			this->imgVirus2->Location = System::Drawing::Point(141, 332);
			this->imgVirus2->Name = L"imgVirus2";
			this->imgVirus2->Size = System::Drawing::Size(100, 97);
			this->imgVirus2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgVirus2->TabIndex = 15;
			this->imgVirus2->TabStop = false;
			// 
			// imgVirus3
			// 
			this->imgVirus3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgVirus3.Image")));
			this->imgVirus3->Location = System::Drawing::Point(271, 333);
			this->imgVirus3->Name = L"imgVirus3";
			this->imgVirus3->Size = System::Drawing::Size(100, 97);
			this->imgVirus3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgVirus3->TabIndex = 18;
			this->imgVirus3->TabStop = false;
			// 
			// imgVirus1
			// 
			this->imgVirus1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgVirus1.Image")));
			this->imgVirus1->Location = System::Drawing::Point(19, 331);
			this->imgVirus1->Name = L"imgVirus1";
			this->imgVirus1->Size = System::Drawing::Size(100, 97);
			this->imgVirus1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgVirus1->TabIndex = 19;
			this->imgVirus1->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1037, 630);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// Lbl1
			// 
			this->Lbl1->AutoSize = true;
			this->Lbl1->BackColor = System::Drawing::Color::Transparent;
			this->Lbl1->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl1->Location = System::Drawing::Point(393, 0);
			this->Lbl1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl1->Name = L"Lbl1";
			this->Lbl1->Size = System::Drawing::Size(288, 48);
			this->Lbl1->TabIndex = 21;
			this->Lbl1->Text = L"INSTRUCCIONES";
			// 
			// Lbl2
			// 
			this->Lbl2->AutoSize = true;
			this->Lbl2->BackColor = System::Drawing::Color::Transparent;
			this->Lbl2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl2->Location = System::Drawing::Point(13, 71);
			this->Lbl2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl2->Name = L"Lbl2";
			this->Lbl2->Size = System::Drawing::Size(380, 23);
			this->Lbl2->TabIndex = 22;
			this->Lbl2->Text = L"- Muévete con las teclas direccionales";
			// 
			// Btn5
			// 
			this->Btn5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn5->Location = System::Drawing::Point(17, 18);
			this->Btn5->Margin = System::Windows::Forms::Padding(4);
			this->Btn5->Name = L"Btn5";
			this->Btn5->Size = System::Drawing::Size(217, 30);
			this->Btn5->TabIndex = 25;
			this->Btn5->Text = L"Información General";
			this->Btn5->UseVisualStyleBackColor = true;
			this->Btn5->Click += gcnew System::EventHandler(this, &MyForm2::Btn5_Click);
			// 
			// imgTeclas
			// 
			this->imgTeclas->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgTeclas.Image")));
			this->imgTeclas->Location = System::Drawing::Point(417, 51);
			this->imgTeclas->Name = L"imgTeclas";
			this->imgTeclas->Size = System::Drawing::Size(95, 74);
			this->imgTeclas->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgTeclas->TabIndex = 26;
			this->imgTeclas->TabStop = false;
			// 
			// Lbl3
			// 
			this->Lbl3->AutoSize = true;
			this->Lbl3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl3->Location = System::Drawing::Point(13, 136);
			this->Lbl3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl3->Name = L"Lbl3";
			this->Lbl3->Size = System::Drawing::Size(499, 23);
			this->Lbl3->TabIndex = 27;
			this->Lbl3->Text = L"- Recolecta pildoras y llaves para ganar la partida ";
			// 
			// Lbl4
			// 
			this->Lbl4->AutoSize = true;
			this->Lbl4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->Lbl4->Location = System::Drawing::Point(13, 263);
			this->Lbl4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl4->Name = L"Lbl4";
			this->Lbl4->Size = System::Drawing::Size(333, 23);
			this->Lbl4->TabIndex = 28;
			this->Lbl4->Text = L"- No desperdicies tus municiones";
			// 
			// Lbl5
			// 
			this->Lbl5->AutoSize = true;
			this->Lbl5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->Lbl5->Location = System::Drawing::Point(13, 299);
			this->Lbl5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl5->Name = L"Lbl5";
			this->Lbl5->Size = System::Drawing::Size(235, 23);
			this->Lbl5->TabIndex = 29;
			this->Lbl5->Text = L"- Huye de los enemigos";
			// 
			// Lbl6
			// 
			this->Lbl6->AutoSize = true;
			this->Lbl6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->Lbl6->Location = System::Drawing::Point(13, 434);
			this->Lbl6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl6->Name = L"Lbl6";
			this->Lbl6->Size = System::Drawing::Size(301, 23);
			this->Lbl6->TabIndex = 30;
			this->Lbl6->Text = L"- Utiliza los objetos especiales";
			// 
			// imgJeringa
			// 
			this->imgJeringa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgJeringa.Image")));
			this->imgJeringa->Location = System::Drawing::Point(171, 460);
			this->imgJeringa->Name = L"imgJeringa";
			this->imgJeringa->Size = System::Drawing::Size(96, 84);
			this->imgJeringa->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgJeringa->TabIndex = 32;
			this->imgJeringa->TabStop = false;
			// 
			// imgInmunidad
			// 
			this->imgInmunidad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgInmunidad.Image")));
			this->imgInmunidad->Location = System::Drawing::Point(34, 460);
			this->imgInmunidad->Name = L"imgInmunidad";
			this->imgInmunidad->Size = System::Drawing::Size(45, 84);
			this->imgInmunidad->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgInmunidad->TabIndex = 33;
			this->imgInmunidad->TabStop = false;
			// 
			// imgBala
			// 
			this->imgBala->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgBala.Image")));
			this->imgBala->Location = System::Drawing::Point(376, 254);
			this->imgBala->Name = L"imgBala";
			this->imgBala->Size = System::Drawing::Size(51, 49);
			this->imgBala->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgBala->TabIndex = 34;
			this->imgBala->TabStop = false;
			// 
			// imgBotiquin
			// 
			this->imgBotiquin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgBotiquin.Image")));
			this->imgBotiquin->Location = System::Drawing::Point(334, 460);
			this->imgBotiquin->Name = L"imgBotiquin";
			this->imgBotiquin->Size = System::Drawing::Size(92, 84);
			this->imgBotiquin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgBotiquin->TabIndex = 35;
			this->imgBotiquin->TabStop = false;
			// 
			// Btn2
			// 
			this->Btn2->BackColor = System::Drawing::Color::White;
			this->Btn2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->Btn2->ForeColor = System::Drawing::Color::Black;
			this->Btn2->Location = System::Drawing::Point(0, 551);
			this->Btn2->Margin = System::Windows::Forms::Padding(4);
			this->Btn2->Name = L"Btn2";
			this->Btn2->Size = System::Drawing::Size(133, 34);
			this->Btn2->TabIndex = 36;
			this->Btn2->Text = L"Inmunidad";
			this->Btn2->UseVisualStyleBackColor = false;
			this->Btn2->Click += gcnew System::EventHandler(this, &MyForm2::Btn2_Click);
			// 
			// Btn3
			// 
			this->Btn3->BackColor = System::Drawing::Color::White;
			this->Btn3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->Btn3->ForeColor = System::Drawing::Color::Black;
			this->Btn3->Location = System::Drawing::Point(155, 549);
			this->Btn3->Margin = System::Windows::Forms::Padding(4);
			this->Btn3->Name = L"Btn3";
			this->Btn3->Size = System::Drawing::Size(133, 34);
			this->Btn3->TabIndex = 37;
			this->Btn3->Text = L"Jeringa";
			this->Btn3->UseVisualStyleBackColor = false;
			this->Btn3->Click += gcnew System::EventHandler(this, &MyForm2::Btn3_Click);
			// 
			// Btn4
			// 
			this->Btn4->BackColor = System::Drawing::Color::White;
			this->Btn4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->Btn4->ForeColor = System::Drawing::Color::Black;
			this->Btn4->Location = System::Drawing::Point(317, 549);
			this->Btn4->Margin = System::Windows::Forms::Padding(4);
			this->Btn4->Name = L"Btn4";
			this->Btn4->Size = System::Drawing::Size(133, 34);
			this->Btn4->TabIndex = 38;
			this->Btn4->Text = L"Botiquín";
			this->Btn4->UseVisualStyleBackColor = false;
			this->Btn4->Click += gcnew System::EventHandler(this, &MyForm2::Btn4_Click);
			// 
			// Btn1
			// 
			this->Btn1->BackColor = System::Drawing::Color::ForestGreen;
			this->Btn1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn1->ForeColor = System::Drawing::Color::Black;
			this->Btn1->Location = System::Drawing::Point(837, 521);
			this->Btn1->Margin = System::Windows::Forms::Padding(4);
			this->Btn1->Name = L"Btn1";
			this->Btn1->Size = System::Drawing::Size(169, 49);
			this->Btn1->TabIndex = 39;
			this->Btn1->Text = L"SUERTE";
			this->Btn1->UseVisualStyleBackColor = false;
			this->Btn1->Click += gcnew System::EventHandler(this, &MyForm2::Btn1_Click);
			// 
			// imgPildora1
			// 
			this->imgPildora1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgPildora1.Image")));
			this->imgPildora1->Location = System::Drawing::Point(12, 162);
			this->imgPildora1->Name = L"imgPildora1";
			this->imgPildora1->Size = System::Drawing::Size(84, 84);
			this->imgPildora1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgPildora1->TabIndex = 40;
			this->imgPildora1->TabStop = false;
			// 
			// imgPildora2
			// 
			this->imgPildora2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgPildora2.Image")));
			this->imgPildora2->Location = System::Drawing::Point(122, 162);
			this->imgPildora2->Name = L"imgPildora2";
			this->imgPildora2->Size = System::Drawing::Size(84, 84);
			this->imgPildora2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgPildora2->TabIndex = 41;
			this->imgPildora2->TabStop = false;
			// 
			// imgPildora4
			// 
			this->imgPildora4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgPildora4.Image")));
			this->imgPildora4->Location = System::Drawing::Point(341, 162);
			this->imgPildora4->Name = L"imgPildora4";
			this->imgPildora4->Size = System::Drawing::Size(84, 84);
			this->imgPildora4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgPildora4->TabIndex = 42;
			this->imgPildora4->TabStop = false;
			// 
			// imgPildora3
			// 
			this->imgPildora3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgPildora3.Image")));
			this->imgPildora3->Location = System::Drawing::Point(232, 162);
			this->imgPildora3->Name = L"imgPildora3";
			this->imgPildora3->Size = System::Drawing::Size(84, 84);
			this->imgPildora3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgPildora3->TabIndex = 43;
			this->imgPildora3->TabStop = false;
			// 
			// btn_Disparar
			// 
			this->btn_Disparar->BackColor = System::Drawing::Color::White;
			this->btn_Disparar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->btn_Disparar->ForeColor = System::Drawing::Color::Black;
			this->btn_Disparar->Location = System::Drawing::Point(446, 254);
			this->btn_Disparar->Margin = System::Windows::Forms::Padding(4);
			this->btn_Disparar->Name = L"btn_Disparar";
			this->btn_Disparar->Size = System::Drawing::Size(133, 59);
			this->btn_Disparar->TabIndex = 44;
			this->btn_Disparar->Text = L"Como disparar\?";
			this->btn_Disparar->UseVisualStyleBackColor = false;
			this->btn_Disparar->Click += gcnew System::EventHandler(this, &MyForm2::btn_Disparar_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1019, 583);
			this->Controls->Add(this->btn_Disparar);
			this->Controls->Add(this->imgPildora3);
			this->Controls->Add(this->imgPildora4);
			this->Controls->Add(this->imgPildora2);
			this->Controls->Add(this->imgPildora1);
			this->Controls->Add(this->Btn1);
			this->Controls->Add(this->Btn4);
			this->Controls->Add(this->Btn3);
			this->Controls->Add(this->Btn2);
			this->Controls->Add(this->imgBotiquin);
			this->Controls->Add(this->imgBala);
			this->Controls->Add(this->imgInmunidad);
			this->Controls->Add(this->imgJeringa);
			this->Controls->Add(this->Lbl6);
			this->Controls->Add(this->Lbl5);
			this->Controls->Add(this->Lbl4);
			this->Controls->Add(this->Lbl3);
			this->Controls->Add(this->imgTeclas);
			this->Controls->Add(this->Btn5);
			this->Controls->Add(this->Lbl2);
			this->Controls->Add(this->Lbl1);
			this->Controls->Add(this->imgVirus1);
			this->Controls->Add(this->imgVirus3);
			this->Controls->Add(this->imgVirus2);
			this->Controls->Add(this->imgLlave);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLlave))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgVirus2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgVirus3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgVirus1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgTeclas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgJeringa))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgInmunidad))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBala))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBotiquin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPildora1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPildora2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPildora4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPildora3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		Lbl1->Parent = pictureBox1;
		Lbl1->BackColor = Color::Transparent;

		Lbl2->Parent = pictureBox1;
		Lbl2->BackColor = Color::Transparent;

		Lbl3->Parent = pictureBox1;
		Lbl3->BackColor = Color::Transparent;

		Lbl4->Parent = pictureBox1;
		Lbl4->BackColor = Color::Transparent;

		Lbl5->Parent = pictureBox1;
		Lbl5->BackColor = Color::Transparent;

		Lbl6->Parent = pictureBox1;
		Lbl6->BackColor = Color::Transparent;

		imgTeclas->Parent = pictureBox1;
		imgTeclas->BackColor = Color::Transparent;

		imgPildora1->Parent = pictureBox1;
		imgPildora1->BackColor = Color::Transparent;

		imgPildora2->Parent = pictureBox1;
		imgPildora2->BackColor = Color::Transparent;

		imgPildora3->Parent = pictureBox1;
		imgPildora3->BackColor = Color::Transparent;

		imgPildora4->Parent = pictureBox1;
		imgPildora4->BackColor = Color::Transparent;

		imgLlave->Parent = pictureBox1;
		imgLlave->BackColor = Color::Transparent;

		imgBala->Parent = pictureBox1;
		imgBala->BackColor = Color::Transparent;

		imgVirus1->Parent = pictureBox1;
		imgVirus1->BackColor = Color::Transparent;

		imgVirus2->Parent = pictureBox1;
		imgVirus2->BackColor = Color::Transparent;

		imgVirus3->Parent = pictureBox1;
		imgVirus3->BackColor = Color::Transparent;

		imgInmunidad->Parent = pictureBox1;
		imgInmunidad->BackColor = Color::Transparent;

		imgJeringa->Parent = pictureBox1;
		imgJeringa->BackColor = Color::Transparent;

		imgBotiquin->Parent = pictureBox1;
		imgBotiquin->BackColor = Color::Transparent;
	}
	Void reloj_Instrucciones_Tick(System::Object^ sender, System::EventArgs^ e) {
	}
	Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	Void Btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	Void Btn5_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("El juego esta ambientado en la pandemia del 2020 y consiste en recolectar medicamentos, los cuales son representados en forma de píldoras dispersos en todo el mapa. El objetivo es conseguir todas las pildoras y contribuir con la salud mundial. Pero habrán virus que tratarán de impedir que cumplamos nuestro objetivo y se deberán usar vacunas que contengan la cura, como armas para poder derotarlos. Una vez se haya recolectado lo solicidado se habilitará un refugio para protegerse de los virus y cumplir con tu meta. Seras capaz de completarlo?... Atrévete y Salva al Mundo!", "Detalles del Juego", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	Void Btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Este objeto te hara invulnerable durante el siguiente ataque...");
	}
	Void Btn3_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Estas jeringas lleno cargados con vacuna agregara 10 de municion a tu capacidad.");
	}
	Void Btn4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Este botiquin te hara recuperar 1 de vida en el campo de batalla.");
	}
    Void btn_Disparar_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Se dispara con la tecla X. NO OLVIDES APUNTAR BIEN!");
}
};
}
