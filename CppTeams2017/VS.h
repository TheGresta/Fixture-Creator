#pragma once
#include "Calculator.h"

namespace CppTeams2017 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VS
	/// </summary>
	public ref class VS : public System::Windows::Forms::Form
	{
	public:
		VS(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			load_box();
			load_data();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  text_m1;
	protected:

	private: System::Windows::Forms::TextBox^  text_t1;
	private: System::Windows::Forms::TextBox^  text_tactic1;
	private: System::Windows::Forms::TextBox^  text_yas1;
	private: System::Windows::Forms::TextBox^  text_guc1;
	protected:
	private: System::Windows::Forms::TextBox^  text_m2;
	private: System::Windows::Forms::TextBox^  text_t2;
	private: System::Windows::Forms::TextBox^  text_tactic2;
	private: System::Windows::Forms::TextBox^  text_yas2;
	private: System::Windows::Forms::TextBox^  text_guc2;
	private: System::Windows::Forms::TextBox^  text_wr1;
	private: System::Windows::Forms::TextBox^  text_wr2;
	private: System::Windows::Forms::TextBox^  text_s1;
	private: System::Windows::Forms::TextBox^  text_s2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->text_m1 = (gcnew System::Windows::Forms::TextBox());
			this->text_t1 = (gcnew System::Windows::Forms::TextBox());
			this->text_tactic1 = (gcnew System::Windows::Forms::TextBox());
			this->text_yas1 = (gcnew System::Windows::Forms::TextBox());
			this->text_guc1 = (gcnew System::Windows::Forms::TextBox());
			this->text_m2 = (gcnew System::Windows::Forms::TextBox());
			this->text_t2 = (gcnew System::Windows::Forms::TextBox());
			this->text_tactic2 = (gcnew System::Windows::Forms::TextBox());
			this->text_yas2 = (gcnew System::Windows::Forms::TextBox());
			this->text_guc2 = (gcnew System::Windows::Forms::TextBox());
			this->text_wr1 = (gcnew System::Windows::Forms::TextBox());
			this->text_wr2 = (gcnew System::Windows::Forms::TextBox());
			this->text_s1 = (gcnew System::Windows::Forms::TextBox());
			this->text_s2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// text_m1
			// 
			this->text_m1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_m1->Location = System::Drawing::Point(223, 46);
			this->text_m1->Name = L"text_m1";
			this->text_m1->ReadOnly = true;
			this->text_m1->Size = System::Drawing::Size(136, 22);
			this->text_m1->TabIndex = 6;
			this->text_m1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_t1
			// 
			this->text_t1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_t1->Location = System::Drawing::Point(223, 9);
			this->text_t1->Name = L"text_t1";
			this->text_t1->ReadOnly = true;
			this->text_t1->Size = System::Drawing::Size(136, 22);
			this->text_t1->TabIndex = 7;
			this->text_t1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_tactic1
			// 
			this->text_tactic1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_tactic1->Location = System::Drawing::Point(223, 83);
			this->text_tactic1->Name = L"text_tactic1";
			this->text_tactic1->ReadOnly = true;
			this->text_tactic1->Size = System::Drawing::Size(136, 22);
			this->text_tactic1->TabIndex = 8;
			this->text_tactic1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_yas1
			// 
			this->text_yas1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_yas1->Location = System::Drawing::Point(223, 120);
			this->text_yas1->Name = L"text_yas1";
			this->text_yas1->ReadOnly = true;
			this->text_yas1->Size = System::Drawing::Size(136, 22);
			this->text_yas1->TabIndex = 10;
			this->text_yas1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_guc1
			// 
			this->text_guc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_guc1->Location = System::Drawing::Point(223, 154);
			this->text_guc1->Name = L"text_guc1";
			this->text_guc1->ReadOnly = true;
			this->text_guc1->Size = System::Drawing::Size(136, 22);
			this->text_guc1->TabIndex = 11;
			this->text_guc1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_m2
			// 
			this->text_m2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_m2->Location = System::Drawing::Point(367, 46);
			this->text_m2->Name = L"text_m2";
			this->text_m2->ReadOnly = true;
			this->text_m2->Size = System::Drawing::Size(136, 22);
			this->text_m2->TabIndex = 12;
			this->text_m2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_t2
			// 
			this->text_t2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_t2->Location = System::Drawing::Point(367, 9);
			this->text_t2->Name = L"text_t2";
			this->text_t2->ReadOnly = true;
			this->text_t2->Size = System::Drawing::Size(136, 22);
			this->text_t2->TabIndex = 13;
			this->text_t2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_tactic2
			// 
			this->text_tactic2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_tactic2->Location = System::Drawing::Point(367, 83);
			this->text_tactic2->Name = L"text_tactic2";
			this->text_tactic2->ReadOnly = true;
			this->text_tactic2->Size = System::Drawing::Size(136, 22);
			this->text_tactic2->TabIndex = 14;
			this->text_tactic2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_yas2
			// 
			this->text_yas2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_yas2->Location = System::Drawing::Point(367, 120);
			this->text_yas2->Name = L"text_yas2";
			this->text_yas2->ReadOnly = true;
			this->text_yas2->Size = System::Drawing::Size(136, 22);
			this->text_yas2->TabIndex = 16;
			this->text_yas2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_guc2
			// 
			this->text_guc2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_guc2->Location = System::Drawing::Point(367, 154);
			this->text_guc2->Name = L"text_guc2";
			this->text_guc2->ReadOnly = true;
			this->text_guc2->Size = System::Drawing::Size(136, 22);
			this->text_guc2->TabIndex = 17;
			this->text_guc2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_wr1
			// 
			this->text_wr1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_wr1->Location = System::Drawing::Point(223, 191);
			this->text_wr1->Name = L"text_wr1";
			this->text_wr1->ReadOnly = true;
			this->text_wr1->Size = System::Drawing::Size(136, 22);
			this->text_wr1->TabIndex = 18;
			this->text_wr1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_wr2
			// 
			this->text_wr2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_wr2->Location = System::Drawing::Point(367, 191);
			this->text_wr2->Name = L"text_wr2";
			this->text_wr2->ReadOnly = true;
			this->text_wr2->Size = System::Drawing::Size(136, 22);
			this->text_wr2->TabIndex = 19;
			this->text_wr2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_s1
			// 
			this->text_s1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_s1->Location = System::Drawing::Point(223, 228);
			this->text_s1->Name = L"text_s1";
			this->text_s1->ReadOnly = true;
			this->text_s1->Size = System::Drawing::Size(136, 22);
			this->text_s1->TabIndex = 21;
			this->text_s1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_s2
			// 
			this->text_s2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_s2->Location = System::Drawing::Point(367, 228);
			this->text_s2->Name = L"text_s2";
			this->text_s2->ReadOnly = true;
			this->text_s2->Size = System::Drawing::Size(136, 22);
			this->text_s2->TabIndex = 22;
			this->text_s2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->dataGridView2);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->text_s2);
			this->panel1->Controls->Add(this->text_s1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->text_wr2);
			this->panel1->Controls->Add(this->text_wr1);
			this->panel1->Controls->Add(this->text_guc2);
			this->panel1->Controls->Add(this->text_yas2);
			this->panel1->Controls->Add(this->text_tactic2);
			this->panel1->Controls->Add(this->text_t2);
			this->panel1->Controls->Add(this->text_m2);
			this->panel1->Controls->Add(this->text_guc1);
			this->panel1->Controls->Add(this->text_yas1);
			this->panel1->Controls->Add(this->text_tactic1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->text_t1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->text_m1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(728, 598);
			this->panel1->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(102, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 22);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Maç Sonucu";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label9->Location = System::Drawing::Point(102, 191);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(115, 22);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Kazanma Þansý";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label10->Location = System::Drawing::Point(102, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 22);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Takým Ýsmi";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label11->Location = System::Drawing::Point(102, 46);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(115, 22);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Teknik Direktör";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label12->Location = System::Drawing::Point(102, 83);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(115, 22);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Diziliþ ";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label13->Location = System::Drawing::Point(102, 120);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(115, 22);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Ort Yaþ";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label14->Location = System::Drawing::Point(102, 154);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(115, 22);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Ort Güç";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->Location = System::Drawing::Point(518, 228);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 22);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Maç Sonucu";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(518, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 22);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Kazanma Þansý";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(518, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 22);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Takým Ýsmi";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(518, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 22);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Teknik Direktör";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(518, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 22);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Diziliþ ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(518, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 22);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Ort Yaþ";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->Location = System::Drawing::Point(518, 154);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 22);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Ort Güç";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeight = 30;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(19, 265);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(342, 323);
			this->dataGridView1->TabIndex = 31;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView2->ColumnHeadersHeight = 30;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dataGridView2->Location = System::Drawing::Point(367, 265);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(342, 323);
			this->dataGridView2->TabIndex = 32;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"No";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Ýsim";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Poz";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Güç";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Yaþ";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"No";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Ýsim";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Poz";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Güç";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Yaþ";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// VS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(753, 615);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"VS";
			this->Text = L"Takým Karþýlaþtýrmasý";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	//Load Mini Boxes As Needed
	private: void load_box() {
		Calculator calculate;
		ArrayList^ values = calculate.vsDetailMiniBox();

		text_t1->Text = values[0]->ToString();
		text_m1->Text = values[1]->ToString();
		text_tactic1->Text = values[2]->ToString();
		text_yas1->Text = values[3]->ToString();
		text_guc1->Text = values[4]->ToString();
		text_s1->Text = values[5]->ToString();

		text_t2->Text = values[6]->ToString();
		text_m2->Text = values[7]->ToString();
		text_tactic2->Text = values[8]->ToString();
		text_yas2->Text = values[9]->ToString();
		text_guc2->Text = values[10]->ToString();
		text_s2->Text = values[11]->ToString();

		float c1 = Convert::ToInt32(values[4]);
		float c2 = Convert::ToInt32(values[10]);

		float wr1 = (c1 / (c1 + c2) * 100);
		float wr2 = (c2 / (c1 + c2) * 100);

		int wc1 = Math::Round(wr1);
		int wc2 = Math::Round(wr2);

		text_wr1->Text = "%" + Convert::ToString(wc1);
		text_wr2->Text = "%" + Convert::ToString(wc2);
	}

	//Load Both DataGirView
	private: void load_data() {
		Calculator calculate;
		ArrayList^ values = calculate.teamVsTeamNames();
		String^ teamName1 = values[0]->ToString();
		String^ teamName2 = values[3]->ToString();

		dataGridView1->RowCount = 0;
		dataGridView2->RowCount = 0;

		values = calculate.teamVsPlayerDetail(teamName1);

		for (int i = 0; i < values->Count / 5; i++) {
			dataGridView1->Rows->Add();
			for (int j = 0; j < 5; j++) {
				dataGridView1->Rows[i]->Cells[j]->Value = values[i * 5 + j];
			}
		}

		values = calculate.teamVsPlayerDetail(teamName2);

		for (int i = 0; i < values->Count / 5; i++) {
			dataGridView2->Rows->Add();
			for (int j = 0; j < 5; j++) {
				dataGridView2->Rows[i]->Cells[j]->Value = values[i * 5 + j];
			}
		}

		dataGridView1->Columns[0]->Width = (int)(dataGridView1->Width * 0.15);
		dataGridView1->Columns[1]->Width = (int)(dataGridView1->Width * 0.4);
		dataGridView1->Columns[2]->Width = (int)(dataGridView1->Width * 0.15);
		dataGridView1->Columns[3]->Width = (int)(dataGridView1->Width * 0.15);
		dataGridView1->Columns[4]->Width = (int)(dataGridView1->Width * 0.15);

		dataGridView2->Columns[0]->Width = (int)(dataGridView2->Width * 0.15);
		dataGridView2->Columns[1]->Width = (int)(dataGridView2->Width * 0.4);
		dataGridView2->Columns[2]->Width = (int)(dataGridView2->Width * 0.15);
		dataGridView2->Columns[3]->Width = (int)(dataGridView2->Width * 0.15);
		dataGridView2->Columns[4]->Width = (int)(dataGridView2->Width * 0.15);

		dataGridView1->Columns[0]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView1->Columns[4]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

		dataGridView2->Columns[0]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView2->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView2->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView2->Columns[4]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

		for (int i = 0; i < dataGridView1->RowCount; i++) {
			String^ value = dataGridView1->Rows[i]->Cells[2]->Value->ToString();

			if (value == "KAL") dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::Gold;
			else if (value == "DEF") dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::LimeGreen;
			else if (value == "ORT") dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::RoyalBlue;
			else if (value == "FOR") dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::Firebrick;
		}

		for (int i = 0; i < dataGridView2->RowCount; i++) {
			String^ value = dataGridView2->Rows[i]->Cells[2]->Value->ToString();

			if (value == "KAL") dataGridView2->Rows[i]->DefaultCellStyle->BackColor = Color::Gold;
			else if (value == "DEF") dataGridView2->Rows[i]->DefaultCellStyle->BackColor = Color::LimeGreen;
			else if (value == "ORT") dataGridView2->Rows[i]->DefaultCellStyle->BackColor = Color::RoyalBlue;
			else if (value == "FOR") dataGridView2->Rows[i]->DefaultCellStyle->BackColor = Color::Firebrick;
		}

		dataGridView1->ClearSelection();
		dataGridView2->ClearSelection();		
	}

	};
}
