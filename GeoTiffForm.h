#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>


namespace tiffviewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ GeoTiffForm
	/// </summary>
	public ref class GeoTiffForm : public System::Windows::Forms::Form
	{
	public:
		GeoTiffForm(void)
		{
			InitializeComponent();
			this->dataGridViewGeoTiff->Rows->Clear();
			labelKeyDirectoryVersion->Text = GeoTiffHeaderInFile.KeyDirectoryVersion.ToString();
			labelKeysRev->Text = GeoTiffHeaderInFile.KeyRevision.ToString() + "." +
				GeoTiffHeaderInFile.MinorRevision.ToString();
			labelNumbKeys->Text = GeoTiffHeaderInFile.NumberOfKeys.ToString();
			for (int i = 0; i < GeoTiffTagsInFile.size(); i++)
			{
				this->dataGridViewGeoTiff->Rows->Add();
				this->dataGridViewGeoTiff->Rows[i]->Cells[0]->Value = GeoTiffTagsInFile[i].code;
				this->dataGridViewGeoTiff->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<System::String^>(GeoTiffTagsInFile[i].name);
				this->dataGridViewGeoTiff->Rows[i]->Cells[2]->Value = msclr::interop::marshal_as<System::String^>(GeoTiffTagsInFile[i].type);
				this->dataGridViewGeoTiff->Rows[i]->Cells[3]->Value = msclr::interop::marshal_as<System::String^>(GeoTiffTagsInFile[i].value);
			}
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~GeoTiffForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelKeyDirectoryVersionText;
	private: System::Windows::Forms::Label^ labelKeysRevText;
	private: System::Windows::Forms::Label^ labelNumbKeysText;
	protected:



	private: System::Windows::Forms::DataGridView^ dataGridViewGeoTiff;





	private: System::Windows::Forms::Label^ labelKeyDirectoryVersion;
	private: System::Windows::Forms::Label^ labelKeysRev;
	private: System::Windows::Forms::Label^ labelNumbKeys;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CodeOfKey;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameOfKey;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TypeOfKey;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ValueOfKey;



	protected:

	protected:



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelKeyDirectoryVersionText = (gcnew System::Windows::Forms::Label());
			this->labelKeysRevText = (gcnew System::Windows::Forms::Label());
			this->labelNumbKeysText = (gcnew System::Windows::Forms::Label());
			this->dataGridViewGeoTiff = (gcnew System::Windows::Forms::DataGridView());
			this->CodeOfKey = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameOfKey = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TypeOfKey = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ValueOfKey = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->labelKeyDirectoryVersion = (gcnew System::Windows::Forms::Label());
			this->labelKeysRev = (gcnew System::Windows::Forms::Label());
			this->labelNumbKeys = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewGeoTiff))->BeginInit();
			this->SuspendLayout();
			// 
			// labelKeyDirectoryVersionText
			// 
			this->labelKeyDirectoryVersionText->AutoSize = true;
			this->labelKeyDirectoryVersionText->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->labelKeyDirectoryVersionText->Location = System::Drawing::Point(26, 24);
			this->labelKeyDirectoryVersionText->Name = L"labelKeyDirectoryVersionText";
			this->labelKeyDirectoryVersionText->Size = System::Drawing::Size(128, 17);
			this->labelKeyDirectoryVersionText->TabIndex = 0;
			this->labelKeyDirectoryVersionText->Text = L"Key directory version:";
			this->labelKeyDirectoryVersionText->Click += gcnew System::EventHandler(this, &GeoTiffForm::label1_Click);
			// 
			// labelKeysRevText
			// 
			this->labelKeysRevText->AutoSize = true;
			this->labelKeysRevText->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->labelKeysRevText->Location = System::Drawing::Point(223, 24);
			this->labelKeysRevText->Name = L"labelKeysRevText";
			this->labelKeysRevText->Size = System::Drawing::Size(85, 17);
			this->labelKeysRevText->TabIndex = 0;
			this->labelKeysRevText->Text = L"Keys revision:";
			this->labelKeysRevText->Click += gcnew System::EventHandler(this, &GeoTiffForm::label1_Click);
			// 
			// labelNumbKeysText
			// 
			this->labelNumbKeysText->AutoSize = true;
			this->labelNumbKeysText->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->labelNumbKeysText->Location = System::Drawing::Point(380, 24);
			this->labelNumbKeysText->Name = L"labelNumbKeysText";
			this->labelNumbKeysText->Size = System::Drawing::Size(102, 17);
			this->labelNumbKeysText->TabIndex = 0;
			this->labelNumbKeysText->Text = L"Number of keys:";
			this->labelNumbKeysText->Click += gcnew System::EventHandler(this, &GeoTiffForm::label1_Click);
			// 
			// dataGridViewGeoTiff
			// 
			this->dataGridViewGeoTiff->AllowUserToAddRows = false;
			this->dataGridViewGeoTiff->AllowUserToDeleteRows = false;
			this->dataGridViewGeoTiff->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewGeoTiff->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewGeoTiff->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->CodeOfKey,
					this->NameOfKey, this->TypeOfKey, this->ValueOfKey
			});
			this->dataGridViewGeoTiff->Location = System::Drawing::Point(29, 50);
			this->dataGridViewGeoTiff->Name = L"dataGridViewGeoTiff";
			this->dataGridViewGeoTiff->ReadOnly = true;
			this->dataGridViewGeoTiff->RowHeadersVisible = false;
			this->dataGridViewGeoTiff->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridViewGeoTiff->Size = System::Drawing::Size(499, 239);
			this->dataGridViewGeoTiff->TabIndex = 1;
			// 
			// CodeOfKey
			// 
			this->CodeOfKey->HeaderText = L"Code";
			this->CodeOfKey->Name = L"CodeOfKey";
			this->CodeOfKey->ReadOnly = true;
			this->CodeOfKey->Width = 60;
			// 
			// NameOfKey
			// 
			this->NameOfKey->HeaderText = L"Name";
			this->NameOfKey->Name = L"NameOfKey";
			this->NameOfKey->ReadOnly = true;
			this->NameOfKey->Width = 180;
			// 
			// TypeOfKey
			// 
			this->TypeOfKey->HeaderText = L"Data type";
			this->TypeOfKey->Name = L"TypeOfKey";
			this->TypeOfKey->ReadOnly = true;
			this->TypeOfKey->Width = 90;
			// 
			// ValueOfKey
			// 
			this->ValueOfKey->HeaderText = L"Value";
			this->ValueOfKey->Name = L"ValueOfKey";
			this->ValueOfKey->ReadOnly = true;
			//this->ValueOfKey->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
			// 
			// labelKeyDirectoryVersion
			// 
			this->labelKeyDirectoryVersion->AutoSize = true;
			this->labelKeyDirectoryVersion->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->labelKeyDirectoryVersion->Location = System::Drawing::Point(160, 24);
			this->labelKeyDirectoryVersion->Name = L"labelKeyDirectoryVersion";
			this->labelKeyDirectoryVersion->Size = System::Drawing::Size(46, 17);
			this->labelKeyDirectoryVersion->TabIndex = 2;
			this->labelKeyDirectoryVersion->Text = L"label1";
			this->labelKeyDirectoryVersion->Click += gcnew System::EventHandler(this, &GeoTiffForm::label1_Click);
			// 
			// labelKeysRev
			// 
			this->labelKeysRev->AutoSize = true;
			this->labelKeysRev->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->labelKeysRev->Location = System::Drawing::Point(314, 24);
			this->labelKeysRev->Name = L"labelKeysRev";
			this->labelKeysRev->Size = System::Drawing::Size(46, 17);
			this->labelKeysRev->TabIndex = 2;
			this->labelKeysRev->Text = L"label1";
			// 
			// labelNumbKeys
			// 
			this->labelNumbKeys->AutoSize = true;
			this->labelNumbKeys->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->labelNumbKeys->Location = System::Drawing::Point(488, 24);
			this->labelNumbKeys->Name = L"labelNumbKeys";
			this->labelNumbKeys->Size = System::Drawing::Size(46, 17);
			this->labelNumbKeys->TabIndex = 2;
			this->labelNumbKeys->Text = L"label1";
			// 
			// GeoTiffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 301);
			this->Controls->Add(this->labelNumbKeys);
			this->Controls->Add(this->labelKeysRev);
			this->Controls->Add(this->labelKeyDirectoryVersion);
			this->Controls->Add(this->dataGridViewGeoTiff);
			this->Controls->Add(this->labelNumbKeysText);
			this->Controls->Add(this->labelKeysRevText);
			this->Controls->Add(this->labelKeyDirectoryVersionText);
			this->MinimumSize = System::Drawing::Size(588, 340);
			this->Name = L"GeoTiffForm";
			this->Text = L"GeoTiffForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewGeoTiff))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
