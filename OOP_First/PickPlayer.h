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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ mini_max;
	private: System::Windows::Forms::Button^ alpha_beta;
	public:
	public:
		int player; // 0 for player 1, 1 for player 2
		int algorithm;// 0 for minimax, 1 for alphabeta
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->mini_max = (gcnew System::Windows::Forms::Button());
			this->alpha_beta = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(156, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"You are: ";
			// 
			// player1
			// 
			this->player1->BackColor = System::Drawing::Color::LightCoral;
			this->player1->Location = System::Drawing::Point(55, 124);
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
			this->player2->Location = System::Drawing::Point(374, 124);
			this->player2->Name = L"player2";
			this->player2->Size = System::Drawing::Size(115, 51);
			this->player2->TabIndex = 2;
			this->player2->Text = L"Player 2";
			this->player2->UseVisualStyleBackColor = false;
			this->player2->Click += gcnew System::EventHandler(this, &PickPlayer::player2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(46, 208);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(487, 54);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Choose Algorithm";
			// 
			// mini_max
			// 
			this->mini_max->BackColor = System::Drawing::Color::Khaki;
			this->mini_max->Location = System::Drawing::Point(55, 349);
			this->mini_max->Name = L"mini_max";
			this->mini_max->Size = System::Drawing::Size(112, 47);
			this->mini_max->TabIndex = 4;
			this->mini_max->Text = L"MiniMax";
			this->mini_max->UseVisualStyleBackColor = false;
			this->mini_max->Click += gcnew System::EventHandler(this, &PickPlayer::mini_max_Click);
			// 
			// alpha_beta
			// 
			this->alpha_beta->BackColor = System::Drawing::Color::PaleGreen;
			this->alpha_beta->Location = System::Drawing::Point(374, 349);
			this->alpha_beta->Name = L"alpha_beta";
			this->alpha_beta->Size = System::Drawing::Size(115, 47);
			this->alpha_beta->TabIndex = 5;
			this->alpha_beta->Text = L"AlphaBeta";
			this->alpha_beta->UseVisualStyleBackColor = false;
			this->alpha_beta->Click += gcnew System::EventHandler(this, &PickPlayer::alpha_beta_Click);
			// 
			// PickPlayer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 447);
			this->Controls->Add(this->alpha_beta);
			this->Controls->Add(this->mini_max);
			this->Controls->Add(this->label2);
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
		//PickPlayer::Hide();
	}
	private: System::Void player2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "You are Player 2";
		player = 1;
		//PickPlayer::Hide();
	}
	private: System::Void alpha_beta_Click(System::Object^ sender, System::EventArgs^ e) {
		algorithm = 1;
		PickPlayer::Hide();
	}
	private: System::Void mini_max_Click(System::Object^ sender, System::EventArgs^ e) {
		algorithm = 0;
		PickPlayer::Hide();
	}
};
}
