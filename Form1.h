#pragma once
#define size 37

int square[size][size];//宣告

namespace HW2_0413418 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected: 
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label3;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox2);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(966, 347);
			this->splitContainer1->SplitterDistance = 105;
			this->splitContainer1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Location = System::Drawing::Point(647, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(160, 79);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"position of 1 odd";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(17, 33);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(38, 16);
			this->radioButton8->TabIndex = 8;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"left";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(110, 33);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(45, 16);
			this->radioButton7->TabIndex = 7;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"right";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(53, 51);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(49, 16);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"down";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(53, 16);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(35, 16);
			this->radioButton5->TabIndex = 5;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"up";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(408, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(207, 79);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"moving direction odd";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 51);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(64, 16);
			this->radioButton3->TabIndex = 6;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"right-top";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(102, 54);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(82, 16);
			this->radioButton4->TabIndex = 7;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"right-bottom";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 24);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(57, 16);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"left-top";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(102, 24);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(75, 16);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"left-bottom";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(190, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"n should be odd or 4X and less than 37.\r\nodd should choose the right options.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(58, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(124, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(208, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Magic Square";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(966, 238);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox2);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 23);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(958, 211);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 14;
			this->listBox2->Location = System::Drawing::Point(3, 3);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(952, 205);
			this->listBox2->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 14;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(952, 205);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 23);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(958, 211);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 14;
			this->listBox3->Location = System::Drawing::Point(3, 3);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(952, 205);
			this->listBox3->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->richTextBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 23);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(958, 211);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(952, 205);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView1);
			this->tabPage4->Location = System::Drawing::Point(4, 23);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(958, 211);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(952, 205);
			this->dataGridView1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(237, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"tabpage3 shows sum.";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 347);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Form1";
			this->Text = L"Magic Square by  Jack  2016/10/12 Ver. 1.0";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
		void MagicSquare(int n)
			{ 
				if(n>=38)//防呆
				{
					listBox2->Items->Add("我是防呆請重試!");
					listBox3->Items->Add("我是防呆請重試!");
					richTextBox1->AppendText("我是防呆請重試!"+"\n");
				}

				
				else if(n %4==0 && n<=37)//4的倍數
				{
					int  m , i , j;
					m =n*n;
						for(j = 1; j <= n; j++)
						{ 
							for(i = 1; i <= n; i++)
							{ 
								if(j % 4 == i % 4 || (j % 4 + i) % 4 == 1) //條件式
									square[i][j] = (n+1-i) * n -j + 1; 
								 else 
								 square[i][j] = (i - 1) * n + j; 
							 } 
						} 
						for(j = 0; j < n; j++) 
						{ 
							for(i = 0; i < n; i++)
							{ 
								square[i][j]=square[i+1][j+1];
							} 
						} 
				}

				else if((n % 2) == 1 && n<=37 )//奇數
				{
					int i, j, k, l, data;
					int row_sum = 0;
					int col_sum = 0;
					int dia_sum = 0;

					for (i=0; i<n; i++)
						for (j=0; j<n; j++) 
							square[i][j] = 0;//初始設定

					if (radioButton5->Checked)//上1位置
					{   
						i = 0;
						j = (n-1)/2;
					}
					else if(radioButton6->Checked)//下1位置
					{  
						i = n-1;
						j = (n-1)/2;
					}
					else if(radioButton7->Checked)//右1位置
					{  
						i = (n-1)/2;
						j = n-1;
					}
					else if(radioButton8->Checked)//左1位置
					{  
						i = (n-1)/2;
						j = 0;
					}
					square[i][j] = 1;//設定1

					data = 2 ;//從2開始填表
					while (data <= n*n)
					{   
					if (radioButton1->Checked)//左上
					{   
						k = (i-1<0) ? n-1 : i-1;
						l = (j-1<0) ? n-1 : j-1;//條件式
							if (square[k][l]>0) i = (i+1) % n;
							else { i = k; j = l; }
					}
					else if (radioButton2->Checked)//左下
					{   
						k = (i+1==n) ? 0 : i+1;
						l = (j-1<0) ? n-1 : j-1;//條件式
							if (square[k][l]>0) i = (i-1 < 0) ? n-1 : i-1;
							else { i = k; j = l; }
					}
					else if (radioButton3->Checked)//右上
					{  
						k = (i-1<0) ? n-1 : i-1;
						l = (j+1==n) ? 0 : j+1;//條件式
							if (square[k][l]>0) i = (i+1) % n;
							else { i = k; j = l; }
					}
					else if (radioButton4->Checked)//右下
					{   
						k = (i+1==n) ? 0 : i+1;
						l = (j+1==n) ? 0 : j+1;//條件式
							if (square[k][l]>0) i = (i-1 < 0) ? n-1 : i-1;
							else { i = k; j = l; }
					}

						square[i][j]=data++;
				}
			}
		}

		void printSquare(int n)
		{
			int i , j , k ;
			int block = Convert::ToString (n*n)-> Length+2 , blank_len ;
			String ^ line ;//轉換需要
			String ^ str ;//轉換需要

			listBox2->Items->Add("--------------------------"+n+"*"+n+"--------------------------");
			for( i=0 ; i<n ; i++)
				{
					line = "";//空格
						for ( j=0 ; j<n ; j++)
						{
							line += square[i][j]+" ";//line = line + square[i][j]+" ";加空格
						}
						listBox2->Items->Add(line);//第一格
				}

			listBox3->Items->Add("--------------------------"+n+"*"+n+"--------------------------");
			for( i=0 ; i<n ; i++)
				{
					line = "";//空格
						for ( j=0 ; j<n ; j++)
						{
							str = Convert::ToString(square[i][j]);//轉換
							blank_len = block - str -> Length ;
							for ( k = 0 ; k< blank_len ; k++ ) line +=" ";//加空格
							line += square[i][j];//line = line + square[i][j]+" ";
						}

						listBox3->Items->Add(line);//第二格
						if(i==0)
						{
							richTextBox1->AppendText("--------------------------"+n+"*"+n+"--------------------------"+"\n");
						}	
						
				}

				dataGridView1->ColumnCount = n;
				dataGridView1->RowCount = n;
				dataGridView1->AutoResizeRows();//加入函式:調整高和寬
				for( i=0 ; i<n ; i++)
				{
					dataGridView1->Columns[i]->Width = 36;

					for ( j=0 ; j<n ; j++)
					{
						dataGridView1->Rows[i]->Cells[j]->Value = square[i][j];//第四格
					}
				}

				String ^ nsquare = Convert::ToString(n*n);
				String ^ blank = "";
				String^ data_str = "";
				String ^ s = "";
				int len = nsquare->Length;
				int block_len = len+2;
				int row_sum = 0;
				int col_sum = 0;


					for (i=0; i<n; i++)//row_sum
						{ 
							s = "";
							row_sum = 0;
						for (j=0; j<n; j++)
							{  
								data_str = Convert::ToString(square[i][j]);
								blank_len = block_len - data_str->Length;
								for (k=0; k<blank_len; k++) s += " ";
								s += data_str; 
								 row_sum += square[i][j];//第三格
							}
							richTextBox1->AppendText(s+" _"+row_sum+"\n");//顯示
						}

					 s = "";
					for (j=0; j<n; j++)//column_sum
						{
							col_sum = 0;
							for (i=0; i<n; i++)
								{   
									col_sum += square[i][j];
								}
							data_str = Convert::ToString(col_sum);
							blank_len = block_len - data_str->Length;
							for (k=0; k<blank_len-1; k++) s += " ";
							richTextBox1->AppendText(s+"|"+row_sum); //顯示
						}

					
				}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 int n = int::Parse(textBox1->Text);//轉換
			 MagicSquare(n);//呼叫函式
			 printSquare(n);//呼叫函式
		 }
	};
}
