#pragma once
#include "First.h"
#include <cstdlib>
#include "Game.h"

namespace OOPFirst {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^ frame;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->frame = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(326, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generate Random";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// frame
			// 
			this->frame->Location = System::Drawing::Point(12, 50);
			this->frame->Name = L"frame";
			this->frame->Size = System::Drawing::Size(1250, 738);
			this->frame->TabIndex = 1;
			this->frame->TabStop = false;
			this->frame->Click += gcnew System::EventHandler(this, &MainForm::frame_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(26, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(294, 26);
			this->textBox1->TabIndex = 2;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1270, 800);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->frame);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FirstOOP";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Game g;
		Graphics^ grp = frame->CreateGraphics();
		System::String^ user_input = textBox1->Text;
		Int32::TryParse(user_input, g.random_array_size);
		g.randoms = g.GenerateRandomNums(g.random_array_size);
		g.PrintIntVector(grp, g.randoms, (frame->Width) / 4, (frame->Height) / 2, 0, 0, 0);
		
		g.PrintStringAsCharArray(grp, "Author: Lidija.Sokolova", 50, (frame->Height) - 150);
		GameTree* root = new GameTree(g.randoms);
		root->FullfillGameTreeBackup(root, g.randoms);
		root->PrintGameTree(grp, root, 0, (1280 - 50) / 3, 0);

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		/*Game first;
		Graphics^ grp = frame->CreateGraphics();
		int g = rand() % 255;
		first.draw(grp,"Hello",  0, 0, 0, g, 0);*/

	}
	private: System::Void frame_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
