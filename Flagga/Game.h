#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iostream>  
#include<sstream>  


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
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ go;
	private: System::Windows::Forms::PictureBox^ p;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->go = (gcnew System::Windows::Forms::Button());
			this->p = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p))->BeginInit();
			this->SuspendLayout();
			// 
			// go
			// 
			this->go->Location = System::Drawing::Point(1556, 166);
			this->go->Name = L"go";
			this->go->Size = System::Drawing::Size(218, 164);
			this->go->TabIndex = 2;
			this->go->Text = L"go";
			this->go->UseVisualStyleBackColor = true;
			this->go->Click += gcnew System::EventHandler(this, &Game::go_Click);
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
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->p);
			this->Controls->Add(this->go);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1038);
			this->Name = L"Game";
			this->Text = L"Game";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
     Int16^ los;
	 int lol;
	private: System::Void go_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ ran = gcnew Random;
		lol = ran->Next(1, 5);
		String^ tekst; 
		tekst = Convert::ToString(lol);
		this->p->Image = Image::FromFile("flag/"+ tekst + "fla"+ ".png");

	

	}




};
}
