#pragma once

namespace Project5pz {

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
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	protected:
	private: System::Windows::Forms::ToolStripButton^ newToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ openToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ saveToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ printToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^ cutToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ copyToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ pasteToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ helpToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton7;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton8;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ÔÂÂ„Îˇ‰ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ô‡ÌÂÎ≥ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ô‡ÌÂÎ¸≤ÌÒÚÛÏÂÌÚ≥‚ToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->newToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->printToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->copyToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->pasteToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->helpToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->ÔÂÂ„Îˇ‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ô‡ÌÂÎ≥ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ô‡ÌÂÎ¸≤ÌÒÚÛÏÂÌÚ≥‚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(21) {
				this->newToolStripButton,
					this->openToolStripButton, this->saveToolStripButton, this->printToolStripButton, this->toolStripSeparator, this->cutToolStripButton,
					this->copyToolStripButton, this->pasteToolStripButton, this->toolStripSeparator2, this->helpToolStripButton, this->toolStripSeparator1,
					this->toolStripButton3, this->toolStripButton1, this->toolStripButton2, this->toolStripSeparator3, this->toolStripButton4, this->toolStripButton5,
					this->toolStripButton6, this->toolStripSeparator4, this->toolStripButton7, this->toolStripButton8
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 52);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(957, 27);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
			// 
			// newToolStripButton
			// 
			this->newToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->newToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newToolStripButton.Image")));
			this->newToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newToolStripButton->Name = L"newToolStripButton";
			this->newToolStripButton->Size = System::Drawing::Size(29, 24);
			this->newToolStripButton->Text = L"&New";
			// 
			// openToolStripButton
			// 
			this->openToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripButton.Image")));
			this->openToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripButton->Name = L"openToolStripButton";
			this->openToolStripButton->Size = System::Drawing::Size(29, 24);
			this->openToolStripButton->Text = L"&Open";
			// 
			// saveToolStripButton
			// 
			this->saveToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripButton.Image")));
			this->saveToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveToolStripButton->Name = L"saveToolStripButton";
			this->saveToolStripButton->Size = System::Drawing::Size(29, 24);
			this->saveToolStripButton->Text = L"&Save";
			// 
			// printToolStripButton
			// 
			this->printToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->printToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"printToolStripButton.Image")));
			this->printToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->printToolStripButton->Name = L"printToolStripButton";
			this->printToolStripButton->Size = System::Drawing::Size(29, 24);
			this->printToolStripButton->Text = L"&Print";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// cutToolStripButton
			// 
			this->cutToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->cutToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripButton.Image")));
			this->cutToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutToolStripButton->Name = L"cutToolStripButton";
			this->cutToolStripButton->Size = System::Drawing::Size(29, 24);
			this->cutToolStripButton->Text = L"C&ut";
			this->cutToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// copyToolStripButton
			// 
			this->copyToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->copyToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripButton.Image")));
			this->copyToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyToolStripButton->Name = L"copyToolStripButton";
			this->copyToolStripButton->Size = System::Drawing::Size(29, 24);
			this->copyToolStripButton->Text = L"&Copy";
			this->copyToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// pasteToolStripButton
			// 
			this->pasteToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->pasteToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteToolStripButton.Image")));
			this->pasteToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pasteToolStripButton->Name = L"pasteToolStripButton";
			this->pasteToolStripButton->Size = System::Drawing::Size(29, 24);
			this->pasteToolStripButton->Text = L"&Paste";
			this->pasteToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 27);
			// 
			// helpToolStripButton
			// 
			this->helpToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->helpToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"helpToolStripButton.Image")));
			this->helpToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->helpToolStripButton->Name = L"helpToolStripButton";
			this->helpToolStripButton->Size = System::Drawing::Size(29, 24);
			this->helpToolStripButton->Text = L"He&lp";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(29, 24);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(29, 24);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(29, 24);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(29, 24);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(29, 24);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(29, 24);
			this->toolStripButton6->Text = L"toolStripButton6";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton6_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(29, 24);
			this->toolStripButton7->Text = L"toolStripButton7";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton7_Click);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(29, 24);
			this->toolStripButton8->Text = L"toolStripButton8";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton8_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 79);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox1->Size = System::Drawing::Size(957, 451);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"*";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 504);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(957, 26);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 28);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(957, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ÔÂÂ„Îˇ‰ToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(957, 28);
			this->menuStrip2->TabIndex = 4;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// ÔÂÂ„Îˇ‰ToolStripMenuItem
			// 
			this->ÔÂÂ„Îˇ‰ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Ô‡ÌÂÎ≥ToolStripMenuItem });
			this->ÔÂÂ„Îˇ‰ToolStripMenuItem->Name = L"ÔÂÂ„Îˇ‰ToolStripMenuItem";
			this->ÔÂÂ„Îˇ‰ToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->ÔÂÂ„Îˇ‰ToolStripMenuItem->Text = L"œÂÂ„Îˇ‰";
			this->ÔÂÂ„Îˇ‰ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÔÂÂ„Îˇ‰ToolStripMenuItem_Click);
			// 
			// Ô‡ÌÂÎ≥ToolStripMenuItem
			// 
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem,
					this->Ô‡ÌÂÎ¸≤ÌÒÚÛÏÂÌÚ≥‚ToolStripMenuItem
			});
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->Name = L"Ô‡ÌÂÎ≥ToolStripMenuItem";
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->Text = L"œ‡ÌÂÎ≥";
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Ô‡ÌÂÎ≥ToolStripMenuItem_Click);
			// 
			// ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem
			// 
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Name = L"ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem";
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Size = System::Drawing::Size(236, 26);
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Text = L"–ˇ‰ÓÍ ÒÚ‡ÌÛ";
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem_Click);
			// 
			// Ô‡ÌÂÎ¸≤ÌÒÚÛÏÂÌÚ≥‚ToolStripMenuItem
			// 
			this->Ô‡ÌÂÎ¸≤ÌÒÚÛÏÂÌÚ≥‚ToolStripMenuItem->Name = L"Ô‡ÌÂÎ¸≤ÌÒÚÛÏÂÌÚ≥‚ToolStripMenuItem";
			this->Ô‡ÌÂÎ¸≤ÌÒÚÛÏÂÌÚ≥‚ToolStripMenuItem->Size = System::Drawing::Size(236, 26);
			this->Ô‡ÌÂÎ¸≤ÌÒÚÛÏÂÌÚ≥‚ToolStripMenuItem->Text = L"œ‡ÌÂÎ¸ ≥ÌÒÚÛÏÂÌÚ≥‚";
			this->Ô‡ÌÂÎ¸≤ÌÒÚÛÏÂÌÚ≥‚ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Ô‡ÌÂÎ¸≤ÌÒÚÛÏÂÌÚ≥‚ToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(957, 530);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cutToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Cut();
	}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void copyToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Copy();
}
private: System::Void pasteToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Paste();
}
private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = HorizontalAlignment::Left;
	toolStripStatusLabel1->Text = "¬Ë≥‚Ì˛‚‡ÌÌˇ ÔÓ Î≥‚ÓÏÛ Í‡˛";
}
private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = HorizontalAlignment::Center;
	toolStripStatusLabel1->Text = "¬Ë≥‚Ì˛‚‡ÌÌˇ ÔÓ ˆÂÌÚÛ";
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = HorizontalAlignment::Right;
	toolStripStatusLabel1->Text = "¬Ë≥‚Ì˛‚‡ÌÌˇ ÔÓ Ô‡‚ÓÏÛ Í‡˛";
}
private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->SelectionFont->Bold)
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Bold);

	else
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Bold);
}
private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->SelectionFont->Italic)
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Italic);

	else
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Italic);
}
private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->SelectionFont->Underline)
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Underline);

	else
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Underline);
}
private: System::Void toolStripButton7_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Redo();
}
private: System::Void toolStripButton8_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Undo();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Visible = true;
	toolStrip1->Visible = true;
}
private: System::Void Ô‡ÌÂÎ¸≤ÌÒÚÛÏÂÌÚ≥‚ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Visible = Ô‡ÌÂÎ¸≤ÌÒÚÛÏÂÌÚ≥‚ToolStripMenuItem->Checked;
}
private: System::Void ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Visible = ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Checked;
}
private: System::Void ÔÂÂ„Îˇ‰ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Ô‡ÌÂÎ≥ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
