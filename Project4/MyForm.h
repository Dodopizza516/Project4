#pragma once
#include <iostream>
int main() {
	std::cout << "Hello, World!" << std::endl;
	return 0;
}

namespace Project4 {

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
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::TabPage^ tabPage10;
	private: System::Windows::Forms::TabPage^ tabPage11;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Controls->Add(this->tabPage10);
			this->tabControl1->Controls->Add(this->tabPage11);
			this->tabControl1->Location = System::Drawing::Point(67, 64);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(302, 337);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->checkBox4);
			this->tabPage1->Controls->Add(this->checkBox3);
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(294, 311);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Вопрос 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(294, 311);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Вопрос 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(294, 311);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Вопрос 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(294, 311);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Вопрос 4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(294, 311);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Вопрос 5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(294, 311);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Вопрос 6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(294, 311);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Вопрос 7";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// tabPage8
			// 
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(294, 311);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"Вопрос 8";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// tabPage9
			// 
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(294, 311);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"Вопрос 9";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// tabPage10
			// 
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Size = System::Drawing::Size(294, 311);
			this->tabPage10->TabIndex = 9;
			this->tabPage10->Text = L"Вопрос 10";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// tabPage11
			// 
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Size = System::Drawing::Size(294, 311);
			this->tabPage11->TabIndex = 10;
			this->tabPage11->Text = L"Результат";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label1->Location = System::Drawing::Point(25, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Какого цвета трава\?";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(28, 60);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(28, 92);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(80, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(28, 124);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(80, 17);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(28, 160);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(80, 17);
			this->checkBox4->TabIndex = 4;
			this->checkBox4->Text = L"checkBox4";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 474);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
