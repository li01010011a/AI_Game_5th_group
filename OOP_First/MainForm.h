#pragma once
#include <cstdlib>
#include "Game.h"
#include "PickPlayer.h"
#include "Player.h"

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
	private: System::Windows::Forms::TextBox^ user_number;
	public:
	private: System::Windows::Forms::Button^ btn_user_number;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ ai_score;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ human_score;
	private: System::Windows::Forms::Label^ wins_label;
	private: System::Windows::Forms::Label^ max_player_label;
	private: System::Windows::Forms::Label^ ai_score_label;
	private: System::Windows::Forms::Label^ human_score_label;
	private: System::Windows::Forms::Label^ draw_score_label;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ game_count_label;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ game_prediction_frame;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ minimaxname;
	private: System::Windows::Forms::Label^ mini_max_pred_label;
	private: System::Windows::Forms::Label^ alpha_beta_pred;
	private: System::Windows::Forms::Label^ alpha_beta_pred_label;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;






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
			this->user_number = (gcnew System::Windows::Forms::TextBox());
			this->btn_user_number = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ai_score = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->human_score = (gcnew System::Windows::Forms::Label());
			this->wins_label = (gcnew System::Windows::Forms::Label());
			this->max_player_label = (gcnew System::Windows::Forms::Label());
			this->ai_score_label = (gcnew System::Windows::Forms::Label());
			this->human_score_label = (gcnew System::Windows::Forms::Label());
			this->draw_score_label = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->game_count_label = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->game_prediction_frame = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->minimaxname = (gcnew System::Windows::Forms::Label());
			this->mini_max_pred_label = (gcnew System::Windows::Forms::Label());
			this->alpha_beta_pred = (gcnew System::Windows::Forms::Label());
			this->alpha_beta_pred_label = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame_info))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame_author_info))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame_side_info))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame_start_game))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->game_prediction_frame))->BeginInit();
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
			this->frame_info->Click += gcnew System::EventHandler(this, &MainForm::frame_info_Click);
			// 
			// frame_author_info
			// 
			this->frame_author_info->Location = System::Drawing::Point(1, 752);
			this->frame_author_info->Name = L"frame_author_info";
			this->frame_author_info->Size = System::Drawing::Size(1018, 102);
			this->frame_author_info->TabIndex = 4;
			this->frame_author_info->TabStop = false;
			// 
			// frame_side_info
			// 
			this->frame_side_info->Location = System::Drawing::Point(1268, 53);
			this->frame_side_info->Name = L"frame_side_info";
			this->frame_side_info->Size = System::Drawing::Size(269, 267);
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
			this->btn_show->Size = System::Drawing::Size(125, 33);
			this->btn_show->TabIndex = 7;
			this->btn_show->Text = L"Restart Game";
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
			this->label1->Location = System::Drawing::Point(1269, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 23);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Win Count:AI/Human/Draw";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// user_number
			// 
			this->user_number->Location = System::Drawing::Point(521, 10);
			this->user_number->Name = L"user_number";
			this->user_number->Size = System::Drawing::Size(169, 26);
			this->user_number->TabIndex = 10;
			// 
			// btn_user_number
			// 
			this->btn_user_number->Location = System::Drawing::Point(707, 12);
			this->btn_user_number->Name = L"btn_user_number";
			this->btn_user_number->Size = System::Drawing::Size(115, 24);
			this->btn_user_number->TabIndex = 11;
			this->btn_user_number->Text = L"Choose number";
			this->btn_user_number->UseVisualStyleBackColor = true;
			this->btn_user_number->Click += gcnew System::EventHandler(this, &MainForm::btn_user_number_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(879, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"AI Score:";
			// 
			// ai_score
			// 
			this->ai_score->AutoSize = true;
			this->ai_score->Location = System::Drawing::Point(952, 16);
			this->ai_score->Name = L"ai_score";
			this->ai_score->Size = System::Drawing::Size(32, 20);
			this->ai_score->TabIndex = 13;
			this->ai_score->Text = L"[---]";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1016, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Human score:";
			// 
			// human_score
			// 
			this->human_score->AutoSize = true;
			this->human_score->Location = System::Drawing::Point(1121, 16);
			this->human_score->Name = L"human_score";
			this->human_score->Size = System::Drawing::Size(32, 20);
			this->human_score->TabIndex = 15;
			this->human_score->Text = L"[---]";
			// 
			// wins_label
			// 
			this->wins_label->AutoSize = true;
			this->wins_label->Font = (gcnew System::Drawing::Font(L"Elephant", 9.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wins_label->ForeColor = System::Drawing::Color::IndianRed;
			this->wins_label->Location = System::Drawing::Point(1285, 241);
			this->wins_label->Name = L"wins_label";
			this->wins_label->Size = System::Drawing::Size(30, 26);
			this->wins_label->TabIndex = 16;
			this->wins_label->Text = L"...";
			this->wins_label->Click += gcnew System::EventHandler(this, &MainForm::wins_label_Click);
			// 
			// max_player_label
			// 
			this->max_player_label->AutoSize = true;
			this->max_player_label->Font = (gcnew System::Drawing::Font(L"Elephant", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->max_player_label->Location = System::Drawing::Point(1274, 104);
			this->max_player_label->Name = L"max_player_label";
			this->max_player_label->Size = System::Drawing::Size(143, 29);
			this->max_player_label->TabIndex = 17;
			this->max_player_label->Text = L"MaxPlayer";
			this->max_player_label->Click += gcnew System::EventHandler(this, &MainForm::max_player_label_Click);
			// 
			// ai_score_label
			// 
			this->ai_score_label->AutoSize = true;
			this->ai_score_label->Location = System::Drawing::Point(1294, 185);
			this->ai_score_label->Name = L"ai_score_label";
			this->ai_score_label->Size = System::Drawing::Size(21, 20);
			this->ai_score_label->TabIndex = 18;
			this->ai_score_label->Text = L"...";
			// 
			// human_score_label
			// 
			this->human_score_label->AutoSize = true;
			this->human_score_label->Location = System::Drawing::Point(1374, 185);
			this->human_score_label->Name = L"human_score_label";
			this->human_score_label->Size = System::Drawing::Size(21, 20);
			this->human_score_label->TabIndex = 19;
			this->human_score_label->Text = L"...";
			// 
			// draw_score_label
			// 
			this->draw_score_label->AutoSize = true;
			this->draw_score_label->Location = System::Drawing::Point(1463, 185);
			this->draw_score_label->Name = L"draw_score_label";
			this->draw_score_label->Size = System::Drawing::Size(18, 20);
			this->draw_score_label->TabIndex = 20;
			this->draw_score_label->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Elephant", 9.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1274, 279);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 26);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Game count:";
			// 
			// game_count_label
			// 
			this->game_count_label->AutoSize = true;
			this->game_count_label->Location = System::Drawing::Point(1430, 283);
			this->game_count_label->Name = L"game_count_label";
			this->game_count_label->Size = System::Drawing::Size(18, 20);
			this->game_count_label->TabIndex = 22;
			this->game_count_label->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Elephant", 9.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1274, 215);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 26);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Game result:";
			this->label5->Click += gcnew System::EventHandler(this, &MainForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Elephant", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1273, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(192, 31);
			this->label6->TabIndex = 24;
			this->label6->Text = L"GAME INFO";
			// 
			// game_prediction_frame
			// 
			this->game_prediction_frame->Location = System::Drawing::Point(1268, 326);
			this->game_prediction_frame->Name = L"game_prediction_frame";
			this->game_prediction_frame->Size = System::Drawing::Size(269, 214);
			this->game_prediction_frame->TabIndex = 25;
			this->game_prediction_frame->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Elephant", 9.999999F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1276, 342);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(244, 26);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Game prediction using:";
			this->label7->Click += gcnew System::EventHandler(this, &MainForm::label7_Click);
			// 
			// minimaxname
			// 
			this->minimaxname->AutoSize = true;
			this->minimaxname->Font = (gcnew System::Drawing::Font(L"Elephant", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minimaxname->Location = System::Drawing::Point(1277, 377);
			this->minimaxname->Name = L"minimaxname";
			this->minimaxname->Size = System::Drawing::Size(103, 24);
			this->minimaxname->TabIndex = 27;
			this->minimaxname->Text = L"MiniMax: ";
			// 
			// mini_max_pred_label
			// 
			this->mini_max_pred_label->AutoSize = true;
			this->mini_max_pred_label->Location = System::Drawing::Point(1414, 377);
			this->mini_max_pred_label->Name = L"mini_max_pred_label";
			this->mini_max_pred_label->Size = System::Drawing::Size(21, 20);
			this->mini_max_pred_label->TabIndex = 28;
			this->mini_max_pred_label->Text = L"...";
			// 
			// alpha_beta_pred
			// 
			this->alpha_beta_pred->AutoSize = true;
			this->alpha_beta_pred->Font = (gcnew System::Drawing::Font(L"Elephant", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->alpha_beta_pred->Location = System::Drawing::Point(1277, 414);
			this->alpha_beta_pred->Name = L"alpha_beta_pred";
			this->alpha_beta_pred->Size = System::Drawing::Size(111, 24);
			this->alpha_beta_pred->TabIndex = 29;
			this->alpha_beta_pred->Text = L"AlphaBeta:";
			// 
			// alpha_beta_pred_label
			// 
			this->alpha_beta_pred_label->AutoSize = true;
			this->alpha_beta_pred_label->Location = System::Drawing::Point(1414, 414);
			this->alpha_beta_pred_label->Name = L"alpha_beta_pred_label";
			this->alpha_beta_pred_label->Size = System::Drawing::Size(21, 20);
			this->alpha_beta_pred_label->TabIndex = 30;
			this->alpha_beta_pred_label->Text = L"...";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1307, 438);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 20);
			this->label8->TabIndex = 31;
			this->label8->Text = L"0 - draw";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1307, 458);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(115, 20);
			this->label9->TabIndex = 32;
			this->label9->Text = L"1 - human wins";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1301, 478);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 20);
			this->label10->TabIndex = 33;
			this->label10->Text = L"-1 - AI wins";
			this->label10->Click += gcnew System::EventHandler(this, &MainForm::label10_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1536, 866);
			this->Controls->Add(this->frame_start_game);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->alpha_beta_pred_label);
			this->Controls->Add(this->alpha_beta_pred);
			this->Controls->Add(this->mini_max_pred_label);
			this->Controls->Add(this->minimaxname);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->game_prediction_frame);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->game_count_label);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->draw_score_label);
			this->Controls->Add(this->human_score_label);
			this->Controls->Add(this->ai_score_label);
			this->Controls->Add(this->max_player_label);
			this->Controls->Add(this->wins_label);
			this->Controls->Add(this->human_score);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ai_score);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_user_number);
			this->Controls->Add(this->user_number);
			this->Controls->Add(this->frame);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_show);
			this->Controls->Add(this->btn_hide);
			this->Controls->Add(this->frame_side_info);
			this->Controls->Add(this->frame_author_info);
			this->Controls->Add(this->frame_info);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->game_prediction_frame))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	Game* g = new Game();
	GameTree* root;
	Player* human = new Player(0, 0);
	Player* ai = new Player(0, 0);

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Game g;
		Graphics^ grp = frame->CreateGraphics();
		Graphics^ grp_info = frame_info->CreateGraphics();
		Graphics^ grp_author_info = frame_author_info->CreateGraphics();
		Graphics^ grp_side_info = frame_side_info->CreateGraphics();
		frame_side_info->Visible = true;
		label1->Visible = true;
		ai_score->Text = "0";
		human_score->Text = "0";
		grp->Clear(Color::White);
		grp_info->Clear(Color::LightYellow);
		grp_author_info->Clear(Color::PaleGoldenrod);
		grp_side_info->Clear(Color::SlateBlue);
		System::String^ user_input = textBox1->Text;
		Int32::TryParse(user_input, g->random_array_size);
		g->randoms = g->GenerateRandomNums(g->random_array_size);
		g->PrintIntVector(grp_info, g->randoms, (frame_info->Width) / 10, (frame_info->Height) / 2, 0, 0, 0);
		
		g->PrintStringAsCharArray(grp_author_info, "Author: 5th Group", 50, (frame_author_info->Height/10));
		root = new GameTree(g->randoms);

		//root->FullfillGameTreeWithScoresMiniMax(root, g->randoms, (human->isFirstPlayer?0:1), 0, 0);
		root->GameTreeCertainLevelWithScoresAlphaBeta(root, g->randoms,5, (human->isFirstPlayer ? 0 : 1), 0, 0);
		root->isRoot = 1;
		root->initialVectorSize = g->randoms.size();
		//root->GameTreeCertainLevelWithScores(root,g->randoms, 1, 0, 0, 0);
		root->MarkWinNodes(root);
		root->MarkLowestNodes(root);
		root->RateGameTreeMiniMax(root, 0);
		root->RateGameTreeAlphaBeta(root, 0);
		root->current_node = new GameTree(root->data);
		root->current_node->GameTreeCertainLevel(root->current_node, root->current_node->data, 1); // 0  level will display only root childs
		//root->GameTreeCertainLevel(root,root, g->randoms, 0); // 0  level will display only root childs
		//root->PrintGameTree(grp, root, 0, (1280 - 50) / 3, 0);
		root->PrintGameTreeUserScore(grp, root, 2, (1280 - 50) / 3, 0);
		mini_max_pred_label->Text = root->miniMaxValue.ToString();
		alpha_beta_pred_label->Text = root->alphaBetaValue.ToString();
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
private: System::Void btn_show_Click(System::Object^ sender, System::EventArgs^ e) {//restart game
	frame_side_info->Visible = true;
	Graphics^ grp_side_info = frame_side_info->CreateGraphics();
	grp_side_info->Clear(Color::SlateBlue);
	frame_start_game->Visible = true;
	g->game_count++;
	game_count_label->Text = g->game_count.ToString();
}

private: System::Void frame_start_game_Click(System::Object^ sender, System::EventArgs^ e) {
	frame_start_game->Visible = false;
	PickPlayer^ pickPlayer = gcnew PickPlayer();
	pickPlayer->ShowDialog();
	//label1->Text = pickPlayer->player.ToString();
	human->isFirstPlayer = (pickPlayer->player == 0) ? 1 : 0;
	ai->isFirstPlayer = (pickPlayer->player == 0) ? 0 : 1;
	ai->score = 0;
	human->score = 0;
	if (human->isFirstPlayer) {
		human->isCurrentPlayer = true;
		max_player_label->Text = "MaxPlayer: Human";
	}
	else {
		human->isCurrentPlayer = false;
		ai->isCurrentPlayer = true;
		max_player_label->Text = "MaxPlayer: AI";
	}
}
	   // user picks one of child nodes there 
private: System::Void btn_user_number_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ user_choice = user_number->Text;
	int user_number;
	Int32::TryParse(user_choice, user_number);
	//Game g;
	Graphics^ grp = frame->CreateGraphics();
	grp->Clear(Color::White);

	if (root->current_node->data.size() > 1) {
		if (human->isCurrentPlayer) {
			human->isCurrentPlayer = false;
			ai->isCurrentPlayer = true;
			human->AddPoint();
			human_score->Text = human->score.ToString();
		}
		else {
			ai->isCurrentPlayer = false;
			human->isCurrentPlayer = true;
			ai->AddPoint();
			ai_score->Text = ai->score.ToString();
		}
		grp->Clear(Color::White);
		std::vector<int> temp_data = root->current_node->children[user_number - 1]->data;
		root->current_node->children.clear();
		//root->current_node->GameTreeCertainLevelMiniMax(root->current_node, temp_data, 0); // 0  level will display only root childs
		root->current_node->GameTreeCertainLevelWithScoresAlphaBeta(root->current_node, temp_data, 1, (human->isFirstPlayer ? 0 : 1), 0, 0);
		root->current_node->data = temp_data;
		// ai turn

		root->PrintGameTree(grp, root->current_node, 0, (1280 - 50) / 3, 0);
		//root->PrintGameTreeUserScore(grp, root->current_node, 0, (1280 - 50) / 3, 0);
	}
	else {
		
		if (human->score == ai->score) {
			wins_label->Text = "Draw";
			int draw_score;
			Int32::TryParse(draw_score_label->Text, draw_score);
			draw_score++;
			draw_score_label->Text = draw_score.ToString();
		}
		else if (human->score > ai->score) {
			wins_label->Text = "Human wins";
			human->winCount++;
		}
		else {
			wins_label->Text = "AI wins";
			ai->winCount++;
		}
		ai_score_label->Text = ai->winCount.ToString();
		human_score_label->Text = human->winCount.ToString();
	}
	
	
}
private: System::Void frame_info_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void max_player_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void wins_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
