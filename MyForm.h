#pragma once
#include "Header.h"

namespace tiffviewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
		{
			InitializeComponent();
			//TIFFTAG<int> width{ 245, "width", "int", 1, {1} };
			//int a4 = width.code;
			/*InitializeComponent();
			TIFF* tif = TIFFOpen("C:\\Users\\Pavel\\Desktop\\bmp_workBLT_and1CH\\img\\brain_492.tif","r");
			int w_1, w_2, w_3;
			if (TIFFGetField(tif, 286, &w_1))
				w_1 = 123;
			TIFFGetField(tif, TIFFTAG_IMAGEWIDTH, &w_2);
			TIFFGetField(tif, IMAGEWIDTH, &w_3);
			int a = 1;*/

		}
		
		void setTextBoxValue(String^ str)
		{
			this->richTextBox1->Text = str;
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(12, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(212, 193);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(244, 219);
			this->Controls->Add(this->richTextBox1);
			this->Location = System::Drawing::Point(1000, 1000);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowInTaskbar = false;
			this->Text = L"Значения";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// Создайте объект диалогового окна "Открыть файл"
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

		// Настройте параметры диалогового окна
		openFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";
		openFileDialog1->Title = "Select a Text File";

		// Показать диалоговое окно и проверить, был ли выбран файл
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Получить путь к выбранному файлу и вывести его в консоль
			auto filePath = openFileDialog1->FileName->ToString();
		}

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

};

}
