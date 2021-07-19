#pragma once

namespace DryHireProjectmain {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ NewButton;
	private: System::Windows::Forms::Button^ PrintButton;
	private: System::Windows::Forms::Button^ PrinterSetupButton;
	private: System::Windows::Forms::Button^ SentButton;
	private: System::Windows::Forms::Button^ CheckDatesButton;
	private: System::Windows::Forms::Button^ SortDateOrderButton;
	private: System::Windows::Forms::Button^ UndoLastSendButton;
	private: System::Windows::Forms::Button^ EnableEditingButton;
	private: System::Windows::Forms::TextBox^ EquitmentTextBox;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::CheckBox^ PackedCheckBox;
	private: System::Windows::Forms::CheckBox^ ReturnCheckBox;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::CheckBox^ checkBox1;









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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->NewButton = (gcnew System::Windows::Forms::Button());
			this->PrintButton = (gcnew System::Windows::Forms::Button());
			this->PrinterSetupButton = (gcnew System::Windows::Forms::Button());
			this->SentButton = (gcnew System::Windows::Forms::Button());
			this->CheckDatesButton = (gcnew System::Windows::Forms::Button());
			this->SortDateOrderButton = (gcnew System::Windows::Forms::Button());
			this->UndoLastSendButton = (gcnew System::Windows::Forms::Button());
			this->EnableEditingButton = (gcnew System::Windows::Forms::Button());
			this->EquitmentTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->monthCalendar2 = (gcnew System::Windows::Forms::MonthCalendar());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->PackedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->ReturnCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label1->Location = System::Drawing::Point(77, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Client";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(309, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Location";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label3->Location = System::Drawing::Point(583, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Input Order";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label4->Location = System::Drawing::Point(871, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Returned";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label5->Location = System::Drawing::Point(728, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Date Order";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label6->Location = System::Drawing::Point(94, 530);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"SEND";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label7->Location = System::Drawing::Point(308, 530);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"RETURN";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label8->Location = System::Drawing::Point(430, 457);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"In use by";
			// 
			// NewButton
			// 
			this->NewButton->Location = System::Drawing::Point(431, 84);
			this->NewButton->Name = L"NewButton";
			this->NewButton->Size = System::Drawing::Size(93, 23);
			this->NewButton->TabIndex = 8;
			this->NewButton->Text = L"New";
			this->NewButton->UseVisualStyleBackColor = true;
			this->NewButton->Click += gcnew System::EventHandler(this, &MainForm::New_Button_Click);
			// 
			// PrintButton
			// 
			this->PrintButton->Location = System::Drawing::Point(431, 113);
			this->PrintButton->Name = L"PrintButton";
			this->PrintButton->Size = System::Drawing::Size(93, 23);
			this->PrintButton->TabIndex = 9;
			this->PrintButton->Text = L"Print";
			this->PrintButton->UseVisualStyleBackColor = true;
			// 
			// PrinterSetupButton
			// 
			this->PrinterSetupButton->Location = System::Drawing::Point(431, 142);
			this->PrinterSetupButton->Name = L"PrinterSetupButton";
			this->PrinterSetupButton->Size = System::Drawing::Size(93, 23);
			this->PrinterSetupButton->TabIndex = 10;
			this->PrinterSetupButton->Text = L"Printer setup";
			this->PrinterSetupButton->UseVisualStyleBackColor = true;
			// 
			// SentButton
			// 
			this->SentButton->Location = System::Drawing::Point(431, 171);
			this->SentButton->Name = L"SentButton";
			this->SentButton->Size = System::Drawing::Size(93, 23);
			this->SentButton->TabIndex = 11;
			this->SentButton->Text = L"Sent";
			this->SentButton->UseVisualStyleBackColor = true;
			// 
			// CheckDatesButton
			// 
			this->CheckDatesButton->Location = System::Drawing::Point(431, 200);
			this->CheckDatesButton->Name = L"CheckDatesButton";
			this->CheckDatesButton->Size = System::Drawing::Size(93, 23);
			this->CheckDatesButton->TabIndex = 12;
			this->CheckDatesButton->Text = L"Check Dates";
			this->CheckDatesButton->UseVisualStyleBackColor = true;
			// 
			// SortDateOrderButton
			// 
			this->SortDateOrderButton->Location = System::Drawing::Point(431, 229);
			this->SortDateOrderButton->Name = L"SortDateOrderButton";
			this->SortDateOrderButton->Size = System::Drawing::Size(93, 23);
			this->SortDateOrderButton->TabIndex = 13;
			this->SortDateOrderButton->Text = L"Sort date order";
			this->SortDateOrderButton->UseVisualStyleBackColor = true;
			// 
			// UndoLastSendButton
			// 
			this->UndoLastSendButton->Location = System::Drawing::Point(431, 258);
			this->UndoLastSendButton->Name = L"UndoLastSendButton";
			this->UndoLastSendButton->Size = System::Drawing::Size(93, 23);
			this->UndoLastSendButton->TabIndex = 14;
			this->UndoLastSendButton->Text = L"Undo last send";
			this->UndoLastSendButton->UseVisualStyleBackColor = true;
			// 
			// EnableEditingButton
			// 
			this->EnableEditingButton->Location = System::Drawing::Point(169, 108);
			this->EnableEditingButton->Name = L"EnableEditingButton";
			this->EnableEditingButton->Size = System::Drawing::Size(93, 23);
			this->EnableEditingButton->TabIndex = 15;
			this->EnableEditingButton->Text = L"Toggle Edit";
			this->EnableEditingButton->UseVisualStyleBackColor = true;
			this->EnableEditingButton->Click += gcnew System::EventHandler(this, &MainForm::EnableEditingButton_Click);
			// 
			// EquitmentTextBox
			// 
			this->EquitmentTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->EquitmentTextBox->Location = System::Drawing::Point(24, 137);
			this->EquitmentTextBox->Multiline = true;
			this->EquitmentTextBox->Name = L"EquitmentTextBox";
			this->EquitmentTextBox->ReadOnly = true;
			this->EquitmentTextBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->EquitmentTextBox->Size = System::Drawing::Size(401, 390);
			this->EquitmentTextBox->TabIndex = 16;
			this->EquitmentTextBox->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label9->Location = System::Drawing::Point(29, 113);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Equipment";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(13, 564);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 18;
			// 
			// monthCalendar2
			// 
			this->monthCalendar2->Location = System::Drawing::Point(241, 564);
			this->monthCalendar2->Name = L"monthCalendar2";
			this->monthCalendar2->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(434, 482);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(90, 20);
			this->textBox2->TabIndex = 20;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(587, 75);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(114, 654);
			this->listBox1->TabIndex = 21;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(719, 75);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(114, 654);
			this->listBox2->TabIndex = 22;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(852, 75);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(114, 654);
			this->listBox3->TabIndex = 24;
			// 
			// PackedCheckBox
			// 
			this->PackedCheckBox->AutoSize = true;
			this->PackedCheckBox->Location = System::Drawing::Point(454, 367);
			this->PackedCheckBox->Name = L"PackedCheckBox";
			this->PackedCheckBox->Size = System::Drawing::Size(63, 17);
			this->PackedCheckBox->TabIndex = 25;
			this->PackedCheckBox->Text = L"Packed";
			this->PackedCheckBox->UseVisualStyleBackColor = true;
			// 
			// ReturnCheckBox
			// 
			this->ReturnCheckBox->AutoSize = true;
			this->ReturnCheckBox->Location = System::Drawing::Point(454, 390);
			this->ReturnCheckBox->Name = L"ReturnCheckBox";
			this->ReturnCheckBox->Size = System::Drawing::Size(58, 17);
			this->ReturnCheckBox->TabIndex = 26;
			this->ReturnCheckBox->Text = L"Return";
			this->ReturnCheckBox->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(278, 63);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(129, 20);
			this->textBox3->TabIndex = 28;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(46, 63);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(129, 20);
			this->textBox4->TabIndex = 29;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(480, 564);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(102, 17);
			this->checkBox1->TabIndex = 30;
			this->checkBox1->Text = L"Allow Messages";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(997, 741);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->ReturnCheckBox);
			this->Controls->Add(this->PackedCheckBox);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->monthCalendar2);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->EquitmentTextBox);
			this->Controls->Add(this->EnableEditingButton);
			this->Controls->Add(this->UndoLastSendButton);
			this->Controls->Add(this->SortDateOrderButton);
			this->Controls->Add(this->CheckDatesButton);
			this->Controls->Add(this->SentButton);
			this->Controls->Add(this->PrinterSetupButton);
			this->Controls->Add(this->PrintButton);
			this->Controls->Add(this->NewButton);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void New_Button_Click(System::Object^ sender, System::EventArgs^ e) {

		label1->Text = "Working lable change";
		label1->Text = EquitmentTextBox->Text;

		

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void EnableEditingButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//click on enabl editing button allows for the text box to be editied
		
		if (EquitmentTextBox->ReadOnly == false) {
			EquitmentTextBox->ReadOnly = true;
		}
		else
		{
			EquitmentTextBox->ReadOnly = false;
		}
		
		



	}
	};
}
