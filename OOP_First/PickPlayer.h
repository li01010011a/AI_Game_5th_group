#pragma once
//#include "MainForm.h"
namespace OOPFirst {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PickPlayer
	/// </summary>
	public ref class PickPlayer : public System::Windows::Forms::Form
	{
	public:
		PickPlayer(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		int player; // 0 for player 1, 1 for player 2
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PickPlayer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ player1;
	private: System::Windows::Forms::Button^ player2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->player1 = (gcnew System::Windows::Forms::Button());
			this->player2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(169, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"You are: ";
			// 
			// player1
			// 
			this->player1->BackColor = System::Drawing::Color::LightCoral;
			this->player1->Location = System::Drawing::Point(81, 279);
			this->player1->Name = L"player1";
			this->player1->Size = System::Drawing::Size(115, 51);
			this->player1->TabIndex = 1;
			this->player1->Text = L"Player 1";
			this->player1->UseVisualStyleBackColor = false;
			this->player1->Click += gcnew System::EventHandler(this, &PickPlayer::player1_Click);
			// 
			// player2
			// 
			this->player2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->player2->Location = System::Drawing::Point(338, 279);
			this->player2->Name = L"player2";
			this->player2->Size = System::Drawing::Size(115, 51);
			this->player2->TabIndex = 2;
			this->player2->Text = L"Player 2";
			this->player2->UseVisualStyleBackColor = false;
			this->player2->Click += gcnew System::EventHandler(this, &PickPlayer::player2_Click);
			// 
			// PickPlayer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 447);
			this->Controls->Add(this->player2);
			this->Controls->Add(this->player1);
			this->Controls->Add(this->label1);
			this->Name = L"PickPlayer";
			this->Text = L"PickPlayer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void player1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "You are Player 1";
		player = 0;
		PickPlayer::Hide();
	}
	private: System::Void player2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "You are Player 2";
		player = 1;
		PickPlayer::Hide();
	}
	};
}
