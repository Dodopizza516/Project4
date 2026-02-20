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
    FlowLayoutPanel^ flowLayoutPanel1;
    Label^ titleLabel;
    Label^ questionLabel;
    FlowLayoutPanel^ optionsPanel;
    Button^ backButton;
    Button^ nextButton;
    Panel^ topPanel;

    List<Question^>^ questions;
    array<List<int>^>^ userAnswers;
    int currentQuestionIndex;

    System::ComponentModel::Container^ components;

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
        backButton->Enabled = false;

        Label^ infoLabel = gcnew Label();
        infoLabel->Text = "Пройди тест и узнай на сколько ты знаешь мультфильм смешарики";
        infoLabel->AutoSize = true;
        infoLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 14, FontStyle::Regular);
        infoLabel->MaximumSize = System::Drawing::Size(700, 0);
        optionsPanel->Controls->Add(infoLabel);

        nextButton->Text = "Начать тест";
        UpdateTopPanelIndicators();
    }

    void ShowQuestion(int index) {
        currentQuestionIndex = index;
        Question^ q = questions[index];

        titleLabel->Text = "Тест по смешарикам";
        questionLabel->Text = String::Format("Вопрос {0}: {1}", index + 1, q->Text);
        questionLabel->Visible = true;
        questionLabel->MaximumSize = System::Drawing::Size(730, 0);
        questionLabel->AutoSize = true;

        optionsPanel->Controls->Clear();

        for (int i = 0; i < q->Options->Length; i++) {
            if (q->IsMultipleChoice) {
                CheckBox^ chk = gcnew CheckBox();
                chk->Text = q->Options[i];
                chk->Tag = i;
                chk->AutoSize = true;
                chk->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
                chk->Checked = userAnswers[index]->Contains(i);
                chk->CheckedChanged += gcnew EventHandler(this, &MyForm::OptionCheckedChanged);
                chk->Margin = System::Windows::Forms::Padding(10, 5, 0, 5);
                optionsPanel->Controls->Add(chk);
            }
            else {
                RadioButton^ rb = gcnew RadioButton();
                rb->Text = q->Options[i];
                rb->Tag = i;
                rb->AutoSize = true;
                rb->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
                rb->Checked = userAnswers[index]->Contains(i);
                rb->CheckedChanged += gcnew EventHandler(this, &MyForm::OptionCheckedChanged);
                rb->Margin = System::Windows::Forms::Padding(10, 5, 0, 5);
                optionsPanel->Controls->Add(rb);
            }
        }

        backButton->Enabled = (index > 0);
        nextButton->Text = (index == questions->Count - 1) ? "Результат" : "Вперед";
        UpdateTopPanelIndicators();
    }

    void ShowResults() {
        currentQuestionIndex = questions->Count;
        titleLabel->Text = "Результат";
        questionLabel->Visible = false;
        optionsPanel->Controls->Clear();
        backButton->Enabled = true;
        nextButton->Text = "В начало";
        UpdateTopPanelIndicators();

        bool testCompleted = false;
        for each (List<int> ^ answers in userAnswers) {
            if (answers->Count > 0) {
                testCompleted = true;
                break;
            }
        }

        if (!testCompleted) {
            Label^ msgLabel = gcnew Label();
            msgLabel->Text = "Тест еще не пройден. Ответьте на вопросы!";
            msgLabel->AutoSize = true;
            msgLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 16, FontStyle::Bold);
            msgLabel->ForeColor = Color::Red;
            msgLabel->MaximumSize = System::Drawing::Size(700, 0);
            optionsPanel->Controls->Add(msgLabel);
        }
        else {
            // Подсчет баллов и подготовка данных для отображения
            array<bool>^ results = gcnew array<bool>(questions->Count);
            int score = 0;

            for (int i = 0; i < questions->Count; i++) {
                Question^ q = questions[i];
                List<int>^ correct = q->CorrectAnswers;
                List<int>^ userAns = userAnswers[i];
                bool isCorrect = false;

                if (q->IsMultipleChoice) {
                    if (userAns->Count == correct->Count) {
                        bool allMatch = true;
                        for each (int ans in userAns) {
                            if (!correct->Contains(ans)) {
                                allMatch = false;
                                break;
                            }
                        }
                        isCorrect = allMatch;
                    }
                }
                else {
                    isCorrect = (userAns->Count == 1 && userAns[0] == correct[0]);
                }

                results[i] = isCorrect;
                if (isCorrect) score++;
            }

            // Отображение результата
            Label^ scoreLabel = gcnew Label();
            scoreLabel->Text = String::Format("Ваш результат: {0} из {1}", score, questions->Count);
            scoreLabel->AutoSize = true;
            scoreLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 18, FontStyle::Bold);
            scoreLabel->ForeColor = (score == questions->Count) ? Color::Green : Color::Black;
            scoreLabel->Margin = System::Windows::Forms::Padding(5, 5, 5, 15);
            optionsPanel->Controls->Add(scoreLabel);

            // Разделитель
            Label^ spacerLabel = gcnew Label();
            spacerLabel->Text = "";
            spacerLabel->Height = 10;
            optionsPanel->Controls->Add(spacerLabel);

            // Заголовок для детальных результатов
            Label^ detailHeader = gcnew Label();
            detailHeader->Text = "Детали по вопросам:";
            detailHeader->AutoSize = true;
            detailHeader->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 14, FontStyle::Bold);
            detailHeader->Margin = System::Windows::Forms::Padding(5, 5, 5, 10);
            optionsPanel->Controls->Add(detailHeader);

            // Отображение каждого вопроса с цветовой индикацией
            for (int i = 0; i < questions->Count; i++) {
                Question^ q = questions[i];

                // Создаем панель для вопроса
                Panel^ questionPanel = gcnew Panel();
                questionPanel->Height = 110;
                questionPanel->Width = optionsPanel->Width - 30;
                questionPanel->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
                questionPanel->BorderStyle = BorderStyle::FixedSingle;
                questionPanel->Padding = System::Windows::Forms::Padding(8);

                // Устанавливаем цвет фона в зависимости от правильности ответа
                if (results[i]) {
                    questionPanel->BackColor = Color::LightGreen;
                }
                else {
                    questionPanel->BackColor = Color::LightCoral;
                }

                // Номер вопроса
                Label^ numLabel = gcnew Label();
                numLabel->Text = String::Format("Вопрос {0}:", i + 1);
                numLabel->Location = Point(8, 5);
                numLabel->AutoSize = true;
                numLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 11, FontStyle::Bold);
                questionPanel->Controls->Add(numLabel);

                // Ответ пользователя
                Label^ userLabel = gcnew Label();
                String^ userAnswerStr = "";
                if (userAnswers[i]->Count > 0) {
                    for each (int idx in userAnswers[i]) {
                        if (userAnswerStr != "") userAnswerStr += ", ";
                        userAnswerStr += q->Options[idx];
                    }
                }
                else {
                    userAnswerStr = "Нет ответа";
                }

                userLabel->Text = String::Format("Ваш ответ: {0}", userAnswerStr);
                userLabel->Location = Point(8, 30);
                userLabel->AutoSize = true;
                userLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, FontStyle::Regular);
                userLabel->MaximumSize = System::Drawing::Size(questionPanel->Width - 20, 0);
                questionPanel->Controls->Add(userLabel);

                // Правильный ответ
                Label^ correctLabel = gcnew Label();
                String^ correctAnswerStr = "";
                for each (int idx in q->CorrectAnswers) {
                    if (correctAnswerStr != "") correctAnswerStr += ", ";
                    correctAnswerStr += q->Options[idx];
                }

                correctLabel->Text = String::Format("Правильно: {0}", correctAnswerStr);
                correctLabel->Location = Point(8, 60);
                correctLabel->AutoSize = true;
                correctLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, FontStyle::Bold);
                correctLabel->ForeColor = Color::DarkGreen;
                correctLabel->MaximumSize = System::Drawing::Size(questionPanel->Width - 20, 0);
                questionPanel->Controls->Add(correctLabel);

                optionsPanel->Controls->Add(questionPanel);
            }
        }
    }

    void OptionCheckedChanged(Object^ sender, EventArgs^ e) {
        if (currentQuestionIndex < 0 || currentQuestionIndex >= questions->Count) return;

        Question^ q = questions[currentQuestionIndex];
        List<int>^ currentAnswers = userAnswers[currentQuestionIndex];

        if (q->IsMultipleChoice) {
            CheckBox^ chk = safe_cast<CheckBox^>(sender);
            int value = safe_cast<int>(chk->Tag);
            if (chk->Checked) {
                if (!currentAnswers->Contains(value)) currentAnswers->Add(value);
            }
            else {
                currentAnswers->Remove(value);
            }
        }
        else {
            RadioButton^ rb = safe_cast<RadioButton^>(sender);
            if (rb->Checked) {
                int value = safe_cast<int>(rb->Tag);
                currentAnswers->Clear();
                currentAnswers->Add(value);

                for each (Control ^ ctrl in optionsPanel->Controls) {
                    RadioButton^ otherRb = dynamic_cast<RadioButton^>(ctrl);
                    if (otherRb != nullptr && otherRb != rb) {
                        otherRb->Checked = false;
                    }
                }
            }
        }
        UpdateTopPanelIndicators();
    }

    void UpdateTopPanelIndicators() {
        topPanel->Controls->Clear();

        int totalItems = questions->Count + 2;
        int currentPos = (currentQuestionIndex == -1) ? 0 :
            (currentQuestionIndex == questions->Count) ? totalItems - 1 :
            currentQuestionIndex + 1;

        for (int i = 0; i < totalItems; i++) {
            Button^ btn = gcnew Button();
            btn->Width = 45;
            btn->Height = 35;
            btn->FlatStyle = FlatStyle::Flat;
            btn->FlatAppearance->BorderSize = 1;
            btn->Enabled = false;
            btn->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 9, FontStyle::Regular);

            if (i == 0) {
                btn->Text = "Старт";
                btn->Width = 55;
            }
            else if (i == totalItems - 1) {
                btn->Text = "Итог";
                btn->Width = 55;
            }
            else {
                btn->Text = (i).ToString();
                if (userAnswers[i - 1]->Count > 0) {
                    btn->BackColor = Color::LightGreen;
                }
            }

            if (currentPos == i) {
                btn->BackColor = Color::LightBlue;
            }

            topPanel->Controls->Add(btn);
        }
    }

    System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
        if (currentQuestionIndex == questions->Count) {
            ShowQuestion(questions->Count - 1);
        }
        else if (currentQuestionIndex > 0) {
            ShowQuestion(currentQuestionIndex - 1);
        }
        else if (currentQuestionIndex == 0) {
            ShowTitlePage();
        }
    }

    System::Void nextButton_Click(System::Object^ sender, System::EventArgs^ e) {
        if (currentQuestionIndex == -1) {
            ShowQuestion(0);
        }
        else if (currentQuestionIndex == questions->Count - 1) {
            ShowResults();
        }
        else if (currentQuestionIndex == questions->Count) {
            // Очищаем ответы при возврате на старт
            for (int i = 0; i < questions->Count; i++) {
                userAnswers[i]->Clear();
            }
            ShowTitlePage();
        }
        else {
            ShowQuestion(currentQuestionIndex + 1);
        }
    }

    void InitializeComponent(void)
    {
        this->topPanel = gcnew System::Windows::Forms::Panel();
        this->titleLabel = gcnew System::Windows::Forms::Label();
        this->questionLabel = gcnew System::Windows::Forms::Label();
        this->optionsPanel = gcnew System::Windows::Forms::FlowLayoutPanel();
        this->backButton = gcnew System::Windows::Forms::Button();
        this->nextButton = gcnew System::Windows::Forms::Button();
        this->SuspendLayout();
        // 
        // topPanel
        // 
        this->topPanel->Location = System::Drawing::Point(20, 20);
        this->topPanel->Size = System::Drawing::Size(860, 45);
        this->topPanel->AutoScroll = true;
        this->topPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        // 
        // titleLabel
        // 
        this->titleLabel->AutoSize = true;
        this->titleLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold);
        this->titleLabel->Location = System::Drawing::Point(20, 75);
        this->titleLabel->Size = System::Drawing::Size(0, 36);
        this->titleLabel->TabIndex = 0;
        // 
        // questionLabel
        // 
        this->questionLabel->AutoSize = true;
        this->questionLabel->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular);
        this->questionLabel->Location = System::Drawing::Point(20, 125);
        this->questionLabel->Size = System::Drawing::Size(0, 29);
        this->questionLabel->TabIndex = 1;
        this->questionLabel->MaximumSize = System::Drawing::Size(830, 0);
        // 
        // optionsPanel
        // 
        this->optionsPanel->Location = System::Drawing::Point(20, 165);
        this->optionsPanel->Size = System::Drawing::Size(860, 400);
        this->optionsPanel->FlowDirection = FlowDirection::TopDown;
        this->optionsPanel->AutoScroll = true;
        this->optionsPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        this->optionsPanel->Padding = System::Windows::Forms::Padding(10);
        this->optionsPanel->Margin = System::Windows::Forms::Padding(5);
        // 
        // backButton
        // 
        this->backButton->Location = System::Drawing::Point(20, 580);
        this->backButton->Size = System::Drawing::Size(140, 45);
        this->backButton->Text = L"Назад";
        this->backButton->UseVisualStyleBackColor = true;
        this->backButton->Click += gcnew System::EventHandler(this, &MyForm::backButton_Click);
        this->backButton->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
        // 
        // nextButton
        // 
        this->nextButton->Location = System::Drawing::Point(740, 580);
        this->nextButton->Size = System::Drawing::Size(140, 45);
        this->nextButton->Text = L"Вперед";
        this->nextButton->UseVisualStyleBackColor = true;
        this->nextButton->Click += gcnew System::EventHandler(this, &MyForm::nextButton_Click);
        this->nextButton->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
        // 
        // MyForm
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(900, 650);
        this->Controls->Add(this->nextButton);
        this->Controls->Add(this->backButton);
        this->Controls->Add(this->optionsPanel);
        this->Controls->Add(this->questionLabel);
        this->Controls->Add(this->titleLabel);
        this->Controls->Add(this->topPanel);
        this->Name = L"MyForm";
        this->Text = L"Тест по Смешарикам";
        this->ResumeLayout(false);
        this->PerformLayout();
    }
};