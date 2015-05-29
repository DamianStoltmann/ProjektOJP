#pragma once
#include <fstream>
namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool czyTekstZmieniony=false;
			 


	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: Form ^ czyZapisacZmianyForm;
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zakoñczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  znajdzS³owoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oAutorzeToolStripMenuItem;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zakoñczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->znajdzS³owoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 45);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(820, 254);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::czyZmienilSieTekst);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
			this->plikToolStripMenuItem,
			this->opcjeToolStripMenuItem, this->autorToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(844, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
			this->zapiszToolStripMenuItem,
			this->zakoñczToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->zapiszToolStripMenuItem->Text = L"Zapisz";
			// 
			// zakoñczToolStripMenuItem
			// 
			this->zakoñczToolStripMenuItem->Name = L"zakoñczToolStripMenuItem";
			this->zakoñczToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->zakoñczToolStripMenuItem->Text = L"Zakoñcz";
			this->zakoñczToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zakoñczToolStripMenuItem_Click);
			// 
			// opcjeToolStripMenuItem
			// 
			this->opcjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->znajdzS³owoToolStripMenuItem });
			this->opcjeToolStripMenuItem->Name = L"opcjeToolStripMenuItem";
			this->opcjeToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->opcjeToolStripMenuItem->Text = L"Opcje";
			// 
			// znajdzS³owoToolStripMenuItem
			// 
			this->znajdzS³owoToolStripMenuItem->Name = L"znajdzS³owoToolStripMenuItem";
			this->znajdzS³owoToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->znajdzS³owoToolStripMenuItem->Text = L"Znajdz s³owo";
			// 
			// autorToolStripMenuItem
			// 
			this->autorToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->oAutorzeToolStripMenuItem });
			this->autorToolStripMenuItem->Name = L"autorToolStripMenuItem";
			this->autorToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->autorToolStripMenuItem->Text = L"Autor";
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->oAutorzeToolStripMenuItem->Text = L"O autorze";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(844, 311);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void zakoñczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (czyTekstZmieniony==false)
	{
		this->Close();
	}
	else
	{
		czyZapisacZmianyForm = gcnew Form();
		czyZapisacZmianyForm->Width = 400;
		czyZapisacZmianyForm->Height = 100;
		
		czyZapisacZmianyForm->Text = "Czy chcesz zapisaæ zmiany ?";
		
		Button^ takBtn = gcnew Button();
		takBtn->Location = Point(75, 30);
		takBtn->Text="Tak";
		takBtn->Click += gcnew System::EventHandler(this, &Form1::takBtn_Click);
		
		Button^ nieBtn = gcnew Button();
		nieBtn->Location = Point(150,30);
		nieBtn->Text = "Nie";
		nieBtn->Click += gcnew System::EventHandler(this, &Form1::nieBtn_Click);
		

		Button^ anulujBtn = gcnew Button();
		anulujBtn->Location = Point(225, 30);
		anulujBtn->Text = "Anuluj";
		anulujBtn->Click += gcnew System::EventHandler(this, &Form1::anulujBtn_Click);

		

		czyZapisacZmianyForm->Controls->Add(takBtn);
		czyZapisacZmianyForm->Controls->Add(nieBtn);
		czyZapisacZmianyForm->Controls->Add(anulujBtn);
		//MessageBox::Show(nieBtn->Size.Width.ToString());
		
		czyZapisacZmianyForm->ShowDialog();
	}

}
private: System::Void czyZmienilSieTekst(System::Object^  sender, System::EventArgs^  e) {
	czyTekstZmieniony = true;

}
private: System::Void nieBtn_Click(System::Object^  sender, System::EventArgs^  e){
	this->Close();
}

private: System::Void anulujBtn_Click(System::Object^  sender, System::EventArgs^  e){
	czyZapisacZmianyForm->Close();
}

void MarshalString(String ^ s, string& os) {

	using namespace Runtime::InteropServices;
	const char* chars =(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

private: System::Void takBtn_Click(System::Object^  sender, System::EventArgs^  e){

	Stream^ myStream;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	
	{
	
		if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
		{
			fstream myfile;
			string nazwaPliku;
			MarshalString(saveFileDialog1->FileName, nazwaPliku);
			myfile.open(nazwaPliku, fstream::in | fstream::out | fstream::trunc);
			myfile << "COSTAM";
			myfile.close();
			myStream->Close();
		}
	}
}
};
}

