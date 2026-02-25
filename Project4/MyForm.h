#pragma once
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// Структура для хранения информации о вопросе
public ref class Question {
public:
    String^ Text;
    array<String^>^ Options;
    List<int>^ CorrectAnswers;
    bool IsMultipleChoice;

    Question(String^ text, array<String^>^ options, int correctIndex) {
        Text = text;
        Options = options;
        CorrectAnswers = gcnew List<int>();
        CorrectAnswers->Add(correctIndex);
        IsMultipleChoice = false;
    }

    Question(String^ text, array<String^>^ options, List<int>^ correctIndices) {
        Text = text;
        Options = options;
        CorrectAnswers = correctIndices;
        IsMultipleChoice = true;
    }
};

public ref class MyForm : public System::Windows::Forms::Form
{
public:
    MyForm(void)
    {
        components = gcnew System::ComponentModel::Container();
        InitializeComponent();
        InitializeQuestions();
        currentQuestionIndex = -1;
        userAnswers = gcnew array<List<int>^>(questions->Count);
        for (int i = 0; i < questions->Count; i++) {
            userAnswers[i] = gcnew List<int>();
        }
        ShowTitlePage();
    }

protected:
    ~MyForm()
    {
        if (components)
        {
            delete components;
        }
    }

private:
    // Элементы управления
    TableLayoutPanel^ mainTableLayoutPanel;
    Label^ titleLabel;
    Label^ questionLabel;
    Panel^ optionsPanel;
    FlowLayoutPanel^ buttonPanel;
    Button^ backButton;
    Button^ nextButton;

    List<Question^>^ questions;
    array<List<int>^>^ userAnswers;
    int currentQuestionIndex;

    System::ComponentModel::Container^ components;

    void InitializeComponent() {
        this->mainTableLayoutPanel = gcnew System::Windows::Forms::TableLayoutPanel();
        this->titleLabel = gcnew System::Windows::Forms::Label();
        this->questionLabel = gcnew System::Windows::Forms::Label();
        this->optionsPanel = gcnew System::Windows::Forms::Panel();
        this->buttonPanel = gcnew System::Windows::Forms::FlowLayoutPanel();
        this->backButton = gcnew System::Windows::Forms::Button();
        this->nextButton = gcnew System::Windows::Forms::Button();

        this->SuspendLayout();

        // Form
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(1000, 700); // Увеличил размер
        this->MinimumSize = System::Drawing::Size(900, 650);
        this->Text = L"Тест по смешарикам";
        this->StartPosition = FormStartPosition::CenterScreen;
        this->Padding = System::Windows::Forms::Padding(10);

        // mainTableLayoutPanel
        this->mainTableLayoutPanel->Dock = DockStyle::Fill;
        this->mainTableLayoutPanel->ColumnCount = 1;
        this->mainTableLayoutPanel->RowCount = 4;
        this->mainTableLayoutPanel->Padding = System::Windows::Forms::Padding(15);
        this->mainTableLayoutPanel->BackColor = Color::FromArgb(240, 240, 240);

        // Настройка строк таблицы
        this->mainTableLayoutPanel->RowStyles->Clear();
        this->mainTableLayoutPanel->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 70));  // Заголовок
        this->mainTableLayoutPanel->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 100)); // Вопрос (увеличил высоту)
        this->mainTableLayoutPanel->RowStyles->Add(gcnew RowStyle(SizeType::Percent, 100));  // Ответы
        this->mainTableLayoutPanel->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 70));  // Кнопки

        // titleLabel
        this->titleLabel->AutoSize = true;
        this->titleLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold);
        this->titleLabel->Text = L"Тест по смешарикам";
        this->titleLabel->TextAlign = ContentAlignment::MiddleCenter;
        this->titleLabel->Dock = DockStyle::Fill;
        this->titleLabel->ForeColor = Color::FromArgb(50, 50, 150);

        // questionLabel
        this->questionLabel->AutoSize = false; // Отключаем AutoSize для контроля переноса
        this->questionLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular);
        this->questionLabel->TextAlign = ContentAlignment::TopLeft;
        this->questionLabel->Dock = DockStyle::Fill;
        this->questionLabel->Padding = System::Windows::Forms::Padding(15, 10, 15, 10);
        this->questionLabel->MaximumSize = System::Drawing::Size(0, 90);
        this->questionLabel->Visible = false;

        // optionsPanel
        this->optionsPanel->Dock = DockStyle::Fill;
        this->optionsPanel->BackColor = Color::White;
        this->optionsPanel->BorderStyle = BorderStyle::FixedSingle;
        this->optionsPanel->AutoScroll = true;
        this->optionsPanel->Padding = System::Windows::Forms::Padding(10);

        // buttonPanel
        this->buttonPanel->FlowDirection = FlowDirection::RightToLeft;
        this->buttonPanel->Dock = DockStyle::Fill;
        this->buttonPanel->Padding = System::Windows::Forms::Padding(5);

        // backButton
        this->backButton->Size = System::Drawing::Size(130, 45);
        this->backButton->Text = L"Назад";
        this->backButton->UseVisualStyleBackColor = true;
        this->backButton->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12);
        this->backButton->Margin = System::Windows::Forms::Padding(5);
        this->backButton->Click += gcnew System::EventHandler(this, &MyForm::backButton_Click);

        // nextButton
        this->nextButton->Size = System::Drawing::Size(130, 45);
        this->nextButton->Text = L"Далее";
        this->nextButton->UseVisualStyleBackColor = true;
        this->nextButton->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12);
        this->nextButton->Margin = System::Windows::Forms::Padding(5);
        this->nextButton->Click += gcnew System::EventHandler(this, &MyForm::nextButton_Click);

        // Добавление элементов на панель кнопок
        this->buttonPanel->Controls->Add(this->nextButton);
        this->buttonPanel->Controls->Add(this->backButton);

        // Добавление элементов в таблицу
        this->mainTableLayoutPanel->Controls->Add(this->titleLabel, 0, 0);
        this->mainTableLayoutPanel->Controls->Add(this->questionLabel, 0, 1);
        this->mainTableLayoutPanel->Controls->Add(this->optionsPanel, 0, 2);
        this->mainTableLayoutPanel->Controls->Add(this->buttonPanel, 0, 3);

        // Добавление таблицы на форму
        this->Controls->Add(this->mainTableLayoutPanel);

        this->ResumeLayout(false);
        this->PerformLayout();
    }

    void InitializeQuestions() {
        questions = gcnew List<Question^>();

        // Вопрос 1 - 9 (индекс 1)
        array<String^>^ opts1 = gcnew array<String^> { "5", "9", "7", "12" };
        questions->Add(gcnew Question("Сколько смешариков было в первом сезоне?", opts1, 1));

        // Вопрос 2 - множественный выбор: Кар-Карыч и Совунья
        array<String^>^ opts2 = gcnew array<String^> { "Бараш", "Кар-Карыч", "Совунья", "Крош" };
        List<int>^ correct2 = gcnew List<int>();
        correct2->Add(1); // Кар-Карыч
        correct2->Add(2); // Совунья
        questions->Add(gcnew Question("Известно что Сергей Мардарь озвучивал двух персонажей, вопрос каких?", opts2, correct2));

        // Вопрос 3 - 3 (индекс 1)
        array<String^>^ opts3 = gcnew array<String^> { "5", "3", "6", "2" };
        questions->Add(gcnew Question("Сколько смешариков носят головные уборы на постоянной основе?", opts3, 1));

        // Вопрос 4 - множественный выбор: Фантики и Кактусы
        array<String^>^ opts4 = gcnew array<String^> { "Фантики", "Морковь", "Марки", "Кактусы" };
        List<int>^ correct4 = gcnew List<int>();
        correct4->Add(0); // Фантики
        correct4->Add(3); // Кактусы
        questions->Add(gcnew Question("Что коллекционировал Ежик?", opts4, correct4));

        // Вопрос 5 - Би-Би (индекс 2)
        array<String^>^ opts5 = gcnew array<String^> { "R2-D2", "Карл", "Би-Би", "BB8" };
        questions->Add(gcnew Question("Как звали сына Пина?", opts5, 2));

        // Вопрос 6 - Рояль (индекс 1)
        array<String^>^ opts6 = gcnew array<String^> { "Гитара", "Рояль", "Флейта", "Бас гитара" };
        questions->Add(gcnew Question("На каком музыкальном инструменте играл Кар-Карыч?", opts6, 1));

        // Вопрос 7 - Да (индекс 0)
        array<String^>^ opts7 = gcnew array<String^> { "Да", "Нет" };
        questions->Add(gcnew Question("Умеет ли Крош играть на гитаре?", opts7, 0));

        // Вопрос 8 - Розовый (индекс 3)
        array<String^>^ opts8 = gcnew array<String^> { "Зеленый", "Красный", "Фиолетовый", "Розовый" };
        questions->Add(gcnew Question("В первой серии Крош с Ежиком сделали лавочку, в какой цвет они ее покрасили?", opts8, 3));

        // Вопрос 9 - Розовый (индекс 0)
        array<String^>^ opts9 = gcnew array<String^> { "Розовый", "Оранжевый", "Светло-зеленый", "Голубой" };
        questions->Add(gcnew Question("Какого цвета был фартук на Робоняне?", opts9, 0));

        // Вопрос 10 - Лили Марлен (индекс 2)
        array<String^>^ opts10 = gcnew array<String^> { "Ни в кого", "Нюша", "Лили Марлен", "Крош" };
        questions->Add(gcnew Question("В кого был влюблен Ежик?", opts10, 2));
    }

    void ShowTitlePage() {
        currentQuestionIndex = -1;
        titleLabel->Text = "Тест по смешарикам";
        questionLabel->Visible = false;

        optionsPanel->Controls->Clear();
        optionsPanel->AutoScroll = true;

        backButton->Enabled = false;
        backButton->Visible = true;
        nextButton->Text = "Начать тест";
        nextButton->Enabled = true;
        nextButton->Visible = true;

        Label^ infoLabel = gcnew Label();
        infoLabel->Text = "Пройди тест и узнай, насколько хорошо ты знаешь мультфильм \"Смешарики\"!";
        infoLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 18, FontStyle::Regular);
        infoLabel->TextAlign = ContentAlignment::MiddleCenter;
        infoLabel->Size = System::Drawing::Size(optionsPanel->Width - 40, optionsPanel->Height - 40);
        infoLabel->Location = Point(20, 20);
        infoLabel->AutoSize = false;

        optionsPanel->Controls->Add(infoLabel);
    }

    void ShowQuestion(int index) {
        currentQuestionIndex = index;
        Question^ q = questions[index];

        titleLabel->Text = "Тест по смешарикам";

        // Настройка вопроса с переносом текста
        questionLabel->Text = String::Format("Вопрос {0}: {1}", index + 1, q->Text);
        questionLabel->Visible = true;
        questionLabel->AutoSize = false;
        questionLabel->MaximumSize = System::Drawing::Size(mainTableLayoutPanel->Width - 50, 0);
        questionLabel->Size = System::Drawing::Size(mainTableLayoutPanel->Width - 50, 90);
        questionLabel->TextAlign = ContentAlignment::TopLeft;

        optionsPanel->Controls->Clear();
        optionsPanel->AutoScroll = true;
        optionsPanel->Padding = System::Windows::Forms::Padding(15);

        int yPos = 15;
        int panelWidth = optionsPanel->Width - 50;

        for (int i = 0; i < q->Options->Length; i++) {
            Panel^ optionContainer = gcnew Panel();
            optionContainer->Location = Point(10, yPos);
            optionContainer->Size = System::Drawing::Size(panelWidth, 35);
            optionContainer->BackColor = Color::Transparent;

            if (q->IsMultipleChoice) {
                CheckBox^ chk = gcnew CheckBox();
                chk->Text = q->Options[i];
                chk->Tag = i;
                chk->Location = Point(5, 5);
                chk->Size = System::Drawing::Size(panelWidth - 20, 30);
                chk->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 14, FontStyle::Regular);
                chk->Checked = userAnswers[index]->Contains(i);
                chk->CheckedChanged += gcnew EventHandler(this, &MyForm::OptionCheckedChanged);
                chk->AutoSize = false;
                chk->TextAlign = ContentAlignment::MiddleLeft;
                optionContainer->Controls->Add(chk);

                // Автоматически подбираем высоту под текст
                int textHeight = TextRenderer::MeasureText(chk->Text, chk->Font).Height;
                int lines = (int)Math::Ceiling((double)TextRenderer::MeasureText(chk->Text, chk->Font, System::Drawing::Size(panelWidth - 30, 0)).Height / textHeight);
                optionContainer->Height = Math::Max(35, lines * 25 + 10);
            }
            else {
                RadioButton^ rb = gcnew RadioButton();
                rb->Text = q->Options[i];
                rb->Tag = i;
                rb->Location = Point(5, 5);
                rb->Size = System::Drawing::Size(panelWidth - 20, 30);
                rb->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 14, FontStyle::Regular);
                rb->Checked = (userAnswers[index]->Count > 0 && userAnswers[index][0] == i);
                rb->CheckedChanged += gcnew EventHandler(this, &MyForm::OptionCheckedChanged);
                rb->AutoSize = false;
                rb->TextAlign = ContentAlignment::MiddleLeft;
                optionContainer->Controls->Add(rb);

                // Автоматически подбираем высоту под текст
                int textHeight = TextRenderer::MeasureText(rb->Text, rb->Font).Height;
                int lines = (int)Math::Ceiling((double)TextRenderer::MeasureText(rb->Text, rb->Font, System::Drawing::Size(panelWidth - 30, 0)).Height / textHeight);
                optionContainer->Height = Math::Max(35, lines * 25 + 10);
            }

            optionsPanel->Controls->Add(optionContainer);
            yPos += optionContainer->Height + 10;
        }

        backButton->Enabled = (index > 0);
        backButton->Visible = true;
        nextButton->Text = (index == questions->Count - 1) ? "Завершить" : "Далее";
        nextButton->Enabled = true;
        nextButton->Visible = true;
    }

    void OptionCheckedChanged(Object^ sender, EventArgs^ e) {
        if (currentQuestionIndex < 0) return;

        Question^ q = questions[currentQuestionIndex];

        if (q->IsMultipleChoice) {
            CheckBox^ chk = safe_cast<CheckBox^>(sender);
            int optionIndex = safe_cast<int>(chk->Tag);

            if (chk->Checked) {
                if (!userAnswers[currentQuestionIndex]->Contains(optionIndex)) {
                    userAnswers[currentQuestionIndex]->Add(optionIndex);
                }
            }
            else {
                userAnswers[currentQuestionIndex]->Remove(optionIndex);
            }
        }
        else {
            RadioButton^ rb = safe_cast<RadioButton^>(sender);
            if (rb->Checked) {
                int optionIndex = safe_cast<int>(rb->Tag);
                userAnswers[currentQuestionIndex]->Clear();
                userAnswers[currentQuestionIndex]->Add(optionIndex);
            }
        }
    }

    void backButton_Click(Object^ sender, EventArgs^ e) {
        if (currentQuestionIndex > 0) {
            ShowQuestion(currentQuestionIndex - 1);
        }
    }

    void nextButton_Click(Object^ sender, EventArgs^ e) {
        if (currentQuestionIndex == -1) {
            ShowQuestion(0);
        }
        else if (currentQuestionIndex == questions->Count - 1) {
            ShowResults();
        }
        else {
            ShowQuestion(currentQuestionIndex + 1);
        }
    }

    void ShowResults() {
        int correctCount = 0;

        for (int i = 0; i < questions->Count; i++) {
            Question^ q = questions[i];
            List<int>^ userAns = userAnswers[i];
            List<int>^ correctAns = q->CorrectAnswers;

            if (userAns->Count == 0) continue;

            if (q->IsMultipleChoice) {
                if (userAns->Count == correctAns->Count) {
                    bool allMatch = true;
                    for each (int ans in userAns) {
                        if (!correctAns->Contains(ans)) {
                            allMatch = false;
                            break;
                        }
                    }
                    if (allMatch) correctCount++;
                }
            }
            else {
                if (userAns->Count > 0 && userAns[0] == correctAns[0]) {
                    correctCount++;
                }
            }
        }

        currentQuestionIndex = -2;
        titleLabel->Text = "Результаты теста";
        questionLabel->Visible = false;

        optionsPanel->Controls->Clear();
        optionsPanel->AutoScroll = true;
        optionsPanel->BackColor = Color::White;
        optionsPanel->Padding = System::Windows::Forms::Padding(20);

        backButton->Visible = false;
        nextButton->Visible = false;

        int centerX = optionsPanel->Width / 2;
        int currentY = 30;

        // Заголовок
        Label^ resultTitle = gcnew Label();
        resultTitle->Text = "Ваш результат:";
        resultTitle->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 24, FontStyle::Bold);
        resultTitle->Size = System::Drawing::Size(400, 50);
        resultTitle->Location = Point(centerX - 200, currentY);
        resultTitle->TextAlign = ContentAlignment::MiddleCenter;
        resultTitle->ForeColor = Color::FromArgb(50, 50, 150);
        optionsPanel->Controls->Add(resultTitle);
        currentY += 60;

        // Количество правильных ответов
        Label^ countLabel = gcnew Label();
        countLabel->Text = String::Format("{0} из {1}", correctCount, questions->Count);
        countLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 40, FontStyle::Bold);
        countLabel->Size = System::Drawing::Size(400, 80);
        countLabel->Location = Point(centerX - 200, currentY);
        countLabel->TextAlign = ContentAlignment::MiddleCenter;
        countLabel->ForeColor = (correctCount == questions->Count) ? Color::Green : Color::FromArgb(70, 130, 180);
        optionsPanel->Controls->Add(countLabel);
        currentY += 90;

        // Процент
        double percent = (100.0 * correctCount / questions->Count);
        Label^ percentLabel = gcnew Label();
        percentLabel->Text = String::Format("{0:F1}%", percent);
        percentLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 48, FontStyle::Bold);
        percentLabel->Size = System::Drawing::Size(400, 80);
        percentLabel->Location = Point(centerX - 200, currentY);
        percentLabel->TextAlign = ContentAlignment::MiddleCenter;

        if (percent >= 80) percentLabel->ForeColor = Color::Green;
        else if (percent >= 60) percentLabel->ForeColor = Color::Orange;
        else if (percent >= 40) percentLabel->ForeColor = Color::Goldenrod;
        else percentLabel->ForeColor = Color::Red;

        optionsPanel->Controls->Add(percentLabel);
        currentY += 90;

        // Оценка
        Label^ gradeLabel = gcnew Label();
        String^ grade;
        if (percent >= 90) grade = "Отлично! Ты настоящий эксперт!";
        else if (percent >= 75) grade = "Хорошо! Ты хорошо знаешь смешариков!";
        else if (percent >= 60) grade = "Неплохо! Но можно и лучше!";
        else if (percent >= 40) grade = "Так себе результат. Стоит пересмотреть мультик!";
        else grade = "Плохо! Срочно пересматривай смешариков!";

        gradeLabel->Text = grade;
        gradeLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 16, FontStyle::Regular);
        gradeLabel->Size = System::Drawing::Size(500, 60);
        gradeLabel->Location = Point(centerX - 250, currentY);
        gradeLabel->TextAlign = ContentAlignment::MiddleCenter;
        gradeLabel->ForeColor = Color::Gray;
        optionsPanel->Controls->Add(gradeLabel);
        currentY += 70;

        // Кнопка
        Button^ restartButton = gcnew Button();
        restartButton->Text = "Пройти тест заново";
        restartButton->Size = System::Drawing::Size(250, 60);
        restartButton->Location = Point(centerX - 125, currentY);
        restartButton->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 14, FontStyle::Bold);
        restartButton->BackColor = Color::FromArgb(70, 130, 180);
        restartButton->ForeColor = Color::White;
        restartButton->FlatStyle = FlatStyle::Flat;
        restartButton->FlatAppearance->BorderSize = 0;
        restartButton->Cursor = Cursors::Hand;
        restartButton->Click += gcnew EventHandler(this, &MyForm::RestartTest);
        optionsPanel->Controls->Add(restartButton);
    }

    void RestartTest(Object^ sender, EventArgs^ e) {
        for (int i = 0; i < questions->Count; i++) {
            userAnswers[i]->Clear();
        }

        ShowTitlePage();

        backButton->Visible = true;
        nextButton->Visible = true;
        nextButton->Enabled = true;
    }
};