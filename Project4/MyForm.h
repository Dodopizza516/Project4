#pragma once
#include <iostream>
int CheckCurrentAnswers(int currentQuestionIndex);
int main() {
	std::cout << "Hello, World!" << std::endl;
	return 0;
	array<int>^ correctAnswers = { 0, 1, 2, 3, 1, 0, /* ... */ }; // индексы правильных вариантов для каждого вопроса
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
	private: System::Void buttonNext_Click(System::Object^ sender, System::EventArgs^ e) {
		int currentIndex = tabControl1->SelectedIndex;
		// Проверка ответов текущего вопроса
		int score = CheckCurrentAnswers(currentIndex);
		// Переключение на следующую вкладку, если не последняя
		if (currentIndex < tabControl1->TabCount - 1) {
			tabControl1->SelectedIndex = currentIndex + 1;
		}
	}
	private:
		array<int>^ correctAnswers = { 0, 2, 1, 3, 0, /* ... */ }; // индексы правильных вариантов для каждого вопроса

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::TabPage^ tabPage2;

	protected:


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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TabPage^ tabPage12;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox16;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox20;
	private: System::Windows::Forms::CheckBox^ checkBox19;
	private: System::Windows::Forms::CheckBox^ checkBox18;
	private: System::Windows::Forms::CheckBox^ checkBox17;
	private: System::Windows::Forms::CheckBox^ checkBox24;
	private: System::Windows::Forms::CheckBox^ checkBox23;
	private: System::Windows::Forms::CheckBox^ checkBox22;
	private: System::Windows::Forms::CheckBox^ checkBox21;
	private: System::Windows::Forms::CheckBox^ checkBox28;
	private: System::Windows::Forms::CheckBox^ checkBox27;


	private: System::Windows::Forms::CheckBox^ checkBox32;
	private: System::Windows::Forms::CheckBox^ checkBox31;
	private: System::Windows::Forms::CheckBox^ checkBox30;
	private: System::Windows::Forms::CheckBox^ checkBox29;
	private: System::Windows::Forms::CheckBox^ checkBox36;
	private: System::Windows::Forms::CheckBox^ checkBox35;
	private: System::Windows::Forms::CheckBox^ checkBox34;
	private: System::Windows::Forms::CheckBox^ checkBox33;
	private: System::Windows::Forms::CheckBox^ checkBox40;
	private: System::Windows::Forms::CheckBox^ checkBox39;
	private: System::Windows::Forms::CheckBox^ checkBox38;
	private: System::Windows::Forms::CheckBox^ checkBox37;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Label^ label12;

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
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->checkBox36 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox35 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox34 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox33 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->checkBox40 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox39 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox38 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox37 = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage12);
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
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tabControl1->Location = System::Drawing::Point(67, 64);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(302, 337);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->button1);
			this->tabPage12->Controls->Add(this->label11);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Size = System::Drawing::Size(294, 311);
			this->tabPage12->TabIndex = 11;
			this->tabPage12->Text = L"Тест по смешарикам";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Chartreuse;
			this->button1->Location = System::Drawing::Point(84, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Начать тест";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(29, 115);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(239, 32);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Пройди тест и узнай на сколько ты \r\nзнаешь мультфильм смешарики";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(182, 282);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Назад";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(238, 282);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Вперед";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(28, 223);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(38, 17);
			this->checkBox4->TabIndex = 4;
			this->checkBox4->Text = L"12";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(28, 181);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(32, 17);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"7";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(28, 141);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(32, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"9";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(28, 99);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(32, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"5";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Сколько смешариков было в первом сезоне\?";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->checkBox8);
			this->tabPage2->Controls->Add(this->checkBox7);
			this->tabPage2->Controls->Add(this->checkBox6);
			this->tabPage2->Controls->Add(this->checkBox5);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(294, 311);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Вопрос 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(182, 282);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Назад";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(238, 282);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Вперед";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(28, 223);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(53, 17);
			this->checkBox8->TabIndex = 4;
			this->checkBox8->Text = L"Крош";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(28, 181);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(68, 17);
			this->checkBox7->TabIndex = 3;
			this->checkBox7->Text = L"Совунья";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(28, 141);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(80, 17);
			this->checkBox6->TabIndex = 2;
			this->checkBox6->Text = L"Кар-Карыч";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(28, 99);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(59, 17);
			this->checkBox5->TabIndex = 1;
			this->checkBox5->Text = L"Бараш";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(6, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(254, 30);
			this->label2->TabIndex = 0;
			this->label2->Tag = L"";
			this->label2->Text = L"Известно что  Сергей Мардарь озвучивал \r\nдвух персонажей, вопрос каких\?";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->checkBox12);
			this->tabPage3->Controls->Add(this->checkBox11);
			this->tabPage3->Controls->Add(this->checkBox10);
			this->tabPage3->Controls->Add(this->checkBox9);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(294, 311);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Вопрос 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(185, 285);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Назад";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(241, 285);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Вперед";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(28, 99);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(32, 17);
			this->checkBox12->TabIndex = 4;
			this->checkBox12->Text = L"5";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(28, 141);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(32, 17);
			this->checkBox11->TabIndex = 3;
			this->checkBox11->Text = L"3";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(28, 181);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(32, 17);
			this->checkBox10->TabIndex = 2;
			this->checkBox10->Text = L"6";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(28, 223);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(32, 17);
			this->checkBox9->TabIndex = 1;
			this->checkBox9->Text = L"2";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label3->Location = System::Drawing::Point(3, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(267, 30);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Сколько смешариков носят головные уборы \r\nна постоянной основе\?";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button9);
			this->tabPage4->Controls->Add(this->button8);
			this->tabPage4->Controls->Add(this->checkBox16);
			this->tabPage4->Controls->Add(this->checkBox15);
			this->tabPage4->Controls->Add(this->checkBox14);
			this->tabPage4->Controls->Add(this->checkBox13);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(294, 311);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Вопрос 4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(185, 285);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 23);
			this->button9->TabIndex = 6;
			this->button9->Text = L"Назад";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(241, 285);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 23);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Вперед";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Location = System::Drawing::Point(28, 99);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(72, 17);
			this->checkBox16->TabIndex = 4;
			this->checkBox16->Text = L"Фантики";
			this->checkBox16->UseVisualStyleBackColor = true;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(28, 141);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(71, 17);
			this->checkBox15->TabIndex = 3;
			this->checkBox15->Text = L"Морковь";
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(28, 181);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(59, 17);
			this->checkBox14->TabIndex = 2;
			this->checkBox14->Text = L"Марки";
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(28, 223);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(69, 17);
			this->checkBox13->TabIndex = 1;
			this->checkBox13->Text = L"Кактусы";
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 15);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Что коллекционировал Ежик\?";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button11);
			this->tabPage5->Controls->Add(this->button10);
			this->tabPage5->Controls->Add(this->checkBox20);
			this->tabPage5->Controls->Add(this->checkBox19);
			this->tabPage5->Controls->Add(this->checkBox18);
			this->tabPage5->Controls->Add(this->checkBox17);
			this->tabPage5->Controls->Add(this->label5);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(294, 311);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Вопрос 5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(185, 285);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 23);
			this->button11->TabIndex = 6;
			this->button11->Text = L"Назад";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(241, 285);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 23);
			this->button10->TabIndex = 5;
			this->button10->Text = L"Вперед";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->Location = System::Drawing::Point(28, 99);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(57, 17);
			this->checkBox20->TabIndex = 4;
			this->checkBox20->Text = L"R2-D2";
			this->checkBox20->UseVisualStyleBackColor = true;
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->Location = System::Drawing::Point(28, 181);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(55, 17);
			this->checkBox19->TabIndex = 3;
			this->checkBox19->Text = L"Би-Би";
			this->checkBox19->UseVisualStyleBackColor = true;
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Location = System::Drawing::Point(28, 141);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(51, 17);
			this->checkBox18->TabIndex = 2;
			this->checkBox18->Text = L"Карл";
			this->checkBox18->UseVisualStyleBackColor = true;
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Location = System::Drawing::Point(28, 223);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(46, 17);
			this->checkBox17->TabIndex = 1;
			this->checkBox17->Text = L"ВВ8";
			this->checkBox17->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 15);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Как звали сына Пина\?";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->button13);
			this->tabPage6->Controls->Add(this->button12);
			this->tabPage6->Controls->Add(this->checkBox24);
			this->tabPage6->Controls->Add(this->checkBox23);
			this->tabPage6->Controls->Add(this->checkBox22);
			this->tabPage6->Controls->Add(this->checkBox21);
			this->tabPage6->Controls->Add(this->label6);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(294, 311);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Вопрос 6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(185, 285);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 23);
			this->button13->TabIndex = 6;
			this->button13->Text = L"Назад";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(241, 285);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 23);
			this->button12->TabIndex = 5;
			this->button12->Text = L"Вперед";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// checkBox24
			// 
			this->checkBox24->AutoSize = true;
			this->checkBox24->Location = System::Drawing::Point(28, 99);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(61, 17);
			this->checkBox24->TabIndex = 4;
			this->checkBox24->Text = L"Гитара";
			this->checkBox24->UseVisualStyleBackColor = true;
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->Location = System::Drawing::Point(28, 141);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(57, 17);
			this->checkBox23->TabIndex = 3;
			this->checkBox23->Text = L"Рояль";
			this->checkBox23->UseVisualStyleBackColor = true;
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->Location = System::Drawing::Point(28, 181);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(66, 17);
			this->checkBox22->TabIndex = 2;
			this->checkBox22->Text = L"Флейта";
			this->checkBox22->UseVisualStyleBackColor = true;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox22_CheckedChanged);
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->Location = System::Drawing::Point(28, 223);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(82, 17);
			this->checkBox21->TabIndex = 1;
			this->checkBox21->Text = L"Бас гитара";
			this->checkBox21->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(3, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(261, 30);
			this->label6->TabIndex = 0;
			this->label6->Text = L"На каком музыкальном инструменте играл \r\nКар-Карыч\?";
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->button15);
			this->tabPage7->Controls->Add(this->button14);
			this->tabPage7->Controls->Add(this->checkBox28);
			this->tabPage7->Controls->Add(this->checkBox27);
			this->tabPage7->Controls->Add(this->label7);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(294, 311);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Вопрос 7";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(185, 285);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 23);
			this->button15->TabIndex = 6;
			this->button15->Text = L"Назад";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(241, 285);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 23);
			this->button14->TabIndex = 5;
			this->button14->Text = L"Вперед";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// checkBox28
			// 
			this->checkBox28->AutoSize = true;
			this->checkBox28->Location = System::Drawing::Point(28, 99);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(41, 17);
			this->checkBox28->TabIndex = 4;
			this->checkBox28->Text = L"Да";
			this->checkBox28->UseVisualStyleBackColor = true;
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->Location = System::Drawing::Point(28, 141);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(45, 17);
			this->checkBox27->TabIndex = 3;
			this->checkBox27->Text = L"Нет";
			this->checkBox27->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(3, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(213, 15);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Умеет ли Крош игратть на гитаре\?";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->button17);
			this->tabPage8->Controls->Add(this->button16);
			this->tabPage8->Controls->Add(this->checkBox32);
			this->tabPage8->Controls->Add(this->checkBox31);
			this->tabPage8->Controls->Add(this->checkBox30);
			this->tabPage8->Controls->Add(this->checkBox29);
			this->tabPage8->Controls->Add(this->label8);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(294, 311);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"Вопрос 8";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(185, 285);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 23);
			this->button17->TabIndex = 6;
			this->button17->Text = L"Назад";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(241, 285);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 23);
			this->button16->TabIndex = 5;
			this->button16->Text = L"Вперед";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// checkBox32
			// 
			this->checkBox32->AutoSize = true;
			this->checkBox32->Location = System::Drawing::Point(28, 99);
			this->checkBox32->Name = L"checkBox32";
			this->checkBox32->Size = System::Drawing::Size(71, 17);
			this->checkBox32->TabIndex = 4;
			this->checkBox32->Text = L"Зеленый";
			this->checkBox32->UseVisualStyleBackColor = true;
			// 
			// checkBox31
			// 
			this->checkBox31->AutoSize = true;
			this->checkBox31->Location = System::Drawing::Point(28, 141);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(71, 17);
			this->checkBox31->TabIndex = 3;
			this->checkBox31->Text = L"Красный";
			this->checkBox31->UseVisualStyleBackColor = true;
			// 
			// checkBox30
			// 
			this->checkBox30->AutoSize = true;
			this->checkBox30->Location = System::Drawing::Point(28, 181);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(92, 17);
			this->checkBox30->TabIndex = 2;
			this->checkBox30->Text = L"Фиолетовый";
			this->checkBox30->UseVisualStyleBackColor = true;
			// 
			// checkBox29
			// 
			this->checkBox29->AutoSize = true;
			this->checkBox29->Location = System::Drawing::Point(28, 223);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(71, 17);
			this->checkBox29->TabIndex = 1;
			this->checkBox29->Text = L"Розовый";
			this->checkBox29->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(3, 25);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(247, 30);
			this->label8->TabIndex = 0;
			this->label8->Text = L"В первой серии Крош с Ежиком сделали \r\nлавочку, в какой цвет они ее покрасили\? ";
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->button19);
			this->tabPage9->Controls->Add(this->button18);
			this->tabPage9->Controls->Add(this->checkBox36);
			this->tabPage9->Controls->Add(this->checkBox35);
			this->tabPage9->Controls->Add(this->checkBox34);
			this->tabPage9->Controls->Add(this->checkBox33);
			this->tabPage9->Controls->Add(this->label9);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(294, 311);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"Вопрос 9";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(185, 285);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(50, 23);
			this->button19->TabIndex = 6;
			this->button19->Text = L"Назад";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(241, 285);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(50, 23);
			this->button18->TabIndex = 5;
			this->button18->Text = L"Вперед";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// checkBox36
			// 
			this->checkBox36->AutoSize = true;
			this->checkBox36->Location = System::Drawing::Point(28, 99);
			this->checkBox36->Name = L"checkBox36";
			this->checkBox36->Size = System::Drawing::Size(71, 17);
			this->checkBox36->TabIndex = 4;
			this->checkBox36->Text = L"Розовый";
			this->checkBox36->UseVisualStyleBackColor = true;
			// 
			// checkBox35
			// 
			this->checkBox35->AutoSize = true;
			this->checkBox35->Location = System::Drawing::Point(28, 141);
			this->checkBox35->Name = L"checkBox35";
			this->checkBox35->Size = System::Drawing::Size(86, 17);
			this->checkBox35->TabIndex = 3;
			this->checkBox35->Text = L"Оранжевый";
			this->checkBox35->UseVisualStyleBackColor = true;
			// 
			// checkBox34
			// 
			this->checkBox34->AutoSize = true;
			this->checkBox34->Location = System::Drawing::Point(28, 181);
			this->checkBox34->Name = L"checkBox34";
			this->checkBox34->Size = System::Drawing::Size(109, 17);
			this->checkBox34->TabIndex = 2;
			this->checkBox34->Text = L"Светло-зеленый";
			this->checkBox34->UseVisualStyleBackColor = true;
			// 
			// checkBox33
			// 
			this->checkBox33->AutoSize = true;
			this->checkBox33->Location = System::Drawing::Point(28, 223);
			this->checkBox33->Name = L"checkBox33";
			this->checkBox33->Size = System::Drawing::Size(67, 17);
			this->checkBox33->TabIndex = 1;
			this->checkBox33->Text = L"Голубой";
			this->checkBox33->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(3, 32);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(247, 15);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Какого цвета был фартукк на Робоняне\?";
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->button21);
			this->tabPage10->Controls->Add(this->button20);
			this->tabPage10->Controls->Add(this->checkBox40);
			this->tabPage10->Controls->Add(this->checkBox39);
			this->tabPage10->Controls->Add(this->checkBox38);
			this->tabPage10->Controls->Add(this->checkBox37);
			this->tabPage10->Controls->Add(this->label10);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Size = System::Drawing::Size(294, 311);
			this->tabPage10->TabIndex = 9;
			this->tabPage10->Text = L"Вопрос 10";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(185, 285);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(50, 23);
			this->button21->TabIndex = 6;
			this->button21->Text = L"Назад";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(241, 285);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(50, 23);
			this->button20->TabIndex = 5;
			this->button20->Text = L"Вперед";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// checkBox40
			// 
			this->checkBox40->AutoSize = true;
			this->checkBox40->Location = System::Drawing::Point(28, 99);
			this->checkBox40->Name = L"checkBox40";
			this->checkBox40->Size = System::Drawing::Size(75, 17);
			this->checkBox40->TabIndex = 4;
			this->checkBox40->Text = L"Ни в кого";
			this->checkBox40->UseVisualStyleBackColor = true;
			// 
			// checkBox39
			// 
			this->checkBox39->AutoSize = true;
			this->checkBox39->Location = System::Drawing::Point(28, 181);
			this->checkBox39->Name = L"checkBox39";
			this->checkBox39->Size = System::Drawing::Size(94, 17);
			this->checkBox39->TabIndex = 3;
			this->checkBox39->Text = L"Лили Марлен";
			this->checkBox39->UseVisualStyleBackColor = true;
			// 
			// checkBox38
			// 
			this->checkBox38->AutoSize = true;
			this->checkBox38->Location = System::Drawing::Point(28, 223);
			this->checkBox38->Name = L"checkBox38";
			this->checkBox38->Size = System::Drawing::Size(53, 17);
			this->checkBox38->TabIndex = 2;
			this->checkBox38->Text = L"Крош";
			this->checkBox38->UseVisualStyleBackColor = true;
			// 
			// checkBox37
			// 
			this->checkBox37->AutoSize = true;
			this->checkBox37->Location = System::Drawing::Point(28, 141);
			this->checkBox37->Name = L"checkBox37";
			this->checkBox37->Size = System::Drawing::Size(56, 17);
			this->checkBox37->TabIndex = 1;
			this->checkBox37->Text = L"Нюша";
			this->checkBox37->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(3, 31);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(163, 15);
			this->label10->TabIndex = 0;
			this->label10->Text = L"В кого был влюблен Ежик\?";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->label12);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Size = System::Drawing::Size(294, 311);
			this->tabPage11->TabIndex = 10;
			this->tabPage11->Text = L"Результат";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(63, 112);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(173, 16);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Завершите тест до конца";
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
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion

	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox22_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
