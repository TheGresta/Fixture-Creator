#pragma once
#include "Read.h"
#include "Write.h"
namespace CppTeams2017 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewTeam
	/// </summary>
	public ref class NewTeam : public System::Windows::Forms::Form
	{
	public:
		NewTeam(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			comboBox1->SelectedIndex = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NewTeam()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  text_name;
	private: System::Windows::Forms::TextBox^  text_manager;
	private: System::Windows::Forms::ComboBox^  comboBox1;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->text_name = (gcnew System::Windows::Forms::TextBox());
			this->text_manager = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(12, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Teknik Direktör";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Takým Ýsmi";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(12, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Diziliþ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// text_name
			// 
			this->text_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_name->Location = System::Drawing::Point(12, 37);
			this->text_name->Name = L"text_name";
			this->text_name->Size = System::Drawing::Size(200, 22);
			this->text_name->TabIndex = 4;
			// 
			// text_manager
			// 
			this->text_manager->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->text_manager->Location = System::Drawing::Point(12, 100);
			this->text_manager->Name = L"text_manager";
			this->text_manager->Size = System::Drawing::Size(200, 22);
			this->text_manager->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"4-4-2", L"2-3-5", L"3-3-4", L"3-4-3", L"3-5-2",
					L"3-6-1", L"4-2-4", L"4-5-1", L"5-3-2", L"5-4-1"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 163);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 24);
			this->comboBox1->TabIndex = 6;
			// 
			// btn_save
			// 
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btn_save->Location = System::Drawing::Point(12, 207);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(200, 35);
			this->btn_save->TabIndex = 7;
			this->btn_save->Text = L"Kaydet";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &NewTeam::btn_save_MouseClick);
			// 
			// NewTeam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(227, 254);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->text_manager);
			this->Controls->Add(this->text_name);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"NewTeam";
			this->Text = L"Takým Oluþtur";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Save Button Event
	private: System::Void btn_save_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		readFromFile read;
		writeToFile write;
		String^ fileName = "Takimlar.txt";		
		String^ teamName = text_name->Text;
		String^ manager = text_manager->Text;
		String^ tactic = comboBox1->SelectedItem->ToString();
		int error = 0;

		ArrayList^ values = read.read(fileName);

		for (int i = 0; i < values->Count / 3; i++) {
			if (values[i * 3]->ToString() == teamName) {
				error = 1;
				break;
			}
		}

		if (error == 1) {
			MessageBox::Show("Girilen takým ismi sistemde zaten bulunmakta.", "Hata !", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			if (MessageBox::Show("Bu iþlemi gerçekleþtirmek, bütün takýmlarýn güç deðerlerini ve futbolcularýný rasgele olakar atamanýzý gerektirebilir. Fikstur ve puan tablosunu deðiþtirmek zorunda kalabilirsiniz. Devam etmek istiyor musunuz ?", "Hata !",
				MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				values->Clear();
				values->Add(teamName);
				values->Add(manager);
				values->Add(tactic);

				write.writeToTeamFile(values);
				MessageBox::Show("Kayýt Tamamlandý. Tekrar hesaplamalarýn yapýlmasý için 'Sýfýrla Ve Yenile' butonuna týklamayý unutmayýn.",
					"Ýþlem Tamamlandý", MessageBoxButtons::OK, MessageBoxIcon::None);
				NewTeam^ f1 = gcnew NewTeam;
				f1->Close();
			}
			
		}
	}
};


}
