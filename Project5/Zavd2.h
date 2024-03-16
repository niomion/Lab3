#pragma once

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Zavd2
	/// </summary>
	public ref class Zavd2 : public System::Windows::Forms::Form
	{
	public:
		Zavd2(void)
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
		~Zavd2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Zavd2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(260, 388);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(197, 47);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вихід";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Zavd2::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-11, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(506, 145);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Cursor = System::Windows::Forms::Cursors::Default;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(43, 388);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(197, 47);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Zavd2::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(121, 278);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(246, 87);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"X";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(185, 36);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(53, 20);
			this->textBox7->TabIndex = 17;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(106, 60);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(53, 20);
			this->textBox6->TabIndex = 16;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(106, 37);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(53, 20);
			this->textBox5->TabIndex = 15;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(106, 12);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(53, 20);
			this->textBox4->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(27, 60);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(53, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(27, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(53, 20);
			this->textBox2->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(165, 37);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Y3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(86, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Y2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(86, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Y1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(86, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"X3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"X2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"X1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(3, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(223, 63);
			this->label9->TabIndex = 6;
			this->label9->Text = L"y=f(x):";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 186);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(460, 68);
			this->tableLayoutPanel1->TabIndex = 7;
			// 
			// Zavd2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->ControlBox = false;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Zavd2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Zavd2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

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
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == ""
			|| textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "") {
			MessageBox::Show("Усі поля повинні бути заповнені!", "Попередження", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (!IsNumeric(textBox1->Text) || !IsNumeric(textBox2->Text) || !IsNumeric(textBox3->Text) || !IsNumeric(textBox4->Text)
			|| !IsNumeric(textBox5->Text) || !IsNumeric(textBox6->Text) || !IsNumeric(textBox7->Text)) {
			MessageBox::Show("Усі поля повинні містити числа!", "Попередження", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		double y;
		double x = System::Convert::ToInt32(textBox1->Text);
		double x1 = System::Convert::ToInt32(textBox2->Text);
		double x2 = System::Convert::ToInt32(textBox3->Text);
		double x3 = System::Convert::ToInt32(textBox4->Text);
		double y1 = System::Convert::ToInt32(textBox5->Text);
		double y2 = System::Convert::ToInt32(textBox6->Text);
		double y3 = System::Convert::ToInt32(textBox7->Text);
		if (x == x3) {
			y = (0.9+(0.1*y3));
			label9->Text = "y=f(x):" + y.ToString();
		}
		else if (x2 <= x <= x3) {
			y = y2+(((0.8*x)+(0.25*x1))/(x3-x1))*(y2+y1);
			label9->Text = "y=f(x):" + y.ToString();
		}
		else if (x1 <= x <= x2) {
			y = (0.15*y1) - (((0.25 * x) + (0.8 * x1)) / (x2 - x1)) * (y2 - y3);
			label9->Text = "y=f(x):" + y.ToString();
		}
	}
};
}
