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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->p = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::textBox1_KeyUp);
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
			this->button2->Location = System::Drawing::Point(1514, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(378, 115);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Game::button2_Click);
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
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->p);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
		los = ran->Next(1, 101);

		String^ tekst;
		tekst = Convert::ToString(los);
		this->p->Image = Image::FromFile("flag/" + tekst + "fla" + ".png");
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
			case 21:
				odp = "Benin";
				break;
			case 22:
				odp = "Brunei";
				break;
			case 23:
				odp = "Boliwia";
				break;
			case 24:
				odp = "Brazylia";
				break;
			case 25:
				odp = "Bahamy";
				break;
			case 26:
				odp = "Bhutan";
				break;	
			case 27:
					odp = "Norwegia";
					break;
			case 28:
				odp = "Botswana";
				break;
			case 29:
				odp = "Bialorus";
				break;
			case 30:
				odp = "Belize";
				break;
			case 31:
				odp = "Kanada";
				break;
			case 32:
				odp = "Demokratyczna Republika Konga";
				break;
			case 33:
				odp = "Republika srodkowoafrykanska";
				break;
			case 34:
				odp = "Kongo";
				break;
			case 35:
				odp = "Szwajcaria";
				break;
			case 36:
				odp = "Wybrzeze Kosci Sloniowej";
				break;
			case 37:
				odp = "Chile";
				break;
			case 38:
				odp = "Kamerun";
				break;
			case 39:
				odp = "Chiny";
				break;
			case 40:
				odp = "Kolumbia";
				break;
			case 41:
				odp = "Kostaryka";
				break;
			case 42:
				odp = "Kuba";
				break;
			case 43:
				odp = "Republika Zielonego Przyladka";
				break;
			case 44:
				odp = "Cypr";
				break;
			case 45:
				odp = "Czechy";
				break;
			case 46:
				odp = "Niemcy";
				break;
			case 47:
				odp = "Dzibuti";
				break;
			case 48:
				odp = "Dania";
				break;
			case 49:
				odp = "Dominika";
				break;
			case 50:
				odp = "Dominikana";
				break;
				case 51:
				odp = "Algieria";
				break;
				case 52:
				odp = "Ekwador";
				break;
				case 53:
				odp = "Estonia";
				break;
				case 54:
				odp = "Egipt";
				break;
				case 55:
				odp = "Sahara Zachodnia";;
				break;
								case 56:
				odp = "Sahara Zachodnia";;
				break;		
		case 57:
				odp = "Hiszpania";
				break;		
						case 58:
				odp = "Etiopia";
				break;		
						case 59:
				odp = "Finlandia";
				break;		
						case 60:
				odp = "Fidzi";
				break;		
						case 61:
				odp = "Mikronezja";
				break;		
						case 62:
				odp = "Wyspy Owcze";
				break;		
						case 63:
				odp = "Francja";
				break;		
						case 64:
				odp = "Gabon";
				break;		
						case 65:
				odp = "Wielka  Brytania";
				break;		
						case 66:
				odp = "Grenada";
				break;		
						case 67:
				odp = "Gruzja";
				break;		
						case 68:
				odp = "Gujana Francuska";
				break;		
						case 69:
				odp = "Ghana";
				break;		
						case 70:
				odp = "Grenlandia";
				break;		
						case 71:
				odp = "Gambia";
				break;		
						case 72:
				odp = "Gwinea";
				break;		
						case 73:
				odp = "Gwinea Rownikowa";
				break;		
						case 74:
				odp = "Grecja";
				break;		
						case 75:
				odp = "Gwatemala";
				break;		
						case 76:
				odp = "Gwinea Bissau";
				break;		
						case 77:
				odp = "Gujana";
				break;		
						case 78:
				odp = "Hong Kong";
				break;		
						case 79:
				odp = "Honduras";
				break;		
						case 80:
				odp = "Chorwacja";
				break;		
						case 81:
				odp = "Haiti";
				break;		
						case 82:
				odp = "Wegry";
				break;		
						case 83:
				odp = "Monako";
				break;		
						case 84:
				odp = "Irlandia";
				break;		
						case 85:
				odp = "Izrael";
				break;		
						case 86:
				odp = "Indie";
				break;		
						case 87:
				odp = "Irak";
				break;		
						case 88:
				odp = "Iran";
				break;		
						case 89:
				odp = "Islandia";
				break;		
						case 90:
				odp = "Wlochy";
				break;		
						case 91:
				odp = "Jamajka";
				break;		
						case 92:
				odp = "Jordania";
				break;		
						case 93:
				odp = "Japonia";
				break;		
						case 94:
				odp = "Kenia";
				break;		
						case 95:
				odp = "Kirgistan";
				break;		
						case 96:
				odp = "Kambodza";
				break;		
						case 97:
				odp = "Kiribati";
				break;		
						case 98:
				odp = "Komory";
				break;		
						case 99:
				odp = "Saint Kitts i Nevis";
				break;		
						case 100:
				odp = "Korea Polnocna";
				break;		
						
				

			}
			
	
	}



	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
		gol();
	}



private: System::Void textBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
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
		else if (punkty == 200) {
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
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	win = false;
	p->Visible = true;
	button2->Visible = false;
	label1->Visible = false;
	label3->Text = "0";
	gol();
	
}
};
}
