#pragma once
#include "Read.h"
#include "Calculator.h"
#include "Write.h"
#include "CreateTeam.h"
#include "TeamDetail.h"
#include "VS.h"
#include "NewTeam.h"

/*
What this program does ?

We read teams from "Takimlar.txt" file.
After we reall all of our teams, We create team file for each of them. For example: Trabzon Sport -> "Trabzon Sport.txt".
With this way, we can save some of our informations for each different team.
After create all of our files, program randomly create players for each team. After that, we save all of players
informations in this files so we can acces later.

After we create all teams and footballers. We save some teams informations in "Teams Info.txt" file. We list each teams informations together.
This makes the program faster to calculate other things.

When we calculate all players for each teams and all the informations, we create a fixture. Each team play with other teams for ones.
After that we calculate the scor board and finish.

Here is how we save our informations.

"Takimlar.txt" -> "Team Name" # "Manager Name" # "Tactic stile : 4-4-2".
"Isým.txt" -> 500 random names on each line.
"Soyisim.txt" -> 500 random last names on each line.
"-Team Name-.txt" -> "Player No" # "Player Name" # "Place : Forvet" # "Power Value" # "Age"
"Teams Info.txt" -> "Team Name" # "Manager Name" # "Tactic stile : 4-4-2" # Avarage : "Age" # "Power" # "Def Power" # "Mid Power" # "Forvet Power"
"Fixture.txt" -> "First Team Name" # "First Team Scor" # "Secont Team Scor" # "Secont Team Name"
"Puan Durumu.txt" -> "Team Place" # "Team Name" # "Played Game" # "Win" # "Draw" # "Lose" # "Scor" # "Conceded" # "Average" # "Total Point"
*/

namespace CppTeams2017 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			load_TL();
			load_Fx();
			load_Sb();

			comboBox1->SelectedIndex = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  panel1;
	protected:

	private:
	private: System::Windows::Forms::Button^  btn_yenile;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Button^  btn_ara;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::Button^  btn_add;
	private: System::Windows::Forms::Button^  btn_rerun;
	private: System::Windows::Forms::Button^  btn_replay;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::Button^  btn_delete;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_rerun = (gcnew System::Windows::Forms::Button());
			this->btn_replay = (gcnew System::Windows::Forms::Button());
			this->btn_ara = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_yenile = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btn_delete);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btn_add);
			this->panel1->Controls->Add(this->btn_rerun);
			this->panel1->Controls->Add(this->btn_replay);
			this->panel1->Controls->Add(this->btn_ara);
			this->panel1->Controls->Add(this->tabControl1);
			this->panel1->Controls->Add(this->btn_yenile);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(792, 482);
			this->panel1->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Takým Ýsmi", L"Tag", L"Mac ID" });
			this->comboBox1->Location = System::Drawing::Point(622, 58);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(140, 24);
			this->comboBox1->TabIndex = 17;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(622, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 22);
			this->textBox1->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(622, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 30);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Arama Türü";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_add
			// 
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btn_add->Location = System::Drawing::Point(622, 257);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(140, 45);
			this->btn_add->TabIndex = 14;
			this->btn_add->Text = L"Takým Ekle";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_add_MouseClick);
			// 
			// btn_rerun
			// 
			this->btn_rerun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btn_rerun->Location = System::Drawing::Point(622, 410);
			this->btn_rerun->Name = L"btn_rerun";
			this->btn_rerun->Size = System::Drawing::Size(140, 45);
			this->btn_rerun->TabIndex = 13;
			this->btn_rerun->Text = L"Sýfýrla Ve Yenile";
			this->btn_rerun->UseVisualStyleBackColor = true;
			this->btn_rerun->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_rerun_MouseClick);
			// 
			// btn_replay
			// 
			this->btn_replay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btn_replay->Location = System::Drawing::Point(622, 359);
			this->btn_replay->Name = L"btn_replay";
			this->btn_replay->Size = System::Drawing::Size(140, 45);
			this->btn_replay->TabIndex = 12;
			this->btn_replay->Text = L"Yeniden Oynat";
			this->btn_replay->UseVisualStyleBackColor = true;
			this->btn_replay->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_replay_MouseClick);
			// 
			// btn_ara
			// 
			this->btn_ara->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btn_ara->Location = System::Drawing::Point(622, 116);
			this->btn_ara->Name = L"btn_ara";
			this->btn_ara->Size = System::Drawing::Size(140, 45);
			this->btn_ara->TabIndex = 10;
			this->btn_ara->Text = L"Arama";
			this->btn_ara->UseVisualStyleBackColor = true;
			this->btn_ara->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_ara_MouseClick);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(620, 464);
			this->tabControl1->TabIndex = 8;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(612, 435);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Takým Listesi";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeight = 30;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(7, 7);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(599, 425);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->DoubleClick += gcnew System::EventHandler(this, &MyForm::dataGridView1_DoubleClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"No";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tag";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Takým Ýsmi";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Teknik Direktör";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(612, 435);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Fikstür";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->ColumnHeadersHeight = 30;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column11,
					this->dataGridViewTextBoxColumn1, this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Location = System::Drawing::Point(7, 7);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(599, 425);
			this->dataGridView2->TabIndex = 1;
			this->dataGridView2->DoubleClick += gcnew System::EventHandler(this, &MyForm::dataGridView2_DoubleClick);
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"ID";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
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
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(612, 435);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Puan Durumu";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->ColumnHeadersHeight = 30;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->Column5, this->Column6,
					this->Column7, this->Column8, this->Column9, this->Column10
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView3->Location = System::Drawing::Point(7, 7);
			this->dataGridView3->MultiSelect = false;
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView3->Size = System::Drawing::Size(599, 425);
			this->dataGridView3->TabIndex = 1;
			this->dataGridView3->DoubleClick += gcnew System::EventHandler(this, &MyForm::dataGridView3_DoubleClick);
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"No";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Takým";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"O";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"G";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"B";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"M";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"A";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Y";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"AV";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Puan";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// btn_yenile
			// 
			this->btn_yenile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btn_yenile->Location = System::Drawing::Point(622, 308);
			this->btn_yenile->Name = L"btn_yenile";
			this->btn_yenile->Size = System::Drawing::Size(140, 45);
			this->btn_yenile->TabIndex = 7;
			this->btn_yenile->Text = L"Tablo Yenile";
			this->btn_yenile->UseVisualStyleBackColor = true;
			this->btn_yenile->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_yenile_MouseClick);
			// 
			// btn_delete
			// 
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btn_delete->Location = System::Drawing::Point(622, 206);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(140, 45);
			this->btn_delete->TabIndex = 18;
			this->btn_delete->Text = L"Seçili Takýmý Sil";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_delete_MouseClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 467);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"TFF Super Lig";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	// Load Team List Data View
	private: void load_TL() {
		readFromFile readMain;
		Calculator calculator;
		ArrayList^ teamsInfo = gcnew ArrayList;
		ArrayList^ teamsTag = gcnew ArrayList;
		String^ fileName = "Takimlar.txt";

		teamsInfo = readMain.read(fileName);
		teamsTag = calculator.tags(teamsInfo);
		dataGridView1->RowCount = 0;

		dataGridView1->Columns[0]->Width = (int)(dataGridView1->Width * 0.1);
		dataGridView1->Columns[1]->Width = (int)(dataGridView1->Width * 0.1);
		dataGridView1->Columns[2]->Width = (int)(dataGridView1->Width * 0.4);
		dataGridView1->Columns[3]->Width = (int)(dataGridView1->Width * 0.4);

		dataGridView1->Columns[0]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView1->Columns[1]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

		int line = 1;

		for (int i = 0; i < teamsInfo->Count / 3; i++) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = line;
			dataGridView1->Rows[i]->Cells[1]->Value = teamsTag[i];
			dataGridView1->Rows[i]->Cells[2]->Value = teamsInfo[i * 3];
			dataGridView1->Rows[i]->Cells[3]->Value = teamsInfo[i * 3 + 1];
			line++;
		}
		int size = dataGridView1->RowCount;
		for (int i = 0; i < size / 2; i++) {
			dataGridView1->Rows[i * 2]->DefaultCellStyle->BackColor = Color::DarkGray;
			dataGridView1->Rows[i * 2 + 1]->DefaultCellStyle->BackColor = Color::LightGray;
		}

		dataGridView1->ClearSelection();
	}

	// Load Fixture Data View
	private: void load_Fx() {
		readFromFile readMain;
		String^ fileName = "Fiksture.txt";

		ArrayList^ teamsInfo = readMain.read(fileName);
		dataGridView2->RowCount = 0;

		dataGridView2->Columns[0]->Width = (int)(dataGridView2->Width * 0.1);
		dataGridView2->Columns[1]->Width = (int)(dataGridView2->Width * 0.4);
		dataGridView2->Columns[2]->Width = (int)(dataGridView2->Width * 0.1);
		dataGridView2->Columns[3]->Width = (int)(dataGridView2->Width * 0.4);

		dataGridView2->Columns[0]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView2->Columns[1]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView2->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView2->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView2->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

		int row = 0;
		for (int i = 0; i < teamsInfo->Count / 4; i++) {			
			if (teamsInfo[i * 4]->ToString() != " " && teamsInfo[i * 4 + 3]->ToString() != " ") {
				dataGridView2->Rows->Add();
				dataGridView2->Rows[row]->Cells[1]->Value = teamsInfo[i * 4];
				dataGridView2->Rows[row]->Cells[2]->Value = teamsInfo[i * 4 + 1] + " - " + teamsInfo[i * 4 + 2];
				dataGridView2->Rows[row]->Cells[3]->Value = teamsInfo[i * 4 + 3];
				row++;
			}			
		}

		int size = dataGridView2->RowCount;
		for (int i = 0; i < size / 2; i++) {
			dataGridView2->Rows[i * 2]->DefaultCellStyle->BackColor = Color::DarkGray;
			dataGridView2->Rows[i * 2 + 1]->DefaultCellStyle->BackColor = Color::LightGray;
		}

		for (int i = 0; i < size; i++) {
			String^ id;
			if (i + 1 < 10) id = "00" + Convert::ToString(i + 1);
			else if(i + 1 < 100) id = "0" + Convert::ToString(i + 1);
			else id = Convert::ToString(i + 1);
			dataGridView2->Rows[i]->Cells[0]->Value = id;
		}

		dataGridView2->ClearSelection();
	}

	// Load Scor Board
	private: void load_Sb() {
		readFromFile readMain;
		String^ fileName = "Puan Durumu.txt";

		ArrayList^ teamsInfo = readMain.read(fileName);
		dataGridView3->RowCount = 0;
		int size = dataGridView3->ColumnCount;

		for (int i = 0; i < size; i++) {
			if(i < 1) dataGridView3->Columns[i]->Width = (int)(dataGridView3->Width * 0.1);
			else if(i < 2) dataGridView3->Columns[i]->Width = (int)(dataGridView3->Width * 0.3);
			else if (i < 6) dataGridView3->Columns[i]->Width = (int)(dataGridView3->Width * 0.05);
			else if (i < size) dataGridView3->Columns[i]->Width = (int)(dataGridView3->Width * 0.1);
		}

		for (int i = 0; i < size; i++) {
			dataGridView3->Columns[i]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		}

		dataGridView3->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

		for (int i = 0; i < teamsInfo->Count / 10; i++) {
			dataGridView3->Rows->Add();
			for(int j=0; j<size; j++) dataGridView3->Rows[i]->Cells[j]->Value = teamsInfo[i * 10 + j];
		}

		size = dataGridView3->RowCount;

		for (int i = 0; i < size; i++) {
			if(i < 2) dataGridView3->Rows[i]->DefaultCellStyle->BackColor = Color::LimeGreen;
			else if(i < 4) dataGridView3->Rows[i]->DefaultCellStyle->BackColor = Color::RoyalBlue;
			else if(i < size - 4) dataGridView3->Rows[i]->DefaultCellStyle->BackColor = Color::LightSlateGray;
			else dataGridView3->Rows[i]->DefaultCellStyle->BackColor = Color::Firebrick;			
		}

		dataGridView3->ClearSelection();
	}

	//Create Team Files And Info File And Fill
	private: void cFiles() {
		readFromFile readMain;
		Calculator calculator;
		Create create;

		ArrayList^ teamsInfo = gcnew ArrayList;
		ArrayList^ sendInfo = gcnew ArrayList;
		String^ fileName = "Takimlar.txt";

		sendInfo->Add("");
		sendInfo->Add("");
		sendInfo->Add("");

		teamsInfo = readMain.read(fileName);

		for (int i = 0; i < teamsInfo->Count / 3; i++) {
			sendInfo[0] = teamsInfo[i * 3];
			sendInfo[1] = teamsInfo[i * 3 + 1];
			sendInfo[2] = teamsInfo[i * 3 + 2];
			create.createTeam(sendInfo);
		}
	}

	//Open Team Detail Form With Team List
    private: System::Void dataGridView1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		int index = dataGridView1->CurrentRow->Index;
		String^ teamName = dataGridView1->Rows[index]->Cells[2]->Value->ToString();

		writeToFile write;
		write.writeSavedInfo(teamName);

		TeamDetail^ f1 = gcnew TeamDetail();
		f1->ShowDialog();
    }

	//Open VS Form With Fixture
    private: System::Void dataGridView2_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		ArrayList^ values = gcnew ArrayList;
		int index = dataGridView2->CurrentRow->Index;

		String^ t1 = dataGridView2->Rows[index]->Cells[1]->Value->ToString();
		String^ t2 = dataGridView2->Rows[index]->Cells[3]->Value->ToString();
		String^ scor = dataGridView2->Rows[index]->Cells[2]->Value->ToString();

		if (t1 == " " || t2 == " ") {
			MessageBox::Show("Karþýlaþma gerçekleþtirilmediði için, karþýlaþtýrma ekraný açýlamýyor.", "Hata !", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			values->Add(t1);
			values->Add(scor);
			values->Add(t2);

			writeToFile write;
			write.writeSavedTeamsInfo(values);

			VS^ f2 = gcnew VS();
			f2->ShowDialog();
		}		
    }

	//Open Team Detail Form Scor Board
    private: System::Void dataGridView3_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		int index = dataGridView3->CurrentRow->Index;
		String^ teamName = dataGridView3->Rows[index]->Cells[1]->Value->ToString();

		writeToFile write;
		write.writeSavedInfo(teamName);

		TeamDetail^ f1 = gcnew TeamDetail();
		f1->ShowDialog();
    }

	//Seach Box Click Event
    private: System::Void btn_ara_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		int selected = comboBox1->SelectedIndex;
		String^ text = textBox1->Text;

		if (selected == 0) {
			int row = dataGridView1->RowCount;
			int index = -1;

			for (int i = 0; i < row; i++) {
				if (dataGridView1->Rows[i]->Cells[2]->Value->ToString() == text) {
					index = i;
					break;
				}
			}

			if (index == -1) {
				MessageBox::Show("Takým bulunamadý. Takým adýný doðru girdiðinize emin olun.", "Hata !", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			else {
				writeToFile write;
				write.writeSavedInfo(text);

				TeamDetail^ f1 = gcnew TeamDetail();
				f1->ShowDialog();
			}
		}

		else if (selected == 1) {
			int row = dataGridView1->RowCount;
			int index = -1;

			for (int i = 0; i < row; i++) {
				if (dataGridView1->Rows[i]->Cells[1]->Value->ToString() == text) {
					index = i;
					break;
				}
			}

			if (index == -1) {
				MessageBox::Show("Takým bulunamadý. Takým tagýný doðru girdiðinize emin olun.", "Hata !", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				writeToFile write;
				write.writeSavedInfo(dataGridView1->Rows[index]->Cells[2]->Value->ToString());

				TeamDetail^ f1 = gcnew TeamDetail();
				f1->ShowDialog();
			}
		}

		else if (selected == 2) {
			int id;
			try {
				id = Convert::ToInt32(text);
			}
			catch(System::FormatException^){
				MessageBox::Show("Maç bulunamadý. Maç ID'yi doðru girdiðinize emin olun. Örnek : '012' veya '12'", "Hata !",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			int row = dataGridView2->RowCount;
			int index = -1;

			for (int i = 0; i < row; i++) {
				if (Convert::ToInt32(dataGridView2->Rows[i]->Cells[0]->Value->ToString()) == id) {
					index = i;
					break;
				}
			}

			if (index == -1) {
				MessageBox::Show("Maç bulunamadý. Maç ID'yi doðru girdiðinize emin olun. Örnek : '012' veya '12'", "Hata !",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			else {
				ArrayList^ values = gcnew ArrayList;

				values->Add(dataGridView2->Rows[index]->Cells[1]->Value->ToString());
				values->Add(dataGridView2->Rows[index]->Cells[2]->Value->ToString());
				values->Add(dataGridView2->Rows[index]->Cells[3]->Value->ToString());

				writeToFile write;
				write.writeSavedTeamsInfo(values);

				VS^ f2 = gcnew VS();
				f2->ShowDialog();
			}
		}
    }

	 //Refresh Tabels - Yenile Button Event
    private: System::Void btn_yenile_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		load_TL();
		load_Fx();
		load_Sb();
    }

	//Play Again button Event
    private: System::Void btn_replay_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		if (MessageBox::Show("Bu iþlemi gerçekleþtirmek, bütün fikstür ve puan tablosunu rasgele olakar yeniden atayacak. Devam etmek istiyor musunuz ?", "Hata !",
			MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			readFromFile read;
			Calculator calculate;
			String^ fileName = "Takimlar.txt";
			ArrayList^ teams = read.read(fileName);
			teams = calculate.teamList(teams);
			calculate.createFixture(teams);

			load_TL();
			load_Fx();
			load_Sb();
		 }	
    }

	//Create And Play Again Button Event
    private: System::Void btn_rerun_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (MessageBox::Show("Bu iþlemi gerçekleþtirmek, bütün takýmlarýn güç deðerlerini ve futbolcularýný rasgele olakar yeniden atayacak. Fikstur ve puan tablosunu deðiþtirecek. Devam etmek istiyor musunuz ?", "Hata !",
			MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

			writeToFile write;
			Create create;
			readFromFile read;
			Calculator calculate;
			write.clearTeamsInfo();
			String^ fileName = "Takimlar.txt";
			ArrayList^ values = read.read(fileName);
			ArrayList^ teamInfo = gcnew ArrayList;

			for (int i = 0; i < values->Count / 3; i++) {
				teamInfo->Clear();
				for (int j = 0; j < 3; j++) {
					teamInfo->Add(values[i * 3 + j]);
				}
				create.createTeam(teamInfo);
			}

			values = calculate.teamList(values);
			calculate.createFixture(values);

			load_TL();
			load_Fx();
			load_Sb();
		}		
    }

	//Create New Team Event
    private: System::Void btn_add_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		NewTeam^ f1 = gcnew NewTeam;
		f1->ShowDialog();
    }
    //Delete Button Event
    private: System::Void btn_delete_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (dataGridView1->SelectedRows->Count == 0) {
			MessageBox::Show("Seçili satýr bulunamadý. Takým listesi tablosundan takým seçtiðinize emin olun.", "Hata !",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (MessageBox::Show("Bu iþlemi gerçekleþtirmek, seçili satýrý kalýcý olarak silecektir. Devam etmek istiyor musunuz ?", "Uyarý !",
				MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ teamName = dataGridView1->CurrentRow->Cells[2]->Value->ToString();
				String^ fileName = "Takimlar.txt";
				writeToFile write;
				write.deleteSendedTeam(teamName, fileName);
				MessageBox::Show("Takým silindi. Yenilemeyi unutmayýn.", "Ýþlem tamamlandý !",
					MessageBoxButtons::OK, MessageBoxIcon::None);
			}			
		}
    }
};
}
