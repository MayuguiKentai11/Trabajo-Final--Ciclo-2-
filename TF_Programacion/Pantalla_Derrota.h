#pragma once
namespace TFProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pantalla_Derrota
	/// </summary>
	public ref class Pantalla_Derrota : public System::Windows::Forms::Form
	{
	public:

		void set_JuegoTerminado(bool terminado) {
			this->terminado = terminado;
		}
		bool get_JuegoTerminado() {
			return this->terminado;
		}
		Pantalla_Derrota(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			terminado = false;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Pantalla_Derrota()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		bool terminado;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pantalla_Derrota::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(277, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 41);
			this->label1->TabIndex = 2;
			this->label1->Text = L"DERROTA";
			this->label1->Click += gcnew System::EventHandler(this, &Pantalla_Derrota::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(57, 343);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(564, 80);
			this->label2->TabIndex = 3;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(709, 578);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(172, 510);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(310, 68);
			this->button1->TabIndex = 5;
			this->button1->Text = L"ME INSPIRASTE! GRACIAS!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pantalla_Derrota::button1_Click);
			// 
			// Pantalla_Derrota
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 578);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Pantalla_Derrota";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pantalla_Derrota";
			this->Load += gcnew System::EventHandler(this, &Pantalla_Derrota::Pantalla_Derrota_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->terminado = true;
	}
    Void Pantalla_Derrota_Load(System::Object^ sender, System::EventArgs^ e) {

}
};
}
