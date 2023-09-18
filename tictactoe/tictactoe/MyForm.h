#pragma once

namespace tictactoe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			symbolLabel->Text = playerSymbol;
			bool CheckIsWinner();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ symbolLabel;

	private: System::Windows::Forms::Label^ label3;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->symbolLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(216, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 75);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(297, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 75);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(378, 123);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 75);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(216, 204);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 75);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(297, 204);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 75);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(378, 204);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 75);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(378, 285);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 75);
			this->button9->TabIndex = 6;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(297, 285);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 75);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(216, 285);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 75);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(213, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 16);
			this->label1->TabIndex = 9;
			this->label1->Text = L"It is your turn, player";
			// 
			// symbolLabel
			// 
			this->symbolLabel->AutoSize = true;
			this->symbolLabel->Location = System::Drawing::Point(403, 42);
			this->symbolLabel->Name = L"symbolLabel";
			this->symbolLabel->Size = System::Drawing::Size(132, 16);
			this->symbolLabel->TabIndex = 10;
			this->symbolLabel->Text = L"currentPlayerSymbol";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(216, 406);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 480);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->symbolLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool CheckIsWinner() {
			if (button1->Text!="" && button1->Text == button2->Text && button1->Text == button3->Text) {
				return true;
			}
			if (button4->Text != "" && button4->Text == button5->Text && button4->Text == button6->Text) {
				return true;
			}
			if (button7->Text != "" && button7->Text == button8->Text && button7->Text == button9->Text) {
				return true;
			}
			if (button1->Text != "" && button1->Text == button4->Text && button1->Text == button7->Text) {
				return true;
			}
			if (button2->Text != "" && button2->Text == button5->Text && button2->Text == button8->Text) {
				return true;
			}
			if (button3->Text != "" && button3->Text == button6->Text && button3->Text == button9->Text) {
				return true;
			}
			if (button1->Text != "" && button1->Text == button5->Text && button1->Text == button9->Text) {
				return true;
			}
			if (button3->Text != "" && button3->Text == button5->Text && button3->Text == button7->Text) {
				return true;
			}
			return false;
		}
		String^ playerSymbol = "X";
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Button^ clickedButton = dynamic_cast<Button^>(sender);
		clickedButton->Text = playerSymbol;
		clickedButton->Enabled = 0;

		if (CheckIsWinner()) {
			label3->Text = playerSymbol + " Won!";
			return;
		}
		
		if (playerSymbol == "X") {
			playerSymbol="O";
		}
		else {
			playerSymbol = "X";
		}
		symbolLabel->Text = playerSymbol;
	}
};
}
