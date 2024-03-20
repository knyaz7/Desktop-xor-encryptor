#include <clocale>

const int ALPHABET_SIZE = 89;

wchar_t Alphabet[ALPHABET_SIZE] = {
	L'a', L'b', L'c', L'd', L'e', L'f', L'g', L'h', L'i', L'j', L'k', L'l', L'm', L'n', L'o', L'p', L'q', L'r', L's', L't', L'u', L'v', L'w', L'x', L'y', L'z',
	L'à', L'á', L'â', L'ã', L'ä', L'å', L'¸', L'æ', L'ç', L'è', L'é', L'ê', L'ë', L'ì', L'í', L'î', L'ï', L'ð', L'ñ', L'ò', L'ó', L'ô', L'õ', L'ö', L'÷', L'ø', L'ù', L'ú', L'û', L'ü', L'ý', L'þ', L'ÿ',
	L'.', L',', L'?', L'!', L'"', L'#', L';', L'$', L'%', L'^', L':', L'&', L'@', L'*', L'(', L')', L'-', L'+', L'/', L'1', L'2', L'3', L'4', L'5', L'6', L'7', L'8', L'9', L'0', L' '
};
#pragma once

namespace ImAlwaysWatchingYou {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ?????? ??? My979
	/// </summary>
	public ref class My979 : public System::Windows::Forms::Form
	{
	public:
		My979(void)
		{
			InitializeComponent();
			//
			//TODO: ???????? ??? ????????????
			//
		}

	protected:
		/// <summary>
		/// ?????????? ??? ???????????? ???????.
		/// </summary>
		~My979()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// ???????????? ?????????? ????????????.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ????????? ????? ??? ????????? ???????????? ? ?? ????????? 
		/// ?????????? ????? ?????? ? ??????? ????????? ????.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(50, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Message";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(116, 325);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Crypt";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &My979::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(106, 168);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(106, 205);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(310, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(50, 208);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Key";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(106, 243);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(310, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(50, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Result";
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(218, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Decrypt";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &My979::button2_Click);
			// 
			// My979
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(441, 456);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"My979";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"My979";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: wchar_t idToChar(int id) {
		return Alphabet[id];
	}
	private: int charToId(wchar_t sym) {
		for (int i = 0; i < ALPHABET_SIZE; i++) {
			if (sym == Alphabet[i])
				return i;
		}
		return -1;
	}
	private: int xor (int a, int b, int size) {
		return (a + b) % size;
	}
	private: int unxor(int a, int b, int size) {
		return (a + size - b) % size;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "Russian");

		String^ message = this->textBox1->Text;
		String^ key = this->textBox2->Text;

		int charId;
		int keyCharId;
		int resultCharId;
		String^ resultText = "";
		for (int i = 0; i < message->Length; i++) {
			if (message->Length > key->Length) {
				MessageBox::Show(this, "Key length < message length. Crypto is not secure", "Error", MessageBoxButtons::OK);
				return;
			}
			charId = charToId(message[i]); //int
			keyCharId = charToId(key[i]); //int
			if (charId == -1 || keyCharId == -1) {
				MessageBox::Show(this, "Unsupported symbol. Use only lowercase symbols.", "Error", MessageBoxButtons::OK);
				return;
			}
			resultCharId = xor (charId, keyCharId, 89); //int
			resultText += idToChar(resultCharId); 
		}
		this->textBox3->Text = resultText;

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "Russian");

		String^ message = this->textBox1->Text;
		String^ key = this->textBox2->Text;

		int charId;
		int keyCharId;
		int resultCharId;
		String^ resultText = "";
		for (int i = 0; i < message->Length; i++) {
			if (message->Length > key->Length) {
				MessageBox::Show(this, "Key length < message length. Uncrypto can't be done", "Error", MessageBoxButtons::OK);
				return;
			}
			charId = charToId(message[i]); //int
			keyCharId = charToId(key[i]); //int
			if (charId == -1 || keyCharId == -1) {
				MessageBox::Show(this, "Unsupported symbol. Use only lowercase symbols.", "Error", MessageBoxButtons::OK);
				return;
			}
			resultCharId = unxor(charId, keyCharId, ALPHABET_SIZE); //int
			resultText += idToChar(resultCharId);
		}
		this->textBox3->Text = resultText;
	}
	};
}
