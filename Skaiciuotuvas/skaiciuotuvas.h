#pragma once

namespace Skaiciuotuvas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for skaiciuotuvas
	/// </summary>
	public ref class skaiciuotuvas : public System::Windows::Forms::Form
	{
	public:
		skaiciuotuvas(void)
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
		~skaiciuotuvas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btt1;
	private: System::Windows::Forms::Button^  btt2;
	private: System::Windows::Forms::Button^  btt3;
	protected:

	protected:



	private: System::Windows::Forms::Button^  btt4;
	private: System::Windows::Forms::Button^  btt5;
	private: System::Windows::Forms::Button^  btt6;



	private: System::Windows::Forms::Button^  btt7;
	private: System::Windows::Forms::Button^  btt8;
	private: System::Windows::Forms::Button^  btt9;
	private: System::Windows::Forms::Button^  btt0;
	private: System::Windows::Forms::Button^  bttC;






	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Label^  zenklas;
	private: System::Windows::Forms::TextBox^  display;
	private: System::Windows::Forms::Button^  bttCE;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  failasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uždarytiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redaguotiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  keistiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fonąToolStripMenuItem;




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
			this->btt1 = (gcnew System::Windows::Forms::Button());
			this->btt2 = (gcnew System::Windows::Forms::Button());
			this->btt3 = (gcnew System::Windows::Forms::Button());
			this->btt4 = (gcnew System::Windows::Forms::Button());
			this->btt5 = (gcnew System::Windows::Forms::Button());
			this->btt6 = (gcnew System::Windows::Forms::Button());
			this->btt7 = (gcnew System::Windows::Forms::Button());
			this->btt8 = (gcnew System::Windows::Forms::Button());
			this->btt9 = (gcnew System::Windows::Forms::Button());
			this->btt0 = (gcnew System::Windows::Forms::Button());
			this->bttC = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->zenklas = (gcnew System::Windows::Forms::Label());
			this->display = (gcnew System::Windows::Forms::TextBox());
			this->bttCE = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->failasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uždarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redaguotiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->keistiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fonąToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btt1
			// 
			this->btt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btt1->Location = System::Drawing::Point(22, 340);
			this->btt1->Name = L"btt1";
			this->btt1->Size = System::Drawing::Size(60, 50);
			this->btt1->TabIndex = 1;
			this->btt1->Text = L"1";
			this->btt1->UseVisualStyleBackColor = true;
			this->btt1->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button_Click);
			// 
			// btt2
			// 
			this->btt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btt2->Location = System::Drawing::Point(105, 340);
			this->btt2->Name = L"btt2";
			this->btt2->Size = System::Drawing::Size(60, 50);
			this->btt2->TabIndex = 2;
			this->btt2->Text = L"2";
			this->btt2->UseVisualStyleBackColor = true;
			this->btt2->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button_Click);
			// 
			// btt3
			// 
			this->btt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btt3->Location = System::Drawing::Point(190, 340);
			this->btt3->Name = L"btt3";
			this->btt3->Size = System::Drawing::Size(60, 50);
			this->btt3->TabIndex = 3;
			this->btt3->Text = L"3";
			this->btt3->UseVisualStyleBackColor = true;
			this->btt3->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button_Click);
			// 
			// btt4
			// 
			this->btt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btt4->Location = System::Drawing::Point(22, 273);
			this->btt4->Name = L"btt4";
			this->btt4->Size = System::Drawing::Size(60, 50);
			this->btt4->TabIndex = 4;
			this->btt4->Text = L"4";
			this->btt4->UseVisualStyleBackColor = true;
			this->btt4->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button_Click);
			// 
			// btt5
			// 
			this->btt5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btt5->Location = System::Drawing::Point(105, 271);
			this->btt5->Name = L"btt5";
			this->btt5->Size = System::Drawing::Size(60, 50);
			this->btt5->TabIndex = 5;
			this->btt5->Text = L"5";
			this->btt5->UseVisualStyleBackColor = true;
			this->btt5->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button_Click);
			// 
			// btt6
			// 
			this->btt6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btt6->Location = System::Drawing::Point(190, 271);
			this->btt6->Name = L"btt6";
			this->btt6->Size = System::Drawing::Size(60, 50);
			this->btt6->TabIndex = 6;
			this->btt6->Text = L"6";
			this->btt6->UseVisualStyleBackColor = true;
			this->btt6->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button_Click);
			// 
			// btt7
			// 
			this->btt7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btt7->Location = System::Drawing::Point(22, 204);
			this->btt7->Name = L"btt7";
			this->btt7->Size = System::Drawing::Size(60, 50);
			this->btt7->TabIndex = 7;
			this->btt7->Text = L"7";
			this->btt7->UseVisualStyleBackColor = true;
			this->btt7->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button_Click);
			// 
			// btt8
			// 
			this->btt8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btt8->Location = System::Drawing::Point(105, 204);
			this->btt8->Name = L"btt8";
			this->btt8->Size = System::Drawing::Size(60, 50);
			this->btt8->TabIndex = 8;
			this->btt8->Text = L"8";
			this->btt8->UseVisualStyleBackColor = true;
			this->btt8->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button_Click);
			// 
			// btt9
			// 
			this->btt9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btt9->Location = System::Drawing::Point(190, 204);
			this->btt9->Name = L"btt9";
			this->btt9->Size = System::Drawing::Size(60, 50);
			this->btt9->TabIndex = 9;
			this->btt9->Text = L"9";
			this->btt9->UseVisualStyleBackColor = true;
			this->btt9->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button_Click);
			// 
			// btt0
			// 
			this->btt0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btt0->Location = System::Drawing::Point(22, 411);
			this->btt0->Name = L"btt0";
			this->btt0->Size = System::Drawing::Size(60, 50);
			this->btt0->TabIndex = 10;
			this->btt0->Text = L"0";
			this->btt0->UseVisualStyleBackColor = true;
			this->btt0->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button_Click);
			// 
			// bttC
			// 
			this->bttC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->bttC->Location = System::Drawing::Point(190, 139);
			this->bttC->Name = L"bttC";
			this->bttC->Size = System::Drawing::Size(60, 50);
			this->bttC->TabIndex = 11;
			this->bttC->Text = L"C";
			this->bttC->UseVisualStyleBackColor = true;
			this->bttC->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button12->Location = System::Drawing::Point(274, 340);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 50);
			this->button12->TabIndex = 12;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &skaiciuotuvas::veiksmai);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button13->Location = System::Drawing::Point(274, 273);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 50);
			this->button13->TabIndex = 13;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &skaiciuotuvas::veiksmai);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button14->Location = System::Drawing::Point(274, 411);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 50);
			this->button14->TabIndex = 14;
			this->button14->Text = L"X";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &skaiciuotuvas::veiksmai);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button15->Location = System::Drawing::Point(274, 204);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 50);
			this->button15->TabIndex = 15;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &skaiciuotuvas::veiksmai);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button16->Location = System::Drawing::Point(190, 411);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(60, 50);
			this->button16->TabIndex = 16;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button17->Location = System::Drawing::Point(105, 411);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(60, 50);
			this->button17->TabIndex = 17;
			this->button17->Text = L".";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button17_Click);
			// 
			// zenklas
			// 
			this->zenklas->AutoSize = true;
			this->zenklas->BackColor = System::Drawing::Color::White;
			this->zenklas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->zenklas->Location = System::Drawing::Point(116, 39);
			this->zenklas->Name = L"zenklas";
			this->zenklas->Size = System::Drawing::Size(0, 20);
			this->zenklas->TabIndex = 18;
			// 
			// display
			// 
			this->display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->display->Location = System::Drawing::Point(21, 76);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(313, 38);
			this->display->TabIndex = 19;
			this->display->Text = L"0";
			this->display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->display->TextChanged += gcnew System::EventHandler(this, &skaiciuotuvas::textBox1_TextChanged);
			// 
			// bttCE
			// 
			this->bttCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->bttCE->Location = System::Drawing::Point(105, 139);
			this->bttCE->Name = L"bttCE";
			this->bttCE->Size = System::Drawing::Size(60, 50);
			this->bttCE->TabIndex = 20;
			this->bttCE->Text = L"CE";
			this->bttCE->UseVisualStyleBackColor = true;
			this->bttCE->Click += gcnew System::EventHandler(this, &skaiciuotuvas::bttCE_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button2->Location = System::Drawing::Point(274, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 50);
			this->button2->TabIndex = 21;
			this->button2->Text = L"+/-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button3->Location = System::Drawing::Point(21, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 50);
			this->button3->TabIndex = 22;
			this->button3->Text = L"←";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &skaiciuotuvas::button3_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label1->Location = System::Drawing::Point(18, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 19);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Veiksmai:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->failasToolStripMenuItem,
					this->redaguotiToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(353, 24);
			this->menuStrip1->TabIndex = 24;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// failasToolStripMenuItem
			// 
			this->failasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->uždarytiToolStripMenuItem });
			this->failasToolStripMenuItem->Name = L"failasToolStripMenuItem";
			this->failasToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->failasToolStripMenuItem->Text = L"&Failas";
			// 
			// uždarytiToolStripMenuItem
			// 
			this->uždarytiToolStripMenuItem->Name = L"uždarytiToolStripMenuItem";
			this->uždarytiToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->uždarytiToolStripMenuItem->Text = L"U&ždaryti programą";
			this->uždarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &skaiciuotuvas::uždarytiToolStripMenuItem_Click);
			// 
			// redaguotiToolStripMenuItem
			// 
			this->redaguotiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->keistiToolStripMenuItem });
			this->redaguotiToolStripMenuItem->Name = L"redaguotiToolStripMenuItem";
			this->redaguotiToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->redaguotiToolStripMenuItem->Text = L"&Redaguoti";
			// 
			// keistiToolStripMenuItem
			// 
			this->keistiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fonąToolStripMenuItem });
			this->keistiToolStripMenuItem->Name = L"keistiToolStripMenuItem";
			this->keistiToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->keistiToolStripMenuItem->Text = L"K&eisti";
			// 
			// fonąToolStripMenuItem
			// 
			this->fonąToolStripMenuItem->Name = L"fonąToolStripMenuItem";
			this->fonąToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->fonąToolStripMenuItem->Text = L"Fono spalvą";
			this->fonąToolStripMenuItem->Click += gcnew System::EventHandler(this, &skaiciuotuvas::fonąToolStripMenuItem_Click);
			// 
			// skaiciuotuvas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(353, 477);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->bttCE);
			this->Controls->Add(this->display);
			this->Controls->Add(this->zenklas);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->bttC);
			this->Controls->Add(this->btt0);
			this->Controls->Add(this->btt9);
			this->Controls->Add(this->btt8);
			this->Controls->Add(this->btt7);
			this->Controls->Add(this->btt6);
			this->Controls->Add(this->btt5);
			this->Controls->Add(this->btt4);
			this->Controls->Add(this->btt3);
			this->Controls->Add(this->btt2);
			this->Controls->Add(this->btt1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"skaiciuotuvas";
			this->Text = L"Skaičiuotuvas";
			this->Load += gcnew System::EventHandler(this, &skaiciuotuvas::skaiciuotuvas_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double pirmassk;
		double antrassk;
		double rezultatas;
		String^ operacija;

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (apskaiciavimas -> Text == "0")
		{
			apskaiciavimas->Text = "1";
		}
		else
		{
			apskaiciavimas->Text = Convert::ToInt32(apskaiciavimas->Text) + "1";
		}*/
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (apskaiciavimas->Text == "0")
		{
			apskaiciavimas->Text = "2";
		}
		else
		{
			apskaiciavimas->Text = Convert::ToInt32(apskaiciavimas->Text) + "2";
		}*/
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (apskaiciavimas->Text == "0")
		{
			apskaiciavimas->Text = "3";
		}
		else
		{
			apskaiciavimas->Text = Convert::ToInt32(apskaiciavimas->Text) + "3";
		}*/
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (apskaiciavimas->Text == "0")
		{
			apskaiciavimas->Text = "4";
		}
		else
		{
			apskaiciavimas->Text = Convert::ToInt32(apskaiciavimas->Text) + "4";
		}*/
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (apskaiciavimas->Text == "0")
		{
			apskaiciavimas->Text = "5";
		}
		else
		{
			apskaiciavimas->Text = Convert::ToInt32(apskaiciavimas->Text) + "5";
		}*/
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (apskaiciavimas->Text == "0")
		{
			apskaiciavimas->Text = "6";
		}
		else
		{
			apskaiciavimas->Text = Convert::ToInt32(apskaiciavimas->Text) + "6";
		}*/
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (apskaiciavimas->Text == "0")
		{
			apskaiciavimas->Text = "7";
		}
		else
		{
			apskaiciavimas->Text = Convert::ToInt32(apskaiciavimas->Text) + "7";
		}*/
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (apskaiciavimas->Text == "0")
		{
			apskaiciavimas->Text = "8";
		}
		else
		{
			apskaiciavimas->Text = Convert::ToInt32(apskaiciavimas->Text) + "8";
		}*/
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (apskaiciavimas->Text == "0")
		{
			apskaiciavimas->Text = "9";
		}
		else
		{
			apskaiciavimas->Text = Convert::ToInt32(apskaiciavimas->Text) + "9";
		}*/
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (apskaiciavimas->Text == "0")
		{
			apskaiciavimas->Text = "0";
		}
		else
		{
			apskaiciavimas->Text = Convert::ToInt32(apskaiciavimas->Text) + "0";
		}*/
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		//apskaiciavimas->Text = "";
		//apskaiciavimas->Text = "0";

		display->Text = "0";
		zenklas->Text = "";
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {

		/*pirmassk = Convert::ToInt32(apskaiciavimas->Text);
		apskaiciavimas ->Text = "0";
		operacija = '/';
		*/
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {

		/*pirmassk = Convert::ToInt32(apskaiciavimas->Text);
		apskaiciavimas->Text = "0";
		operacija = '-';*/
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {

		/*pirmassk = Convert::ToInt32(apskaiciavimas->Text);
		apskaiciavimas->Text = "0";
		operacija = '*';*/
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {

		/*pirmassk = Convert::ToInt32(apskaiciavimas->Text);
		apskaiciavimas->Text = "0";
		operacija = '+';*/
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		//operaciju realizavimas
		zenklas->Text = "";
		antrassk = Double::Parse(display->Text);

		if (operacija == "+")
		{
			rezultatas = pirmassk + antrassk;
			display->Text = System::Convert::ToString(rezultatas);
		}
		else if (operacija == "-")
		{
			rezultatas = pirmassk - antrassk;
			display->Text = System::Convert::ToString(rezultatas);
		}
		else if (operacija == "*")
		{
			rezultatas = pirmassk * antrassk;
			display->Text = System::Convert::ToString(rezultatas);
		}
		else if (operacija == "/")
		{
			rezultatas = pirmassk / antrassk;
			display->Text = System::Convert::ToString(rezultatas);
		}
		/*antrassk = Convert::ToInt32(apskaiciavimas->Text);

		switch (operacija)
		{
		case '+':
				rezultatas = pirmassk + antrassk;
				apskaiciavimas->Text = System::Convert::ToString(rezultatas);
				break;
		case '-':
			rezultatas = pirmassk - antrassk;
			apskaiciavimas->Text = System::Convert::ToString(rezultatas);
			break;
		case '/':
				rezultatas = pirmassk / antrassk;
				apskaiciavimas->Text = System::Convert::ToString(rezultatas);
				break;
		case '*':
					rezultatas = pirmassk * antrassk;
					apskaiciavimas->Text = System::Convert::ToString(rezultatas);
					break;
		}*/
	}
	private: System::Void skaiciuotuvas_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		//kad būtų nulis, kai įveda antrą skaičių
		if (display->Text == "")
		{
			display->Text = "0";
		}
	}
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		//pliuso ir minuso pakeitimo mygtukas
		if (display->Text->Contains("-"))
		{
			display->Text = display->Text->Remove(0.1);
		}
		else 
		{
			display->Text = "-" + display->Text;
		}
	}
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		//trynimas po vieną simbolį
		if (display->Text->Length > 0)
		{
			display->Text = display->Text->Remove(display->Text->Length - 1, 1);
		}
	}
	private: System::Void bttCE_Click(System::Object^  sender, System::EventArgs^  e) {
		//trinimas visų veiksmų
		display->Text = "0";
	}

	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
		//skaiciu įvedimo mygtukai
		Button ^ Numbers = safe_cast<Button^>(sender);

		if (display->Text == "0")
		{
			display->Text = Numbers->Text;
		}
		else {
			display->Text = display->Text + Numbers->Text;
		}
	}
	private: System::Void veiksmai(System::Object^  sender, System::EventArgs^  e) {
		//veiksmai aprašomi
		Button ^ op = safe_cast<Button^>(sender);
		pirmassk = Double::Parse(display->Text);
		display->Text = "";
		operacija = op->Text;
		zenklas->Text = System::Convert::ToString(pirmassk) + " " + operacija;
	}

private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	//aprašomas kablelis, kad galėtume realiuosius skaičius naudoti
	if (!display->Text->Contains("."))
	{
		display->Text = display->Text + (".");
	}
}
private: System::Void uždarytiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void fonąToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
