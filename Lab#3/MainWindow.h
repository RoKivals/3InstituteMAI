#pragma once
#include "../Linear.h"
#include "../Linear_Equation_GUI/Tools.h"
#include "Graphic.h"

namespace LinearEquationGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form {
	public:
		MainWindow(void) {
			InitializeComponent();
			// Создаём объект линейного уравнения
			this->equa = new Linear();
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainWindow() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ k_coef_text;
	private: System::Windows::Forms::TextBox^ b_coef_text;
	private: System::Windows::Forms::Button^ solution_equ;
	private: System::Windows::Forms::Button^ button2;
	private: Linear* equa;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void) {
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->k_coef_text = (gcnew System::Windows::Forms::TextBox());
			this->b_coef_text = (gcnew System::Windows::Forms::TextBox());
			this->solution_equ = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label1->Location = System::Drawing::Point(344, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Линейное уравнение вида:\r\ny = k*x + b\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(274, 172);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(201, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите коэффицент k: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(274, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Введите коэффицент b: ";
			// 
			// k_coef_text
			// 
			this->k_coef_text->Location = System::Drawing::Point(490, 172);
			this->k_coef_text->Name = L"k_coef_text";
			this->k_coef_text->Size = System::Drawing::Size(100, 20);
			this->k_coef_text->TabIndex = 3;
			this->k_coef_text->Text = L"1";
			this->k_coef_text->Leave += gcnew System::EventHandler(this, &MainWindow::k_coef_text_Leave);
			// 
			// b_coef_text
			// 
			this->b_coef_text->Location = System::Drawing::Point(490, 208);
			this->b_coef_text->Name = L"b_coef_text";
			this->b_coef_text->Size = System::Drawing::Size(100, 20);
			this->b_coef_text->TabIndex = 4;
			this->b_coef_text->Text = L"0";
			this->b_coef_text->Leave += gcnew System::EventHandler(this, &MainWindow::b_coef_text_Leave);
			// 
			// solution_equ
			// 
			this->solution_equ->AutoSize = true;
			this->solution_equ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->solution_equ->Location = System::Drawing::Point(348, 251);
			this->solution_equ->Name = L"solution_equ";
			this->solution_equ->Size = System::Drawing::Size(220, 28);
			this->solution_equ->TabIndex = 5;
			this->solution_equ->Text = L"Найти значение X, при Y = 0";
			this->solution_equ->UseVisualStyleBackColor = true;
			this->solution_equ->Click += gcnew System::EventHandler(this, &MainWindow::solution_equ_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(348, 302);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(220, 28);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Нарисовать график функции";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 411);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->solution_equ);
			this->Controls->Add(this->b_coef_text);
			this->Controls->Add(this->k_coef_text);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Линейное уравнение";
			this->ResumeLayout(false);
			this->PerformLayout();

		};

		System::Void k_coef_text_Leave(System::Object^ sender, System::EventArgs^ e) {
			System::String^ k_coef = k_coef_text->Text->Trim();
			double new_coef;
			if (k_coef != String::Empty) {
				if (!double::TryParse(k_coef, new_coef)) {
					MessageBox::Show("Убедитесь, что вы ввели в поле именно число!\n" +
						"Десятичное число записывается через запятую");
				} else if (new_coef == 0.) {
					MessageBox::Show("У линейного уравнения коэффицент k не может быть равен нулю");
					k_coef_text->Text = equa->get_k().ToString();
				} else {
					MainWindow::equa->set_k(new_coef);
				}
			} else {
				k_coef_text->Text = equa->get_k().ToString();
			}
		}

		System::Void b_coef_text_Leave(System::Object^ sender, System::EventArgs^ e) {
			System::String^ b_coef = b_coef_text->Text->Trim();
			double new_coef;
			if (b_coef != String::Empty) {
				if (!double::TryParse(b_coef, new_coef)) {
					MessageBox::Show("Убедитесь, что вы ввели в поле именно число!\n" +
						"Десятичное число записывается через запятую");
				} else {
					MainWindow::equa->set_b(new_coef);
				}
			} else {
				b_coef_text->Text = equa->get_b().ToString();
			}
		}

		System::Void solution_equ_Click(System::Object^ sender, System::EventArgs^ e) {
			System::String^ err;
			if (k_coef_text->Text == String::Empty) {
			}
			if (b_coef_text->Text == String::Empty) {
				err = err + "Коэффицент b не указан.\n";
			}
			if (err != nullptr) {
				MessageBox::Show((err == String::Empty).ToString());
			} else {
				double result;
				result = equa->get_x_of_homogeneous_equation();
				MessageBox::Show("Решение уравнения при Y = 0: " + result);
			}
		}

		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			Graphic^ graph_form = gcnew Graphic(equa);
			graph_form->Show();
		}
	};
}