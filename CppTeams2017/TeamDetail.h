#pragma once
#include "Read.h"
#include "Calculator.h"
#include "Write.h"

namespace CppTeams2017 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeamDetail
	/// </summary>
	public ref class TeamDetail : public System::Windows::Forms::Form
	{
	public:
		TeamDetail(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->ClientSize = System::Drawing::Size(640, 538);

			fill_boxed();
			fill_player();
			fill_Fixture();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TeamDetail()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  text_manager;
	private: System::Windows::Forms::TextBox^  text_name;
	private:
	private: System::Windows::Forms::TextBox^  text_dizilis;
	private: System::Windows::Forms::TextBox^  text_tag;
	private: System::Windows::Forms::TextBox^  text_guc;
	private: System::Windows::Forms::TextBox^  text_yas;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  t_yas;
	private: System::Windows::Forms::TextBox^  t_pos;
	private: System::Windows::Forms::TextBox^  t_name;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  t_power;
	private: System::Windows::Forms::TextBox^  t_no;
	private: System::Windows::Forms::Button^  btn_save;
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->text_manager = (gcnew System::Windows::Forms::TextBox());
			this->text_name = (gcnew System::Windows::Forms::TextBox());
			this->text_dizilis = (gcnew System::Windows::Forms::TextBox());
			this->text_tag = (gcnew System::Windows::Forms::TextBox());
			this->text_guc = (gcnew System::Windows::Forms::TextBox());
			this->text_yas = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->t_power = (gcnew System::Windows::Forms::TextBox());
			this->t_no = (gcnew System::Windows::Forms::TextBox());
			this->t_yas = (gcnew System::Windows::Forms::TextBox());
			this->t_pos = (gcnew System::Windows::Forms::TextBox());
			this->t_name = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(9, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Takým Ýsmi :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(9, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Teknik Direktör :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(283, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tag :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(283, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Diziliþ  :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(448, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ort Yaþ :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(448, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Ort Güç :";
			// 
			// text_manager
			// 
			this->text_manager->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_manager->Location = System::Drawing::Point(137, 46);
			this->text_manager->Name = L"text_manager";
			this->text_manager->ReadOnly = true;
			this->text_manager->Size = System::Drawing::Size(136, 22);
			this->text_manager->TabIndex = 6;
			this->text_manager->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_name
			// 
			this->text_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_name->Location = System::Drawing::Point(137, 9);
			this->text_name->Name = L"text_name";
			this->text_name->ReadOnly = true;
			this->text_name->Size = System::Drawing::Size(136, 22);
			this->text_name->TabIndex = 7;
			this->text_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_dizilis
			// 
			this->text_dizilis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_dizilis->Location = System::Drawing::Point(351, 9);
			this->text_dizilis->Name = L"text_dizilis";
			this->text_dizilis->ReadOnly = true;
			this->text_dizilis->Size = System::Drawing::Size(80, 22);
			this->text_dizilis->TabIndex = 8;
			this->text_dizilis->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_tag
			// 
			this->text_tag->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_tag->Location = System::Drawing::Point(351, 46);
			this->text_tag->Name = L"text_tag";
			this->text_tag->ReadOnly = true;
			this->text_tag->Size = System::Drawing::Size(80, 22);
			this->text_tag->TabIndex = 9;
			this->text_tag->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_guc
			// 
			this->text_guc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_guc->Location = System::Drawing::Point(521, 46);
			this->text_guc->Name = L"text_guc";
			this->text_guc->ReadOnly = true;
			this->text_guc->Size = System::Drawing::Size(80, 22);
			this->text_guc->TabIndex = 10;
			this->text_guc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// text_yas
			// 
			this->text_yas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_yas->Location = System::Drawing::Point(521, 9);
			this->text_yas->Name = L"text_yas";
			this->text_yas->ReadOnly = true;
			this->text_yas->Size = System::Drawing::Size(80, 22);
			this->text_yas->TabIndex = 11;
			this->text_yas->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->text_guc);
			this->panel1->Controls->Add(this->text_yas);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->text_tag);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->text_dizilis);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->text_name);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->text_manager);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(614, 84);
			this->panel1->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->tabControl1);
			this->panel2->Location = System::Drawing::Point(3, 94);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(614, 439);
			this->panel2->TabIndex = 13;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->tabControl1->Location = System::Drawing::Point(4, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(597, 427);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(589, 398);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Takým Kadrosu";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeight = 30;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(589, 398);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TeamDetail::dataGridView1_CellClick);
			this->dataGridView1->DoubleClick += gcnew System::EventHandler(this, &TeamDetail::dataGridView1_DoubleClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"No";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Futbolcu Adý";
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
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(589, 398);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Takým Fikstürü";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->ColumnHeadersHeight = 30;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(589, 398);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Ev Sahibi";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Sonuç";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Deplasman";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->btn_save);
			this->panel3->Controls->Add(this->t_power);
			this->panel3->Controls->Add(this->t_no);
			this->panel3->Controls->Add(this->t_yas);
			this->panel3->Controls->Add(this->t_pos);
			this->panel3->Controls->Add(this->t_name);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(643, 94);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(189, 439);
			this->panel3->TabIndex = 14;
			// 
			// btn_save
			// 
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btn_save->Location = System::Drawing::Point(16, 383);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(150, 44);
			this->btn_save->TabIndex = 10;
			this->btn_save->Text = L"Kaydet Ve Kapat";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TeamDetail::btn_save_MouseClick);
			// 
			// t_power
			// 
			this->t_power->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->t_power->Location = System::Drawing::Point(16, 280);
			this->t_power->Name = L"t_power";
			this->t_power->Size = System::Drawing::Size(150, 22);
			this->t_power->TabIndex = 9;
			this->t_power->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// t_no
			// 
			this->t_no->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->t_no->Location = System::Drawing::Point(16, 222);
			this->t_no->Name = L"t_no";
			this->t_no->Size = System::Drawing::Size(150, 22);
			this->t_no->TabIndex = 8;
			this->t_no->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// t_yas
			// 
			this->t_yas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->t_yas->Location = System::Drawing::Point(16, 164);
			this->t_yas->Name = L"t_yas";
			this->t_yas->ReadOnly = true;
			this->t_yas->Size = System::Drawing::Size(150, 22);
			this->t_yas->TabIndex = 7;
			this->t_yas->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// t_pos
			// 
			this->t_pos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->t_pos->Location = System::Drawing::Point(16, 106);
			this->t_pos->Name = L"t_pos";
			this->t_pos->ReadOnly = true;
			this->t_pos->Size = System::Drawing::Size(150, 22);
			this->t_pos->TabIndex = 6;
			this->t_pos->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// t_name
			// 
			this->t_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->t_name->Location = System::Drawing::Point(16, 48);
			this->t_name->Name = L"t_name";
			this->t_name->ReadOnly = true;
			this->t_name->Size = System::Drawing::Size(150, 22);
			this->t_name->TabIndex = 5;
			this->t_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label11->Location = System::Drawing::Point(16, 247);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(150, 30);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Güç";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label10->Location = System::Drawing::Point(16, 189);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(150, 30);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Forma No";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label9->Location = System::Drawing::Point(16, 131);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(150, 30);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Yaþ";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->Location = System::Drawing::Point(16, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(150, 30);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Pozisyon";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->Location = System::Drawing::Point(16, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 30);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Futbolcu Ýsmi";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TeamDetail
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(842, 538);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"TeamDetail";
			this->Text = L"Takým Detayý";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	// Fill Mini Boxed
	private: void fill_boxed() {
		Calculator calculate;
		ArrayList^ values = calculate.teamDetailMiniBox();

		text_name->Text = values[0]->ToString();
		text_manager->Text = values[1]->ToString();
		text_dizilis->Text = values[2]->ToString();		
		text_yas->Text = values[3]->ToString();
		text_guc->Text = values[4]->ToString();
		text_tag->Text = values[5]->ToString();
	}

	// Fill Player DataView
	private: void fill_player() {
		Calculator calculate;
		ArrayList^ values = calculate.teamPlayerDetail();

		dataGridView1->RowCount = 0;
		for (int i = 0; i < values->Count / 5; i++) {
			dataGridView1->Rows->Add();
			for (int j = 0; j < 5; j++) {				
				dataGridView1->Rows[i]->Cells[j]->Value = values[i * 5 + j];
			}
		}

		dataGridView1->Columns[0]->Width = (int)(dataGridView1->Width * 0.15);
		dataGridView1->Columns[1]->Width = (int)(dataGridView1->Width * 0.4);
		dataGridView1->Columns[2]->Width = (int)(dataGridView1->Width * 0.15);
		dataGridView1->Columns[3]->Width = (int)(dataGridView1->Width * 0.15);
		dataGridView1->Columns[4]->Width = (int)(dataGridView1->Width * 0.15);

		dataGridView1->Columns[0]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView1->Columns[4]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

		for (int i = 0; i < dataGridView1->RowCount; i++) {
			String^ value = dataGridView1->Rows[i]->Cells[2]->Value->ToString();

			if(value == "KAL") dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::Gold;
			else if (value == "DEF") dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::LimeGreen;
			else if (value == "ORT") dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::RoyalBlue;
			else if (value == "FOR") dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::Firebrick;
		}

		dataGridView1->ClearSelection();
	}

	// Fill Fixture DataView
	private: void fill_Fixture() {
		Calculator calculate;
		ArrayList^ values = calculate.teamFixture();

		dataGridView2->RowCount = 0;

		for (int i = 0; i < values->Count / 5; i++) {
			dataGridView2->Rows->Add();
			dataGridView2->Rows[i]->Cells[0]->Value = values[i * 5];
			dataGridView2->Rows[i]->Cells[1]->Value = values[i * 5 + 1]->ToString() + " - " + values[i * 5 + 2]->ToString();
			dataGridView2->Rows[i]->Cells[2]->Value = values[i * 5 + 3];

			if (Convert::ToInt32(values[i * 5 + 4]) == 3) dataGridView2->Rows[i]->DefaultCellStyle->BackColor = Color::LimeGreen;
			else if (Convert::ToInt32(values[i * 5 + 4]) == 2) dataGridView2->Rows[i]->DefaultCellStyle->BackColor = Color::DimGray;
			else if (Convert::ToInt32(values[i * 5 + 4]) == 1) dataGridView2->Rows[i]->DefaultCellStyle->BackColor = Color::Firebrick;
		}

		dataGridView2->Columns[0]->Width = (int)(dataGridView2->Width * 0.4);
		dataGridView2->Columns[1]->Width = (int)(dataGridView2->Width * 0.2);
		dataGridView2->Columns[2]->Width = (int)(dataGridView2->Width * 0.4);

		dataGridView2->Columns[0]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView2->Columns[1]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView2->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

		dataGridView2->ClearSelection();
	}

	// Open Player Detail
    private: System::Void dataGridView1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		String^ no = dataGridView1->CurrentRow->Cells[0]->Value->ToString();
		String^ name = dataGridView1->CurrentRow->Cells[1]->Value->ToString();
		String^ pos = dataGridView1->CurrentRow->Cells[2]->Value->ToString();
		String^ guc = dataGridView1->CurrentRow->Cells[3]->Value->ToString();
		String^ yas = dataGridView1->CurrentRow->Cells[4]->Value->ToString();
		
		t_name->Text = name;
		t_pos->Text = pos;
		t_yas->Text = yas;
		t_no->Text = no;
		t_power->Text = guc;

		this->ClientSize = System::Drawing::Size(858, 538);
    }

	// Close Player Detail And Save Data
    private: System::Void btn_save_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		String^ no = dataGridView1->CurrentRow->Cells[0]->Value->ToString();
		String^ name = dataGridView1->CurrentRow->Cells[1]->Value->ToString();
		String^ pos = dataGridView1->CurrentRow->Cells[2]->Value->ToString();
		String^ guc = dataGridView1->CurrentRow->Cells[3]->Value->ToString();
		String^ yas = dataGridView1->CurrentRow->Cells[4]->Value->ToString();

		String^ noNew = t_no->Text->ToString();
		String^ gucNew = t_power->Text->ToString();
		
		int err = 0;
		int gucI = -1, noI = -1;

		try {
			gucI = Convert::ToInt32(gucNew);
			noI = Convert::ToInt32(noNew);
			err = 1;
		}
		catch(System::FormatException^){
			MessageBox::Show("Lütfen 'Güç' ve 'No' deðerlerini, sayý deðeri giriniz.", "Hata !",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			err = 2;
		}

		if (err == 1) {
			if (gucI < 30 || gucI > 100 || noI < 1 || noI > 99) {
				MessageBox::Show("'Güç' ve 'No' deðerleri doðru girilmedi. Güç deðeri 30 ile 100 arasýnda olmalýdýr. Forma numarasu 1 ile 99 arasýnda olmalýdýr.", "Hata !",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				err = 3;
			}
		}

		if (noNew != no || gucNew != guc) {
			if (err == 1) {
				int size = dataGridView1->RowCount;
				for (int i = 0; i < size; i++) {
					String^ nameCheck = dataGridView1->Rows[i]->Cells[1]->Value->ToString();
					no = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
					if ((noNew == no) && (name != nameCheck)) {
						MessageBox::Show("Forma numarasý takýmda zaten bulunmakta. Lütfen baþka bir forma numarasý giriniz.", "Hata !",
							MessageBoxButtons::OK, MessageBoxIcon::Error);
						err = 4;
						break;
					}
				}

				if (err == 1) {
					int powerT = 0;
					for (int i = 0; i < size; i++) {
						powerT += Convert::ToInt32(dataGridView1->Rows[i]->Cells[3]->Value->ToString());
					}

					powerT -= Convert::ToInt32(guc);
					powerT += gucI;

					if (powerT < 660) {
						MessageBox::Show("Girilen oyuncu gücü çok düþük. Takýmýn ortalama gücü minimum '60' olmalýdýr. Oyuncu gücünü yeniden giriniz.", "Hata !",
							MessageBoxButtons::OK, MessageBoxIcon::Error);
						err = 5;
					}

					if (err == 1) {
						if (MessageBox::Show("Bu iþlemi gerçekleþtirmek, futbolcu bilgilerini kalýcý olarak deðiþtirecektir. Devam etmek istiyor musunuz ?", "Uyarý !",
							MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
							ArrayList^ values = gcnew ArrayList;
							String^ teamName = text_name->Text->ToString();
							values->Add(teamName);
							values->Add(name);
							values->Add(noNew);
							values->Add(gucNew);

							writeToFile write;
							write.changePlayerInfo(values);

							MessageBox::Show("Futbolcu bilgileri deðiþtirildi.", "Ýþlem Baþarýlý !",
								MessageBoxButtons::OK, MessageBoxIcon::None);

							fill_boxed();
							fill_player();
							fill_Fixture();

							this->ClientSize = System::Drawing::Size(640, 538);
						}						
					}
				}
			}
		}
		
		else if (noNew == no && gucNew == guc) {
			this->ClientSize = System::Drawing::Size(645, 538);
		}

    }
	// Change Player Detail When Selected Row Changed    
    private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		String^ no = dataGridView1->CurrentRow->Cells[0]->Value->ToString();
		String^ name = dataGridView1->CurrentRow->Cells[1]->Value->ToString();
		String^ pos = dataGridView1->CurrentRow->Cells[2]->Value->ToString();
		String^ guc = dataGridView1->CurrentRow->Cells[3]->Value->ToString();
		String^ yas = dataGridView1->CurrentRow->Cells[4]->Value->ToString();

		t_name->Text = name;
		t_pos->Text = pos;
		t_yas->Text = yas;
		t_no->Text = no;
		t_power->Text = guc;
    }
};
}
