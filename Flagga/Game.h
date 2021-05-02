#pragma once
/*
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iostream>  
#include<sstream>  
*/

namespace Flagga {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::PictureBox^ p;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ button2;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs�ugi projektanta � nie nale�y modyfikowa�
		/// jej zawarto�ci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->p = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p))->BeginInit();
			this->SuspendLayout();
			// 
			// p
			// 
			this->p->Location = System::Drawing::Point(294, 188);
			this->p->Name = L"p";
			this->p->Size = System::Drawing::Size(100, 100);
			this->p->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->p->TabIndex = 9;
			this->p->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1880, 80);
			this->textBox1->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1413, 98);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(344, 75);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Spr";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(586, 572);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 31);
			this->label1->TabIndex = 12;
			this->label1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(323, 585);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 31);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Punkty:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(435, 585);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 31);
			this->label3->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1393, 198);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(378, 115);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->p);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1038);
			this->Name = L"Game";
			this->Text = L"Game";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int los;
		String^ odp;
		int punkty = 0;
		bool win=false;

	public: void gol()
	{

		Random^ ran = gcnew Random;
		los = ran->Next(1, 21);

		String^ tekst;
		tekst = Convert::ToString(los);
		this->p->Image = Image::FromFile("flag/" + tekst + "fla" + ".png");
		if (punkty <= 200)
		{
			switch (los)
			{
			case 1:
				odp = "Andora";
				break;
			case 2:
				odp = "Zjednoczone Emiraty Arabskie";
				//label4->Text = odp;
				break;
			case 3:
				odp = "Afganistan";
				//label4->Text = odp;
				break;
			case 4:
				odp = "Antigua i Barbuda";
				//label4->Text = odp;
				break;
			case 5:
				odp = "Angola";
				//label4->Text = odp;
				break;
			case 6:
				odp = "Albania";
				//label4->Text = odp;
				break;
			case 7:
				odp = "Armenia";
				//label4->Text = odp;
				break;
			case 8:
				odp = "Argentyna";
				//label4->Text = odp;
				break;
			case 9:
				odp = "Austria";
				//label4->Text = odp;
				break;
			case 10:
				odp = "Australia";
				//label4->Text = odp;
				break;
			case 11:
				odp = "Wyspy Alandzkie";
				//label4->Text = odp;
				break;
			case 12:
				odp = "Azerbejdzan";
				//label4->Text = odp;
				break;
			case 13:
				odp = "Bosnia i Hercegowina";
				//label4->Text = odp;
				break;
			case 14:
				odp = "Barbados";
				//label4->Text = odp;
				break;
			case 15:
				odp = "Bangladesz";
				//label4->Text = odp;
				break;
			case 16:
				odp = "Belgia";
				//label4->Text = odp;
				break;
			case 17:
				odp = "Burkina Faso";
				//label4->Text = odp;
				break;
			case 18:
				odp = "Bulgaria";
				//label4->Text = odp;
				break;
			case 19:
				
				odp = "Bahrajn";
				//label4->Text = odp;
				break;
			case 20:
				
				odp = "Burundi";
				//label4->Text = odp;
				break;
			}
				/*case 10:
					odp = "Australia";
					break;
				case 10:
					odp = "Australia";
					break;
				case 10:
					odp = "Australia";
					break;
				case 10:
					odp = "Australia";
					break;*/
			
		}
		else if(punkty > 200){


		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (punkty < 200) {
			win = false;

			if (textBox1->Text == odp)
			{
				punkty = punkty + 20;
				label3->Text = Convert::ToString(punkty);
				gol();
				textBox1->Text = "";
				label1->Text = "";

			}
			else
			{
				punkty = punkty - 20;
				label3->Text = Convert::ToString(punkty);
				label1->Text = "Blad";
				textBox1->Text = "";

			}
		}
		else if(punkty==200){
			win = true;
			label1->Text = "Wygrana";
			punkty = 0;
			p->Visible = false;
			textBox1->Text = "";
			button2->Visible = true;
			label2->Visible = true;
			label3->Visible = true;
		}
	}



	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
		gol();
	}



};
}
