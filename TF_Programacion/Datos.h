#pragma once
#include "Binary.h"
namespace TFProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class Datos : public System::Windows::Forms::Form
	{
	public:
		Datos(void)
		{
			InitializeComponent();
			Configuracion* config = new Configuracion("data.txt");
			textBox1->Text = "";
			for (int i = 0; i < config->getlines().size(); i++) {
				textBox1->Text += "\n" + (i + 1).ToString() + ".- " + gcnew String(config->getlines()[i].c_str()) +
					"\r";
			}
			delete config;
		}

	protected:
		~Datos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Turquoise;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(880, 698);
			this->textBox1->TabIndex = 0;
			// 
			// Datos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(880, 698);
			this->Controls->Add(this->textBox1);
			this->Name = L"Datos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Datos";
			this->Load += gcnew System::EventHandler(this, &Datos::Datos_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Datos_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
