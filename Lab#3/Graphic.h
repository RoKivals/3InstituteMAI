#pragma once
#include "../Linear.h"

namespace LinearEquationGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Graphic
	/// </summary>
	public ref class Graphic : public System::Windows::Forms::Form
	{
	public:
		Graphic(Linear* eq) {
			InitializeComponent();
			int unit = 20; //��� � ��������
			
			int area_Width = graph_area->Width, area_Height = graph_area->Height;
			Bitmap^ img = gcnew Bitmap(area_Width, area_Height);
			//������� ����������� ��� ��������� (�����������) � �������� �������� ���������� PictureBox
			Graphics^ g = Graphics::FromImage(img); //������� ���������� ��� ��������� �� �����������
			//������� �������� � ������ ����� ����:
			int center_X = int(area_Width / 2);
			int center_Y = int(area_Height / 2);
			// ��� �������
			g->DrawLine(Pens::Black, center_X, 0, center_X, area_Height);
			// ��� ��������
			g->DrawLine(Pens::Black, 0, center_Y, area_Width, center_Y);
			//�������������� ��� Y ��� �������� ����������
			g->ScaleTransform(1, -1); 
			//������� ������� ���������� �� ����������� ����
			g->TranslateTransform((float)center_X, -(float)center_Y);
			g->DrawLine(Pens::Blue, PointF(-20. * unit, eq->calculate_y_from_x(-20.) * unit),
				PointF(20. * unit, eq->calculate_y_from_x(20.) * unit));
			delete g;
			// ����������� ������� �� picturebox
			this->graph_area->Image = img;
			
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Graphic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ graph_area;
	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->graph_area = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graph_area))->BeginInit();
			this->SuspendLayout();
			// 
			// graph_area
			// 
			this->graph_area->Dock = System::Windows::Forms::DockStyle::Fill;
			this->graph_area->Location = System::Drawing::Point(0, 0);
			this->graph_area->Name = L"graph_area";
			this->graph_area->Size = System::Drawing::Size(884, 411);
			this->graph_area->TabIndex = 0;
			this->graph_area->TabStop = false;
			// 
			// Graphic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 411);
			this->Controls->Add(this->graph_area);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Graphic";
			this->Text = L"Graphic";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graph_area))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
