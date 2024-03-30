#pragma once

namespace TFProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Creditos : public System::Windows::Forms::Form
	{
	public:
		Creditos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		~Creditos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ reloj_Creditos;
	protected:




	private: System::Windows::Forms::Label^ Lbl1;

	private: System::Windows::Forms::Label^ Lbl2;
	private: System::Windows::Forms::Label^ Lbl3;
	private: System::Windows::Forms::Label^ Lbl4;
	private: System::Windows::Forms::Label^ Lbl5;
	private: System::Windows::Forms::Label^ Lbl6;
	private: System::Windows::Forms::Label^ Lbl7;
	private: System::Windows::Forms::Label^ Lbl8;
	private: System::Windows::Forms::Label^ Lbl9;
	private: System::Windows::Forms::Label^ Lbl10;
	private: System::Windows::Forms::PictureBox^ LogoCovid;
	private: System::Windows::Forms::PictureBox^ LogoUPC;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Creditos::typeid));
			this->reloj_Creditos = (gcnew System::Windows::Forms::Timer(this->components));
			this->Lbl1 = (gcnew System::Windows::Forms::Label());
			this->Lbl2 = (gcnew System::Windows::Forms::Label());
			this->Lbl3 = (gcnew System::Windows::Forms::Label());
			this->Lbl4 = (gcnew System::Windows::Forms::Label());
			this->Lbl5 = (gcnew System::Windows::Forms::Label());
			this->Lbl6 = (gcnew System::Windows::Forms::Label());
			this->Lbl7 = (gcnew System::Windows::Forms::Label());
			this->Lbl8 = (gcnew System::Windows::Forms::Label());
			this->Lbl9 = (gcnew System::Windows::Forms::Label());
			this->Lbl10 = (gcnew System::Windows::Forms::Label());
			this->LogoCovid = (gcnew System::Windows::Forms::PictureBox());
			this->LogoUPC = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogoCovid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogoUPC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// reloj_Creditos
			// 
			this->reloj_Creditos->Enabled = true;
			this->reloj_Creditos->Interval = 70;
			this->reloj_Creditos->Tick += gcnew System::EventHandler(this, &Creditos::reloj_Creditos_Tick);
			// 
			// Lbl1
			// 
			this->Lbl1->AutoSize = true;
			this->Lbl1->BackColor = System::Drawing::Color::Red;
			this->Lbl1->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F));
			this->Lbl1->ForeColor = System::Drawing::Color::White;
			this->Lbl1->Location = System::Drawing::Point(321, 163);
			this->Lbl1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl1->Name = L"Lbl1";
			this->Lbl1->Size = System::Drawing::Size(64, 34);
			this->Lbl1->TabIndex = 5;
			this->Lbl1->Text = L"UPC ";
			// 
			// Lbl2
			// 
			this->Lbl2->AutoSize = true;
			this->Lbl2->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Lbl2->Location = System::Drawing::Point(184, 212);
			this->Lbl2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl2->Name = L"Lbl2";
			this->Lbl2->Size = System::Drawing::Size(346, 34);
			this->Lbl2->TabIndex = 8;
			this->Lbl2->Text = L"TRABAJO FINAL DE ALGORITMOS";
			// 
			// Lbl3
			// 
			this->Lbl3->AutoSize = true;
			this->Lbl3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Lbl3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Lbl3->Location = System::Drawing::Point(245, 265);
			this->Lbl3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl3->Name = L"Lbl3";
			this->Lbl3->Size = System::Drawing::Size(216, 22);
			this->Lbl3->TabIndex = 9;
			this->Lbl3->Text = L"Ingeniería de Software";
			// 
			// Lbl4
			// 
			this->Lbl4->AutoSize = true;
			this->Lbl4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Lbl4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Lbl4->Location = System::Drawing::Point(276, 301);
			this->Lbl4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl4->Name = L"Lbl4";
			this->Lbl4->Size = System::Drawing::Size(143, 22);
			this->Lbl4->TabIndex = 10;
			this->Lbl4->Text = L"Ciclo 2022 - 02";
			// 
			// Lbl5
			// 
			this->Lbl5->AutoSize = true;
			this->Lbl5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Lbl5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Lbl5->Location = System::Drawing::Point(317, 333);
			this->Lbl5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl5->Name = L"Lbl5";
			this->Lbl5->Size = System::Drawing::Size(61, 22);
			this->Lbl5->TabIndex = 11;
			this->Lbl5->Text = L"WX25";
			// 
			// Lbl6
			// 
			this->Lbl6->AutoSize = true;
			this->Lbl6->BackColor = System::Drawing::Color::MidnightBlue;
			this->Lbl6->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Lbl6->Location = System::Drawing::Point(271, 374);
			this->Lbl6->Name = L"Lbl6";
			this->Lbl6->Size = System::Drawing::Size(157, 34);
			this->Lbl6->TabIndex = 12;
			this->Lbl6->Text = L"INTEGRANTES";
			// 
			// Lbl7
			// 
			this->Lbl7->AutoSize = true;
			this->Lbl7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Lbl7->Location = System::Drawing::Point(209, 423);
			this->Lbl7->Name = L"Lbl7";
			this->Lbl7->Size = System::Drawing::Size(273, 22);
			this->Lbl7->TabIndex = 13;
			this->Lbl7->Text = L"Mauricio Rojas - U202211572";
			// 
			// Lbl8
			// 
			this->Lbl8->AutoSize = true;
			this->Lbl8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Lbl8->Location = System::Drawing::Point(207, 462);
			this->Lbl8->Name = L"Lbl8";
			this->Lbl8->Size = System::Drawing::Size(305, 22);
			this->Lbl8->TabIndex = 14;
			this->Lbl8->Text = L"Fernando Salgado - U202212023";
			// 
			// Lbl9
			// 
			this->Lbl9->AutoSize = true;
			this->Lbl9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Lbl9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Lbl9->Location = System::Drawing::Point(208, 500);
			this->Lbl9->Name = L"Lbl9";
			this->Lbl9->Size = System::Drawing::Size(290, 22);
			this->Lbl9->TabIndex = 15;
			this->Lbl9->Text = L"David Rodriguez - U202212236";
			this->Lbl9->Click += gcnew System::EventHandler(this, &Creditos::Lbl9_Click);
			// 
			// Lbl10
			// 
			this->Lbl10->AutoSize = true;
			this->Lbl10->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl10->ForeColor = System::Drawing::SystemColors::Control;
			this->Lbl10->Location = System::Drawing::Point(188, 564);
			this->Lbl10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lbl10->Name = L"Lbl10";
			this->Lbl10->Size = System::Drawing::Size(156, 45);
			this->Lbl10->TabIndex = 16;
			this->Lbl10->Text = L"¡Gracias!";
			// 
			// LogoCovid
			// 
			this->LogoCovid->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogoCovid.Image")));
			this->LogoCovid->Location = System::Drawing::Point(371, 535);
			this->LogoCovid->Name = L"LogoCovid";
			this->LogoCovid->Size = System::Drawing::Size(143, 107);
			this->LogoCovid->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->LogoCovid->TabIndex = 17;
			this->LogoCovid->TabStop = false;
			// 
			// LogoUPC
			// 
			this->LogoUPC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogoUPC.Image")));
			this->LogoUPC->Location = System::Drawing::Point(297, 46);
			this->LogoUPC->Name = L"LogoUPC";
			this->LogoUPC->Size = System::Drawing::Size(112, 95);
			this->LogoUPC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->LogoUPC->TabIndex = 18;
			this->LogoUPC->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(689, 672);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Creditos::pictureBox1_Click);
			// 
			// Creditos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(685, 654);
			this->Controls->Add(this->LogoUPC);
			this->Controls->Add(this->LogoCovid);
			this->Controls->Add(this->Lbl10);
			this->Controls->Add(this->Lbl9);
			this->Controls->Add(this->Lbl8);
			this->Controls->Add(this->Lbl7);
			this->Controls->Add(this->Lbl6);
			this->Controls->Add(this->Lbl5);
			this->Controls->Add(this->Lbl4);
			this->Controls->Add(this->Lbl3);
			this->Controls->Add(this->Lbl2);
			this->Controls->Add(this->Lbl1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Creditos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Creditos";
			this->Load += gcnew System::EventHandler(this, &Creditos::Creditos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogoCovid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogoUPC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Lbl9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    Void reloj_Creditos_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->LogoUPC->Location = System::Drawing::Point(LogoUPC->Location.X, LogoUPC->Location.Y - 1);
		this->Lbl1->Location = System::Drawing::Point(Lbl1->Location.X, Lbl1->Location.Y - 1);
		this->Lbl2->Location = System::Drawing::Point(Lbl2->Location.X, Lbl2->Location.Y - 1);
		this->Lbl3->Location = System::Drawing::Point(Lbl3->Location.X, Lbl3->Location.Y - 1);
		this->Lbl4->Location = System::Drawing::Point(Lbl4->Location.X, Lbl4->Location.Y - 1);
		this->Lbl5->Location = System::Drawing::Point(Lbl5->Location.X, Lbl5->Location.Y - 1);
		this->Lbl6->Location = System::Drawing::Point(Lbl6->Location.X, Lbl6->Location.Y - 1);
		this->Lbl7->Location = System::Drawing::Point(Lbl7->Location.X, Lbl7->Location.Y - 1);
		this->Lbl8->Location = System::Drawing::Point(Lbl8->Location.X, Lbl8->Location.Y - 1);
		this->Lbl9->Location = System::Drawing::Point(Lbl9->Location.X, Lbl9->Location.Y - 1);
		this->Lbl10->Location = System::Drawing::Point(Lbl10->Location.X, Lbl10->Location.Y - 1);
		this->LogoCovid->Location = System::Drawing::Point(LogoCovid->Location.X, LogoCovid->Location.Y - 1);
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
    Void Creditos_Load(System::Object^ sender, System::EventArgs^ e) {
		LogoUPC->Parent = pictureBox1;
		LogoUPC->BackColor = Color::Transparent;
		//Todo menos lbl6
		Lbl2->Parent = pictureBox1;
		Lbl2->BackColor = Color::Transparent;

		Lbl3->Parent = pictureBox1;
		Lbl3->BackColor = Color::Transparent;

		Lbl4->Parent = pictureBox1;
		Lbl4->BackColor = Color::Transparent;

		Lbl5->Parent = pictureBox1;
		Lbl5->BackColor = Color::Transparent;

		Lbl7->Parent = pictureBox1;
		Lbl7->BackColor = Color::Transparent;

		Lbl8->Parent = pictureBox1;
		Lbl8->BackColor = Color::Transparent;

		Lbl9->Parent = pictureBox1;
		Lbl9->BackColor = Color::Transparent;

		Lbl10->Parent = pictureBox1;
		Lbl10->BackColor = Color::Transparent;
}
};
}
