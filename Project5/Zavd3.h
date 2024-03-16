#pragma once
#include <cmath>

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Zavd3
	/// </summary>
	public ref class Zavd3 : public System::Windows::Forms::Form
	{
	public:
		Zavd3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Zavd3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Zavd3::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(248, 388);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(197, 47);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Вихід";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Zavd3::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(40, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(405, 60);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(40, 167);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(197, 160);
			this->listBox1->TabIndex = 4;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(248, 167);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(197, 160);
			this->listBox2->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Cursor = System::Windows::Forms::Cursors::Default;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(40, 388);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(197, 47);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Zavd3::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(198, 362);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(81, 20);
			this->textBox1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(119, 330);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 28);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Введіть значення N";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(119, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 28);
			this->label2->TabIndex = 9;
			this->label2->Text = L"X";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(323, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 28);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Y";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(75, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(336, 28);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Табулювання функції  y=f(x)";
			// 
			// Zavd3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->ControlBox = false;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(500, 500);
			this->MinimizeBox = false;
			this->Name = L"Zavd3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Zavd3";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool IsNumeric(System::String^ s) {
			for each (char c in s) {
				if (!Char::IsDigit(c)) {
					return false;
				}
			}
			return true;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			MessageBox::Show("Усі поля повинні бути заповнені!", "Попередження", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (!IsNumeric(textBox1->Text)) {
			MessageBox::Show("Усі поля повинні містити числа!", "Попередження", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		int number = System::Convert::ToInt32(textBox1->Text);
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		float a = 0.3, b = 2.0;
		float h = (b - a) / number;
		for (float x = a; x <= b; x += h) {
			float y = (exp(x) - exp(-x)) / 4;
			listBox1->Items->Add(x);
			listBox2->Items->Add(y);
		}

	}

};
}
