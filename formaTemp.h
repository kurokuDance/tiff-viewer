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
	/// Сводка для MyForm1
	/// </summary>
	public ref class TempForm : public System::Windows::Forms::Form
	{
	public:
		TempForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TempForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorAddNewItem;
	private: System::Windows::Forms::ToolStripLabel^ bindingNavigatorCountItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorDeleteItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveFirstItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMovePreviousItem;
	private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator;
	private: System::Windows::Forms::ToolStripTextBox^ bindingNavigatorPositionItem;
	private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator1;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveNextItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveLastItem;
	private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator2;
	private: System::Windows::Forms::Label^ labelPage;
	private: System::Windows::Forms::Button^ buttonPrevPage;
	private: System::Windows::Forms::Button^ buttonNextPage;






	private: System::Windows::Forms::Label^ labelPath;
	private: System::Windows::Forms::Button^ buttonViewCell;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnTag;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnNameOfTag;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnDataType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnCount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnValue;
	private: System::Windows::Forms::Button^ GeoTiffDataButton;
	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dataGridViewGeoTiff;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CodeOfKey;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameOfKey;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TypeOfKey;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ValueOfKey;
	private: System::Windows::Forms::Label^ labelNumbKeys;
	private: System::Windows::Forms::Label^ labelKeysRev;
	private: System::Windows::Forms::Label^ labelKeyDirectoryVersion;
	private: System::Windows::Forms::Label^ labelKeyDirectoryVersionText;
	private: System::Windows::Forms::Label^ labelNumbKeysText;
	private: System::Windows::Forms::Label^ labelKeysRevText;
	private: System::Windows::Forms::Label^ lRigthTextLabel;
	private: System::Windows::Forms::Label^ lLefttextLabel;
	private: System::Windows::Forms::Label^ uRightTextLabel;
	private: System::Windows::Forms::Label^ centerTextLabel;
	private: System::Windows::Forms::Label^ uLeftTextLabel;
	private: System::Windows::Forms::Label^ lRightLabel;

	private: System::Windows::Forms::Label^ lLeftLabel;
	private: System::Windows::Forms::Label^ centerLabel;
	private: System::Windows::Forms::Label^ uRightLabel;



	private: System::Windows::Forms::Label^ uLeftLabel;






















		   System::String^ filePath;

	public:
		std::string getFilePath()
		{
			System::String^ file = filePath;
			return msclr::interop::marshal_as<std::string>(file);
		}
	private: System::ComponentModel::IContainer^ components;
	public:

	protected:

	private:
		int curPage, numPages;
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnTag = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnNameOfTag = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnDataType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnCount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnValue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bindingNavigatorMoveFirstItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMovePreviousItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->bindingNavigatorCountItem = (gcnew System::Windows::Forms::ToolStripLabel());
			this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorMoveNextItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveLastItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorAddNewItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorDeleteItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->labelPage = (gcnew System::Windows::Forms::Label());
			this->buttonPrevPage = (gcnew System::Windows::Forms::Button());
			this->buttonNextPage = (gcnew System::Windows::Forms::Button());
			this->labelPath = (gcnew System::Windows::Forms::Label());
			this->buttonViewCell = (gcnew System::Windows::Forms::Button());
			this->GeoTiffDataButton = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->lRightLabel = (gcnew System::Windows::Forms::Label());
			this->lLeftLabel = (gcnew System::Windows::Forms::Label());
			this->centerLabel = (gcnew System::Windows::Forms::Label());
			this->uRightLabel = (gcnew System::Windows::Forms::Label());
			this->uLeftLabel = (gcnew System::Windows::Forms::Label());
			this->lRigthTextLabel = (gcnew System::Windows::Forms::Label());
			this->lLefttextLabel = (gcnew System::Windows::Forms::Label());
			this->uRightTextLabel = (gcnew System::Windows::Forms::Label());
			this->centerTextLabel = (gcnew System::Windows::Forms::Label());
			this->uLeftTextLabel = (gcnew System::Windows::Forms::Label());
			this->labelNumbKeys = (gcnew System::Windows::Forms::Label());
			this->dataGridViewGeoTiff = (gcnew System::Windows::Forms::DataGridView());
			this->CodeOfKey = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameOfKey = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TypeOfKey = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ValueOfKey = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->labelKeysRev = (gcnew System::Windows::Forms::Label());
			this->labelKeyDirectoryVersion = (gcnew System::Windows::Forms::Label());
			this->labelKeyDirectoryVersionText = (gcnew System::Windows::Forms::Label());
			this->labelNumbKeysText = (gcnew System::Windows::Forms::Label());
			this->labelKeysRevText = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewGeoTiff))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(659, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Открыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TempForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ColumnTag,
					this->ColumnNameOfTag, this->ColumnDataType, this->ColumnCount, this->ColumnValue
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 18;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(760, 347);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TempForm::dataGridView1_CellContentClick);
			// 
			// ColumnTag
			// 
			this->ColumnTag->HeaderText = L"Тег";
			this->ColumnTag->Name = L"ColumnTag";
			this->ColumnTag->ReadOnly = true;
			this->ColumnTag->Width = 70;
			// 
			// ColumnNameOfTag
			// 
			this->ColumnNameOfTag->HeaderText = L"Название";
			this->ColumnNameOfTag->Name = L"ColumnNameOfTag";
			this->ColumnNameOfTag->ReadOnly = true;
			this->ColumnNameOfTag->Width = 150;
			// 
			// ColumnDataType
			// 
			this->ColumnDataType->HeaderText = L"Тип данных";
			this->ColumnDataType->Name = L"ColumnDataType";
			this->ColumnDataType->ReadOnly = true;
			// 
			// ColumnCount
			// 
			this->ColumnCount->HeaderText = L"Количество";
			this->ColumnCount->Name = L"ColumnCount";
			this->ColumnCount->ReadOnly = true;
			// 
			// ColumnValue
			// 
			this->ColumnValue->HeaderText = L"Значение";
			this->ColumnValue->MaxInputLength = 999999999;
			this->ColumnValue->Name = L"ColumnValue";
			this->ColumnValue->ReadOnly = true;
			this->ColumnValue->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
			// 
			// bindingNavigatorMoveFirstItem
			// 
			this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
			this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(23, 23);
			// 
			// bindingNavigatorMovePreviousItem
			// 
			this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
			this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(23, 23);
			// 
			// bindingNavigatorSeparator
			// 
			this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
			this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 6);
			// 
			// bindingNavigatorPositionItem
			// 
			this->bindingNavigatorPositionItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
			this->bindingNavigatorPositionItem->Size = System::Drawing::Size(100, 23);
			// 
			// bindingNavigatorCountItem
			// 
			this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
			this->bindingNavigatorCountItem->Size = System::Drawing::Size(23, 23);
			// 
			// bindingNavigatorSeparator1
			// 
			this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator1";
			this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 6);
			// 
			// bindingNavigatorMoveNextItem
			// 
			this->bindingNavigatorMoveNextItem->Name = L"bindingNavigatorMoveNextItem";
			this->bindingNavigatorMoveNextItem->Size = System::Drawing::Size(23, 23);
			// 
			// bindingNavigatorMoveLastItem
			// 
			this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
			this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(23, 23);
			// 
			// bindingNavigatorSeparator2
			// 
			this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator2";
			this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 6);
			// 
			// bindingNavigatorAddNewItem
			// 
			this->bindingNavigatorAddNewItem->Name = L"bindingNavigatorAddNewItem";
			this->bindingNavigatorAddNewItem->Size = System::Drawing::Size(23, 23);
			// 
			// bindingNavigatorDeleteItem
			// 
			this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
			this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(23, 23);
			// 
			// labelPage
			// 
			this->labelPage->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelPage->AutoSize = true;
			this->labelPage->Location = System::Drawing::Point(12, 483);
			this->labelPage->Name = L"labelPage";
			this->labelPage->Size = System::Drawing::Size(54, 13);
			this->labelPage->TabIndex = 2;
			this->labelPage->Text = L"страница";
			// 
			// buttonPrevPage
			// 
			this->buttonPrevPage->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonPrevPage->Location = System::Drawing::Point(161, 478);
			this->buttonPrevPage->Name = L"buttonPrevPage";
			this->buttonPrevPage->Size = System::Drawing::Size(29, 23);
			this->buttonPrevPage->TabIndex = 3;
			this->buttonPrevPage->Text = L"<-";
			this->buttonPrevPage->UseVisualStyleBackColor = true;
			this->buttonPrevPage->Click += gcnew System::EventHandler(this, &TempForm::buttonPrevPage_Click);
			// 
			// buttonNextPage
			// 
			this->buttonNextPage->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonNextPage->Location = System::Drawing::Point(196, 478);
			this->buttonNextPage->Name = L"buttonNextPage";
			this->buttonNextPage->Size = System::Drawing::Size(29, 23);
			this->buttonNextPage->TabIndex = 4;
			this->buttonNextPage->Text = L"->";
			this->buttonNextPage->UseVisualStyleBackColor = true;
			this->buttonNextPage->Click += gcnew System::EventHandler(this, &TempForm::buttonNextPage_Click);
			// 
			// labelPath
			// 
			this->labelPath->AutoSize = true;
			this->labelPath->Font = (gcnew System::Drawing::Font(L"Linux Libertine Display G", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPath->Location = System::Drawing::Point(34, 30);
			this->labelPath->MaximumSize = System::Drawing::Size(600, 0);
			this->labelPath->Name = L"labelPath";
			this->labelPath->Size = System::Drawing::Size(0, 18);
			this->labelPath->TabIndex = 6;
			// 
			// buttonViewCell
			// 
			this->buttonViewCell->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonViewCell->Location = System::Drawing::Point(659, 477);
			this->buttonViewCell->Name = L"buttonViewCell";
			this->buttonViewCell->Size = System::Drawing::Size(101, 40);
			this->buttonViewCell->TabIndex = 5;
			this->buttonViewCell->Text = L"Посмотреть содержимое";
			this->buttonViewCell->UseVisualStyleBackColor = true;
			this->buttonViewCell->Click += gcnew System::EventHandler(this, &TempForm::buttonViewCell_Click);
			// 
			// GeoTiffDataButton
			// 
			this->GeoTiffDataButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->GeoTiffDataButton->Location = System::Drawing::Point(541, 477);
			this->GeoTiffDataButton->Name = L"GeoTiffDataButton";
			this->GeoTiffDataButton->Size = System::Drawing::Size(101, 40);
			this->GeoTiffDataButton->TabIndex = 5;
			this->GeoTiffDataButton->Text = L"Географические данные";
			this->GeoTiffDataButton->UseVisualStyleBackColor = true;
			this->GeoTiffDataButton->Visible = false;
			this->GeoTiffDataButton->Click += gcnew System::EventHandler(this, &TempForm::GeoTiffDataButton_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(15, 72);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(768, 373);
			this->tabControl1->TabIndex = 7;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(760, 347);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Tiff данные";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &TempForm::tabPage2_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->lRightLabel);
			this->tabPage1->Controls->Add(this->lLeftLabel);
			this->tabPage1->Controls->Add(this->centerLabel);
			this->tabPage1->Controls->Add(this->uRightLabel);
			this->tabPage1->Controls->Add(this->uLeftLabel);
			this->tabPage1->Controls->Add(this->lRigthTextLabel);
			this->tabPage1->Controls->Add(this->lLefttextLabel);
			this->tabPage1->Controls->Add(this->uRightTextLabel);
			this->tabPage1->Controls->Add(this->centerTextLabel);
			this->tabPage1->Controls->Add(this->uLeftTextLabel);
			this->tabPage1->Controls->Add(this->labelNumbKeys);
			this->tabPage1->Controls->Add(this->dataGridViewGeoTiff);
			this->tabPage1->Controls->Add(this->labelKeysRev);
			this->tabPage1->Controls->Add(this->labelKeyDirectoryVersion);
			this->tabPage1->Controls->Add(this->labelKeyDirectoryVersionText);
			this->tabPage1->Controls->Add(this->labelNumbKeysText);
			this->tabPage1->Controls->Add(this->labelKeysRevText);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(760, 347);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Geo данные";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Visible = false;
			// 
			// lRightLabel
			// 
			this->lRightLabel->AutoSize = true;
			this->lRightLabel->Location = System::Drawing::Point(75, 104);
			this->lRightLabel->Name = L"lRightLabel";
			this->lRightLabel->Size = System::Drawing::Size(35, 13);
			this->lRightLabel->TabIndex = 15;
			this->lRightLabel->Text = L"label1";
			// 
			// lLeftLabel
			// 
			this->lLeftLabel->AutoSize = true;
			this->lLeftLabel->Location = System::Drawing::Point(69, 60);
			this->lLeftLabel->Name = L"lLeftLabel";
			this->lLeftLabel->Size = System::Drawing::Size(35, 13);
			this->lLeftLabel->TabIndex = 15;
			this->lLeftLabel->Text = L"label1";
			this->lLeftLabel->Click += gcnew System::EventHandler(this, &TempForm::label2_Click);
			// 
			// centerLabel
			// 
			this->centerLabel->AutoSize = true;
			this->centerLabel->Location = System::Drawing::Point(54, 125);
			this->centerLabel->Name = L"centerLabel";
			this->centerLabel->Size = System::Drawing::Size(35, 13);
			this->centerLabel->TabIndex = 15;
			this->centerLabel->Text = L"label1";
			// 
			// uRightLabel
			// 
			this->uRightLabel->AutoSize = true;
			this->uRightLabel->Location = System::Drawing::Point(75, 82);
			this->uRightLabel->Name = L"uRightLabel";
			this->uRightLabel->Size = System::Drawing::Size(35, 13);
			this->uRightLabel->TabIndex = 15;
			this->uRightLabel->Text = L"label1";
			// 
			// uLeftLabel
			// 
			this->uLeftLabel->AutoSize = true;
			this->uLeftLabel->Location = System::Drawing::Point(69, 38);
			this->uLeftLabel->Name = L"uLeftLabel";
			this->uLeftLabel->Size = System::Drawing::Size(35, 13);
			this->uLeftLabel->TabIndex = 15;
			this->uLeftLabel->Text = L"label1";
			this->uLeftLabel->Click += gcnew System::EventHandler(this, &TempForm::label1_Click);
			// 
			// lRigthTextLabel
			// 
			this->lRigthTextLabel->AutoSize = true;
			this->lRigthTextLabel->Location = System::Drawing::Point(10, 104);
			this->lRigthTextLabel->Name = L"lRigthTextLabel";
			this->lRigthTextLabel->Size = System::Drawing::Size(59, 13);
			this->lRigthTextLabel->TabIndex = 14;
			this->lRigthTextLabel->Text = L"Lower right";
			this->lRigthTextLabel->Click += gcnew System::EventHandler(this, &TempForm::lRigthTextLabel_Click);
			// 
			// lLefttextLabel
			// 
			this->lLefttextLabel->AutoSize = true;
			this->lLefttextLabel->Location = System::Drawing::Point(10, 60);
			this->lLefttextLabel->Name = L"lLefttextLabel";
			this->lLefttextLabel->Size = System::Drawing::Size(53, 13);
			this->lLefttextLabel->TabIndex = 14;
			this->lLefttextLabel->Text = L"Lower left";
			// 
			// uRightTextLabel
			// 
			this->uRightTextLabel->AutoSize = true;
			this->uRightTextLabel->Location = System::Drawing::Point(10, 82);
			this->uRightTextLabel->Name = L"uRightTextLabel";
			this->uRightTextLabel->Size = System::Drawing::Size(59, 13);
			this->uRightTextLabel->TabIndex = 14;
			this->uRightTextLabel->Text = L"Upper right";
			this->uRightTextLabel->Click += gcnew System::EventHandler(this, &TempForm::uRightTextLabel_Click);
			// 
			// centerTextLabel
			// 
			this->centerTextLabel->AutoSize = true;
			this->centerTextLabel->Location = System::Drawing::Point(10, 125);
			this->centerTextLabel->Name = L"centerTextLabel";
			this->centerTextLabel->Size = System::Drawing::Size(38, 13);
			this->centerTextLabel->TabIndex = 14;
			this->centerTextLabel->Text = L"Center";
			// 
			// uLeftTextLabel
			// 
			this->uLeftTextLabel->AutoSize = true;
			this->uLeftTextLabel->Location = System::Drawing::Point(10, 38);
			this->uLeftTextLabel->Name = L"uLeftTextLabel";
			this->uLeftTextLabel->Size = System::Drawing::Size(53, 13);
			this->uLeftTextLabel->TabIndex = 14;
			this->uLeftTextLabel->Text = L"Upper left";
			// 
			// labelNumbKeys
			// 
			this->labelNumbKeys->AutoSize = true;
			this->labelNumbKeys->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->labelNumbKeys->Location = System::Drawing::Point(472, 12);
			this->labelNumbKeys->Name = L"labelNumbKeys";
			this->labelNumbKeys->Size = System::Drawing::Size(46, 17);
			this->labelNumbKeys->TabIndex = 11;
			this->labelNumbKeys->Text = L"label1";
			// 
			// dataGridViewGeoTiff
			// 
			this->dataGridViewGeoTiff->AllowUserToAddRows = false;
			this->dataGridViewGeoTiff->AllowUserToDeleteRows = false;
			this->dataGridViewGeoTiff->AllowUserToResizeColumns = false;
			this->dataGridViewGeoTiff->AllowUserToResizeRows = false;
			this->dataGridViewGeoTiff->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewGeoTiff->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridViewGeoTiff->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->CodeOfKey,
					this->NameOfKey, this->TypeOfKey, this->ValueOfKey
			});
			this->dataGridViewGeoTiff->Location = System::Drawing::Point(0, 145);
			this->dataGridViewGeoTiff->Name = L"dataGridViewGeoTiff";
			this->dataGridViewGeoTiff->ReadOnly = true;
			this->dataGridViewGeoTiff->RowHeadersVisible = false;
			this->dataGridViewGeoTiff->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridViewGeoTiff->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewGeoTiff->Size = System::Drawing::Size(760, 202);
			this->dataGridViewGeoTiff->TabIndex = 2;
			// 
			// CodeOfKey
			// 
			this->CodeOfKey->HeaderText = L"Code";
			this->CodeOfKey->Name = L"CodeOfKey";
			this->CodeOfKey->ReadOnly = true;
			this->CodeOfKey->Width = 80;
			// 
			// NameOfKey
			// 
			this->NameOfKey->HeaderText = L"Name";
			this->NameOfKey->Name = L"NameOfKey";
			this->NameOfKey->ReadOnly = true;
			this->NameOfKey->Width = 200;
			// 
			// TypeOfKey
			// 
			this->TypeOfKey->HeaderText = L"Data type";
			this->TypeOfKey->Name = L"TypeOfKey";
			this->TypeOfKey->ReadOnly = true;
			this->TypeOfKey->Width = 120;
			// 
			// ValueOfKey
			// 
			this->ValueOfKey->HeaderText = L"Value";
			this->ValueOfKey->Name = L"ValueOfKey";
			this->ValueOfKey->ReadOnly = true;
			this->ValueOfKey->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
			// 
			// labelKeysRev
			// 
			this->labelKeysRev->AutoSize = true;
			this->labelKeysRev->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->labelKeysRev->Location = System::Drawing::Point(298, 12);
			this->labelKeysRev->Name = L"labelKeysRev";
			this->labelKeysRev->Size = System::Drawing::Size(46, 17);
			this->labelKeysRev->TabIndex = 12;
			this->labelKeysRev->Text = L"label1";
			// 
			// labelKeyDirectoryVersion
			// 
			this->labelKeyDirectoryVersion->AutoSize = true;
			this->labelKeyDirectoryVersion->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->labelKeyDirectoryVersion->Location = System::Drawing::Point(144, 12);
			this->labelKeyDirectoryVersion->Name = L"labelKeyDirectoryVersion";
			this->labelKeyDirectoryVersion->Size = System::Drawing::Size(46, 17);
			this->labelKeyDirectoryVersion->TabIndex = 13;
			this->labelKeyDirectoryVersion->Text = L"label1";
			// 
			// labelKeyDirectoryVersionText
			// 
			this->labelKeyDirectoryVersionText->AutoSize = true;
			this->labelKeyDirectoryVersionText->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->labelKeyDirectoryVersionText->Location = System::Drawing::Point(10, 12);
			this->labelKeyDirectoryVersionText->Name = L"labelKeyDirectoryVersionText";
			this->labelKeyDirectoryVersionText->Size = System::Drawing::Size(128, 17);
			this->labelKeyDirectoryVersionText->TabIndex = 10;
			this->labelKeyDirectoryVersionText->Text = L"Key directory version:";
			// 
			// labelNumbKeysText
			// 
			this->labelNumbKeysText->AutoSize = true;
			this->labelNumbKeysText->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->labelNumbKeysText->Location = System::Drawing::Point(364, 12);
			this->labelNumbKeysText->Name = L"labelNumbKeysText";
			this->labelNumbKeysText->Size = System::Drawing::Size(102, 17);
			this->labelNumbKeysText->TabIndex = 8;
			this->labelNumbKeysText->Text = L"Number of keys:";
			// 
			// labelKeysRevText
			// 
			this->labelKeysRevText->AutoSize = true;
			this->labelKeysRevText->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->labelKeysRevText->Location = System::Drawing::Point(207, 12);
			this->labelKeysRevText->Name = L"labelKeysRevText";
			this->labelKeysRevText->Size = System::Drawing::Size(85, 17);
			this->labelKeysRevText->TabIndex = 9;
			this->labelKeysRevText->Text = L"Keys revision:";
			// 
			// TempForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(785, 541);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->labelPath);
			this->Controls->Add(this->GeoTiffDataButton);
			this->Controls->Add(this->buttonViewCell);
			this->Controls->Add(this->buttonNextPage);
			this->Controls->Add(this->buttonPrevPage);
			this->Controls->Add(this->labelPage);
			this->Controls->Add(this->button1);
			this->MinimumSize = System::Drawing::Size(801, 548);
			this->Name = L"TempForm";
			this->Text = L"TiffTagViewer";
			this->Resize += gcnew System::EventHandler(this, &TempForm::TempForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewGeoTiff))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Title = "Select a tiff File";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->dataGridViewGeoTiff->Rows->Clear();
			tiffTagsInFile.clear();
			GeoTiffTagsInFile.clear();
			memset(&GeoTiffHeaderInFile, 0, sizeof(GeoTiffHeaderInFile));
			filePath = openFileDialog1->FileName->ToString();
			string name = this->getFilePath();
			TiffTagsVieawer tif(name.data());
			tif.fillTagVecFromFile();
			curPage = 1;
			numPages = tiffTagsInFile.size();
			this->labelPage->Text = "страница " + curPage + " из " + numPages;
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < tiffTagsInFile[0].size(); i++)
			{
				this->dataGridView1->Rows->Add();
				this->dataGridView1->Rows[i]->Cells[0]->Value = tiffTagsInFile[0][i].code;
				this->dataGridView1->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<System::String^>(tiffTagsInFile[0][i].name);
				this->dataGridView1->Rows[i]->Cells[2]->Value = msclr::interop::marshal_as<System::String^>(tiffTagsInFile[0][i].type);
				this->dataGridView1->Rows[i]->Cells[3]->Value = tiffTagsInFile[0][i].count;
				this->dataGridView1->Rows[i]->Cells[4]->Value = msclr::interop::marshal_as<System::String^>(tiffTagsInFile[0][i].values);
			}
			this->labelPath->Text = filePath;
			if (tif.isGeoTiff)
			{
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
				
				this->uLeftLabel->Text = msclr::interop::marshal_as<System::String^>
					(getStringGeoCoordinates(geoCornerCoordinatesInFile.upperLeft));
				this->lLeftLabel->Text = msclr::interop::marshal_as<System::String^>
					(getStringGeoCoordinates(geoCornerCoordinatesInFile.lowerLeft));
				this->uRightLabel->Text = msclr::interop::marshal_as<System::String^>
					(getStringGeoCoordinates(geoCornerCoordinatesInFile.upperRight));
				this->lRightLabel->Text = msclr::interop::marshal_as<System::String^>
					(getStringGeoCoordinates(geoCornerCoordinatesInFile.lowerRight));
				tabPage1->Parent = tabControl1;
				this->centerLabel->Text = msclr::interop::marshal_as<System::String^>
					(getStringGeoCoordinates(geoCornerCoordinatesInFile.center));

				tabPage1->Parent = tabControl1;
			}	
			else
				tabPage1->Parent = nullptr;
		}	
	}
private: System::Void buttonNextPage_Click(System::Object^ sender, System::EventArgs^ e) {
	if (curPage < numPages)
	{
		this->labelPage->Text = "страница " + (curPage + 1) + " из " + tiffTagsInFile.size();
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < tiffTagsInFile[curPage].size(); i++)
		{
			this->dataGridView1->Rows->Add();
			this->dataGridView1->Rows[i]->Cells[0]->Value = tiffTagsInFile[curPage][i].code;
			this->dataGridView1->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<System::String^>(tiffTagsInFile[curPage][i].name);
			this->dataGridView1->Rows[i]->Cells[2]->Value = msclr::interop::marshal_as<System::String^>(tiffTagsInFile[curPage][i].type);
			this->dataGridView1->Rows[i]->Cells[3]->Value = tiffTagsInFile[curPage][i].count;
			this->dataGridView1->Rows[i]->Cells[4]->Value = msclr::interop::marshal_as<System::String^>(tiffTagsInFile[curPage][i].values);
		}
		curPage++;
	}
}
private: System::Void buttonPrevPage_Click(System::Object^ sender, System::EventArgs^ e) {
	if (curPage > 1)
	{
		curPage--;
		this->labelPage->Text = "страница " + curPage + " из " + tiffTagsInFile.size();
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < tiffTagsInFile[curPage-1].size(); i++)
		{
			this->dataGridView1->Rows->Add();
			this->dataGridView1->Rows[i]->Cells[0]->Value = tiffTagsInFile[curPage - 1][i].code;
			this->dataGridView1->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<System::String^>(tiffTagsInFile[curPage - 1][i].name);
			this->dataGridView1->Rows[i]->Cells[2]->Value = msclr::interop::marshal_as<System::String^>(tiffTagsInFile[curPage - 1][i].type);
			this->dataGridView1->Rows[i]->Cells[3]->Value = tiffTagsInFile[curPage - 1][i].count;
			this->dataGridView1->Rows[i]->Cells[4]->Value = msclr::interop::marshal_as<System::String^>(tiffTagsInFile[curPage - 1][i].values);
		}
	}
}

	private: int getMaxLengthValue(string values)
	{
		int k = 0;
		int kmax = 0;
		for (int i = 0; i < values.size(); i++)
			if (values[i] != ' ')
			{
				k++;
				if (k > kmax)
					kmax = k;
			}
			else
				k = 0;

		return kmax;
	}

	private: string getStructValues(string values)
	{
		int maxLen = getMaxLengthValue(values);
		int len;
		for (int i = 0; i < values.size(); i++)
		{
			len = 0;
			if (values[i] != ' ')
			{
				while (values[i] != ' ' || i >= values.size())
				{
					i++;
					len++;
				}
				if (len < maxLen)
					for (int k = 0; k < (maxLen - len) * 2; k++)
						values.insert(i - len, " ");
				i += (maxLen - len) * 2;
			}
		}
		return values;
	}
private: System::Void buttonViewCell_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->tabControl1->SelectedTab == tabPage2)//tiffdata
	{
		if (this->dataGridView1->SelectedCells->Count == 5)
		{
			String^ val = this->dataGridView1->SelectedCells[4]->Value->ToString();
			String^ st = this->dataGridView1->SelectedCells[3]->Value->ToString();
			String^ one = "1";
			if (st != "1"
				&& this->dataGridView1->SelectedCells[2]->Value->ToString() != "ASCII")
			{
				string str = msclr::interop::marshal_as<std::string>(val);
				val = msclr::interop::marshal_as<String^>(getStructValues(str));
			}
			MyForm^ myForm = gcnew MyForm();
			myForm->setTextBoxValue(val);
			myForm->Show();
		}
	}
	else if (this->tabControl1->SelectedTab == tabPage1)
	{
		if (this->dataGridViewGeoTiff->SelectedCells->Count == 4)
		{
			String^ val = this->dataGridViewGeoTiff->SelectedCells[3]->Value->ToString();
			/*if (this->dataGridViewGeoTiff->SelectedCells[2]->Value->ToString() != "Ascii")
			{
				string str = msclr::interop::marshal_as<std::string>(val);
				val = msclr::interop::marshal_as<String^>(getStructValues(str));
			}*/
			MyForm^ myForm = gcnew MyForm();
			myForm->setTextBoxValue(val);
			myForm->Show();
		}
	}
}
private: System::Void TempForm_Resize(System::Object^ sender, System::EventArgs^ e) {
	//70 150 100 100 max
	dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	dataGridView1->Columns[0]->Width = 70;
	dataGridView1->Columns[1]->Width = 150;
	dataGridView1->Columns[2]->Width = 100;
	dataGridView1->Columns[3]->Width = 100;
	dataGridView1->Columns[4]->Width = dataGridView1->ClientSize.Width 
		- dataGridView1->Columns[0]->Width
		- dataGridView1->Columns[1]->Width 
		- dataGridView1->Columns[2]->Width 
		- dataGridView1->Columns[3]->Width;
}
private: System::Void GeoTiffDataButton_Click(System::Object^ sender, System::EventArgs^ e) {
	GeoTiffForm^ geoForm = gcnew GeoTiffForm();
	geoForm->Show();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lRigthTextLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void uRightTextLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
