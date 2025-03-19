#pragma once
#include <cstdlib>
#include "Game.h"
#include "PickPlayer.h"

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
	private: System::Windows::Forms::PictureBox^ frame_info;
	private: System::Windows::Forms::PictureBox^ frame_author_info;
	private: System::Windows::Forms::PictureBox^ frame_side_info;
	private: System::Windows::Forms::Button^ btn_hide;
	private: System::Windows::Forms::Button^ btn_show;
	private: System::Windows::Forms::PictureBox^ frame_start_game;
	public: System::Windows::Forms::Label^ label1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->frame = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->frame_info = (gcnew System::Windows::Forms::PictureBox());
			this->frame_author_info = (gcnew System::Windows::Forms::PictureBox());
			this->frame_side_info = (gcnew System::Windows::Forms::PictureBox());
			this->btn_hide = (gcnew System::Windows::Forms::Button());
			this->btn_show = (gcnew System::Windows::Forms::Button());
			this->frame_start_game = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame_info))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame_author_info))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame_side_info))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame_start_game))->BeginInit();
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
			this->frame->Size = System::Drawing::Size(1250, 490);
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
			// frame_info
			// 
			this->frame_info->Location = System::Drawing::Point(1, 583);
			this->frame_info->Name = L"frame_info";
			this->frame_info->Size = System::Drawing::Size(1018, 114);
			this->frame_info->TabIndex = 3;
			this->frame_info->TabStop = false;
			// 
			// frame_author_info
			// 
			this->frame_author_info->Location = System::Drawing::Point(228, 757);
			this->frame_author_info->Name = L"frame_author_info";
			this->frame_author_info->Size = System::Drawing::Size(685, 50);
			this->frame_author_info->TabIndex = 4;
			this->frame_author_info->TabStop = false;
			// 
			// frame_side_info
			// 
			this->frame_side_info->Location = System::Drawing::Point(1279, 50);
			this->frame_side_info->Name = L"frame_side_info";
			this->frame_side_info->Size = System::Drawing::Size(234, 490);
			this->frame_side_info->TabIndex = 5;
			this->frame_side_info->TabStop = false;
			// 
			// btn_hide
			// 
			this->btn_hide->Location = System::Drawing::Point(1279, 6);
			this->btn_hide->Name = L"btn_hide";
			this->btn_hide->Size = System::Drawing::Size(106, 34);
			this->btn_hide->TabIndex = 6;
			this->btn_hide->Text = L"Hide";
			this->btn_hide->UseVisualStyleBackColor = true;
			this->btn_hide->Click += gcnew System::EventHandler(this, &MainForm::btn_delete_Click);
			// 
			// btn_show
			// 
			this->btn_show->Location = System::Drawing::Point(1399, 7);
			this->btn_show->Name = L"btn_show";
			this->btn_show->Size = System::Drawing::Size(104, 33);
			this->btn_show->TabIndex = 7;
			this->btn_show->Text = L"Show";
			this->btn_show->UseVisualStyleBackColor = true;
			this->btn_show->Click += gcnew System::EventHandler(this, &MainForm::btn_show_Click);
			// 
			// frame_start_game
			// 
			this->frame_start_game->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"frame_start_game.BackgroundImage")));
			this->frame_start_game->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->frame_start_game->Location = System::Drawing::Point(1, 3);
			this->frame_start_game->Name = L"frame_start_game";
			this->frame_start_game->Size = System::Drawing::Size(1536, 867);
			this->frame_start_game->TabIndex = 8;
			this->frame_start_game->TabStop = false;
			this->frame_start_game->Click += gcnew System::EventHandler(this, &MainForm::frame_start_game_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1284, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 23);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Win Count: AI/Human";
			this->label1->Visible = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1536, 866);
			this->Controls->Add(this->frame);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_show);
			this->Controls->Add(this->btn_hide);
			this->Controls->Add(this->frame_side_info);
			this->Controls->Add(this->frame_author_info);
			this->Controls->Add(this->frame_info);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->frame_start_game);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FirstOOP";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame_info))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame_author_info))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame_side_info))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame_start_game))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Game g;
		Graphics^ grp = frame->CreateGraphics();
		Graphics^ grp_info = frame_info->CreateGraphics();
		Graphics^ grp_author_info = frame_author_info->CreateGraphics();
		Graphics^ grp_side_info = frame_side_info->CreateGraphics();
		frame_side_info->Visible = true;
		label1->Visible = true;
		grp->Clear(Color::White);
		grp_info->Clear(Color::LightYellow);
		grp_author_info->Clear(Color::PaleGoldenrod);
		grp_side_info->Clear(Color::SlateBlue);
		System::String^ user_input = textBox1->Text;
		Int32::TryParse(user_input, g.random_array_size);
		g.randoms = g.GenerateRandomNums(g.random_array_size);
		g.PrintIntVector(grp_info, g.randoms, (frame_info->Width) / 4, (frame_info->Height) / 2, 0, 0, 0);
		
		g.PrintStringAsCharArray(grp_author_info, "Author: 5th Group", 50, (frame_author_info->Height/10));
		GameTree* root = new GameTree(g.randoms);
		//root->FullfillGameTreeBackup(root, g.randoms);
		root->GameTreeCertainLevel(root, g.randoms, 2);
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
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	frame_side_info->Visible = false;
}
private: System::Void btn_show_Click(System::Object^ sender, System::EventArgs^ e) {
	frame_side_info->Visible = true;
	Graphics^ grp_side_info = frame_side_info->CreateGraphics();
	grp_side_info->Clear(Color::SlateBlue);
}
private: System::Void frame_start_game_Click(System::Object^ sender, System::EventArgs^ e) {
	frame_start_game->Visible = false;
	PickPlayer^ pickPlayer = gcnew PickPlayer();
	pickPlayer->ShowDialog();
	label1->Text = pickPlayer->player;
}

};
}
