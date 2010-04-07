#pragma once

#include "OpenGL.h"

namespace OpenGL_on_a_Windows_Form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace OpenGLForm;

	

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
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
			OpenGL = gcnew COpenGL(this, 640, 480);
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
	
	private: System::ComponentModel::IContainer^  components;
	protected: 

   public:	static int f=0, f1=0;
			static double ax0=-1,ax1=-1,ax2=-1,ax3=-1,ax4=-1,ax5=-1,ax6=-1,
			   ay0=-1,ay1=-1,ay2=-1,ay3=-1,ay4=-1,ay5=-1,ay6=-1,
			    bx0=-1,bx1=-1,bx2=-1,bx3=-1,bx4=-1,bx5=-1,bx6=-1,
			   by0=-1,by1=-1,by2=-1,by3=-1,by4=-1,by5=-1,by6=-1;
	private: System::Windows::Forms::Button^  poly1;
	private: System::Windows::Forms::Label^  x;
	private: System::Windows::Forms::Label^  y;
	private: System::Windows::Forms::TextBox^  x1;
	private: System::Windows::Forms::TextBox^  y1;


	private: System::Windows::Forms::Button^  add1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Button^  add2;

	private: System::Windows::Forms::TextBox^  y2;

	private: System::Windows::Forms::TextBox^  x2;

	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	public: 



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		OpenGLForm::COpenGL ^ OpenGL;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->poly1 = (gcnew System::Windows::Forms::Button());
			this->x = (gcnew System::Windows::Forms::Label());
			this->y = (gcnew System::Windows::Forms::Label());
			this->x1 = (gcnew System::Windows::Forms::TextBox());
			this->y1 = (gcnew System::Windows::Forms::TextBox());
			this->add1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->add2 = (gcnew System::Windows::Forms::Button());
			this->y2 = (gcnew System::Windows::Forms::TextBox());
			this->x2 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// poly1
			// 
			this->poly1->Location = System::Drawing::Point(786, 24);
			this->poly1->Name = L"poly1";
			this->poly1->Size = System::Drawing::Size(64, 24);
			this->poly1->TabIndex = 0;
			this->poly1->Text = L"Polygon 1";
			this->poly1->UseVisualStyleBackColor = true;
			this->poly1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// x
			// 
			this->x->AutoSize = true;
			this->x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->x->Location = System::Drawing::Point(798, 153);
			this->x->Name = L"x";
			this->x->Size = System::Drawing::Size(15, 13);
			this->x->TabIndex = 1;
			this->x->Text = L"X";
			// 
			// y
			// 
			this->y->AutoSize = true;
			this->y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->y->Location = System::Drawing::Point(888, 153);
			this->y->Name = L"y";
			this->y->Size = System::Drawing::Size(15, 13);
			this->y->TabIndex = 2;
			this->y->Text = L"Y";
			// 
			// x1
			// 
			this->x1->Location = System::Drawing::Point(783, 187);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(57, 20);
			this->x1->TabIndex = 3;
			// 
			// y1
			// 
			this->y1->Location = System::Drawing::Point(874, 187);
			this->y1->Name = L"y1";
			this->y1->Size = System::Drawing::Size(57, 20);
			this->y1->TabIndex = 4;
			// 
			// add1
			// 
			this->add1->Location = System::Drawing::Point(811, 103);
			this->add1->Name = L"add1";
			this->add1->Size = System::Drawing::Size(67, 20);
			this->add1->TabIndex = 5;
			this->add1->Text = L"Add1";
			this->add1->UseVisualStyleBackColor = true;
			this->add1->Click += gcnew System::EventHandler(this, &Form1::add1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(799, 242);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(889, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(798, 277);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(889, 277);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(889, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(798, 308);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(889, 340);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(798, 340);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(889, 379);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 15;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(798, 379);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 14;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(889, 408);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 17;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(798, 408);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 13);
			this->label12->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1086, 408);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 34;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(995, 408);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 33;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(1086, 379);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 32;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(995, 379);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 31;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1086, 340);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 13);
			this->label17->TabIndex = 30;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(995, 340);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 13);
			this->label18->TabIndex = 29;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(1086, 308);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 13);
			this->label19->TabIndex = 28;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(995, 308);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 13);
			this->label20->TabIndex = 27;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(1086, 277);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 13);
			this->label21->TabIndex = 26;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(995, 277);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 13);
			this->label22->TabIndex = 25;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(1086, 239);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 13);
			this->label23->TabIndex = 24;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(996, 242);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 13);
			this->label24->TabIndex = 23;
			// 
			// add2
			// 
			this->add2->Location = System::Drawing::Point(1008, 103);
			this->add2->Name = L"add2";
			this->add2->Size = System::Drawing::Size(62, 20);
			this->add2->TabIndex = 22;
			this->add2->Text = L"Add2";
			this->add2->UseVisualStyleBackColor = true;
			this->add2->Click += gcnew System::EventHandler(this, &Form1::add2_Click);
			// 
			// y2
			// 
			this->y2->Location = System::Drawing::Point(1071, 187);
			this->y2->Name = L"y2";
			this->y2->Size = System::Drawing::Size(57, 20);
			this->y2->TabIndex = 21;
			// 
			// x2
			// 
			this->x2->Location = System::Drawing::Point(980, 187);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(57, 20);
			this->x2->TabIndex = 20;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(1085, 153);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(15, 13);
			this->label25->TabIndex = 19;
			this->label25->Text = L"Y";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(995, 153);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(15, 13);
			this->label26->TabIndex = 18;
			this->label26->Text = L"X";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(876, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 24);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Polygon 2";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1013, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 22);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Intersection";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1115, 23);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 24);
			this->button3->TabIndex = 38;
			this->button3->Text = L"Union";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1192, 513);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->add2);
			this->Controls->Add(this->y2);
			this->Controls->Add(this->x2);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->add1);
			this->Controls->Add(this->y1);
			this->Controls->Add(this->x1);
			this->Controls->Add(this->y);
			this->Controls->Add(this->x);
			this->Controls->Add(this->poly1);
			this->Name = L"Form1";
			this->Text = L"my form";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Click += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				UNREFERENCED_PARAMETER(sender);
				 UNREFERENCED_PARAMETER(e);
				 vector<double> ax,ay;
				 //ax.push_back(3)    ; ay.push_back(3);
				 OpenGL->Render(ax,ay);
				OpenGL->SwapOpenGLBuffers();
				 
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 UNREFERENCED_PARAMETER(sender);
				 UNREFERENCED_PARAMETER(e);
				
				 vector<double> ax,ay;
				 double tempx,tempy;
				 
				tempx=ax0,tempy=ay0;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax1,tempy=ay1;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax2,tempy=ay2;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax3,tempy=ay3;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax4,tempy=ay4;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax5,tempy=ay5;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				ofstream out("out.txt");
				for(int i=0;i<ax.size();i++)
				{
				  out << ax[i] <<"   "<< ay[i]<<endl;
				}
				out.close();

				 OpenGL->Render(ax,ay);
				 OpenGL->SwapOpenGLBuffers();

			 }
	private: System::Void add1_Click(System::Object^  sender, System::EventArgs^  e) {
				 float ax,ay;
				  String^ xval = this->x1->Text;
				 String^ yval = this->y1->Text;
				 
				 
				 char s[10];
				 int i;
				 for(i=0;i<xval->Length;++i)
					 s[i] = xval[i];
				 s[i] = '\0';
				 ax = atof(s);

				 for( i=0;i<yval->Length;++i)
					 s[i] = yval[i];
				 s[i] = '\0';
				  ay = atof(s);
				 
				  switch (f)
				  {
				  case 0:
					 this->label1->Text = xval;
					 this->label2->Text = yval;	
					  ax0=ax; ay0=ay; f++; break;
				  case 1:
					  this->label3->Text = xval;
				      this->label4->Text = yval;	
				      ax1=ax;ay1=ay;f++;break;
				  case 2:
					  this->label6->Text = xval;
				      this->label5->Text = yval;	
				      ax2=ax;ay2=ay;f++; break;
				  case 3:
					  this->label8->Text = xval;
				      this->label7->Text = yval;	
				      ax3=ax;ay3=ay;f++;break;
			      case 4:
					  this->label10->Text = xval;
				      this->label9->Text = yval;	
				      ax4=ax;ay4=ay;f++;break;
				  case 5:
					  this->label12->Text = xval;
				      this->label11->Text = yval;	
				      ax5=ax;ay5=ay;f=0;break;
				  }
			 }
private: System::Void add2_Click(System::Object^  sender, System::EventArgs^  e) {

			  float bx,by;
				 String^ xval = this->x2->Text;
				 String^ yval = this->y2->Text;
				 
				 
				 char s[10];
				 int i;
				 for(i=0;i<xval->Length;++i)
					 s[i] = xval[i];
				 s[i] = '\0';
				 bx = atof(s);

				 for( i=0;i<yval->Length;++i)
					 s[i] = yval[i];
				 s[i] = '\0';
				  by = atof(s);
				 
				  switch (f1)
				  {
				  case 0:
					 this->label24->Text = xval;
					 this->label23->Text = yval;	
					  bx0=bx; by0=by; f1++; break;
				  case 1:
					  this->label22->Text = xval;
				      this->label21->Text = yval;	
				      bx1=bx;by1=by;f1++;break;
				  case 2:
					  this->label20->Text = xval;
				      this->label19->Text = yval;	
				      bx2=bx;by2=by;f1++; break;
				  case 3:
					  this->label18->Text = xval;
				      this->label17->Text = yval;	
				      bx3=bx;by3=by;f1++;break;
			      case 4:
					  this->label16->Text = xval;
				      this->label15->Text = yval;	
				      bx4=bx;by4=by;f1++;break;
				  case 5:
					  this->label14->Text = xval;
				      this->label13->Text = yval;	
				      bx5=bx;by5=by;f1=0;break;
				  }

		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 UNREFERENCED_PARAMETER(sender);
			 UNREFERENCED_PARAMETER(e);
				
				 vector<double> bx,by;
				 double tempx,tempy;
				 
				tempx=bx0,tempy=by0;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx1,tempy=by1;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx2,tempy=by2;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx3,tempy=by3;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx4,tempy=by4;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx5,tempy=by5;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				ofstream out("out.txt");
				for(int i=0;i<bx.size();i++)
				{
				  out << bx[i] <<"   "<< by[i]<<endl;
				}
				out.close();

				 OpenGL->Render(bx,by);
				 OpenGL->SwapOpenGLBuffers();
		 }
public:		 
bool lineSegmentIntersection(
double Ax, double Ay,
double Bx, double By,
double Cx, double Cy,
double Dx, double Dy,
double *X, double *Y) {

  double  distAB, theCos, theSin, newX, ABpos ;

  //  Fail if either line segment is zero-length.
  if (Ax==Bx && Ay==By || Cx==Dx && Cy==Dy) return false;

  //  Fail if the segments share an end-point.
  if (Ax==Cx && Ay==Cy || Bx==Cx && By==Cy
  ||  Ax==Dx && Ay==Dy || Bx==Dx && By==Dy) {
    return false; }

  //  (1) Translate the system so that point A is on the origin.
  Bx-=Ax; By-=Ay;
  Cx-=Ax; Cy-=Ay;
  Dx-=Ax; Dy-=Ay;

  //  Discover the length of segment A-B.
  distAB=sqrt(Bx*Bx+By*By);

  //  (2) Rotate the system so that point B is on the positive X axis.
  theCos=Bx/distAB;
  theSin=By/distAB;
  newX=Cx*theCos+Cy*theSin;
  Cy  =Cy*theCos-Cx*theSin; Cx=newX;
  newX=Dx*theCos+Dy*theSin;
  Dy  =Dy*theCos-Dx*theSin; Dx=newX;

  //  Fail if segment C-D doesn't cross line A-B.
  if (Cy<0. && Dy<0. || Cy>=0. && Dy>=0.) return false;

  //  (3) Discover the position of the intersection point along line A-B.
  ABpos=Dx+(Cx-Dx)*Dy/(Dy-Cy);

  //  Fail if segment C-D crosses line A-B outside of segment A-B.
  if (ABpos<0. || ABpos>distAB) return false;

  //  (4) Apply the discovered position to line A-B in the original coordinate system.
  *X=Ax+ABpos*theCos;
  *Y=Ay+ABpos*theSin;

  //  Success.
  return true;
}

int pnpoly(int nvert, float *vertx, float *verty, float testx, float testy)
{
  int i, j, c = 0;
  for (i = 0, j = nvert-1; i < nvert; j = i++) {
    if ( ((verty[i]>testy) != (verty[j]>testy)) &&
	 (testx < (vertx[j]-vertx[i]) * (testy-verty[i]) / (verty[j]-verty[i]) + vertx[i]) )
       c = !c;
  }
  return c;
}
// for union
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			UNREFERENCED_PARAMETER(sender);
		    UNREFERENCED_PARAMETER(e);
			  vector<double> ax,ay,int_setx,int_sety;
				 double tempx,tempy;
				 
				tempx=ax0,tempy=ay0;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax1,tempy=ay1;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax2,tempy=ay2;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax3,tempy=ay3;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax4,tempy=ay4;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax5,tempy=ay5;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				 vector<double> bx,by;
				 
				tempx=bx0,tempy=by0;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx1,tempy=by1;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx2,tempy=by2;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx3,tempy=by3;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx4,tempy=by4;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx5,tempy=by5;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

			 vector<double> union_setx, union_sety;
			 double X,Y,Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
			  float vertx[100], verty[100];
			 for(int j=0;j<bx.size();j++)
				 vertx[j] = bx[j], verty[j] = by[j];

			 for(int i=0;i<ax.size();i++)
					{			   
					  double testx = ax[i], testy = ay[i];
					  if(!pnpoly(bx.size(),vertx,verty,testx,testy))  
						  union_setx.push_back(testx), union_sety.push_back(testy);  // union set is set of points from poly1 and poly2 which creates a union
					  else
						  int_setx.push_back(testx),int_sety.push_back(testy);
					}

			 for(int j=0;j<ax.size();j++)
				 vertx[j] = ax[j], verty[j] = ay[j];

			 for(int i=0;i<bx.size();i++)
					{			   
					  double testx = bx[i], testy = by[i];
					  if(!pnpoly(ax.size(),vertx,verty,testx,testy))
						  union_setx.push_back(testx), union_sety.push_back(testy);
					  else
						  int_setx.push_back(testx),int_sety.push_back(testy);
					}

			 for(int i=0;i<ax.size();i++)
					for(int j=0;j<bx.size();j++)
					{
					  
						  Ax = ax[i]; Ay = ay[i];
						  Bx = ax[(i+1)%ax.size()] ;By = ay[(i+1)%ax.size()] ;
						  Cx =bx[j]; Cy = by[j];
						  Dx = bx[(j+1)%bx.size()]; Dy = by[(j+1)%bx.size()] ; 
						  if(lineSegmentIntersection(Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,&X,&Y))
							/* cout<<"X="<<X<<"Y="<<Y<<endl,*/ union_setx.push_back(X), union_sety.push_back(Y);
						  else
							  int_setx.push_back(X),int_sety.push_back(Y);
				 }
			
			OpenGL->Render(union_setx,union_sety);
		    OpenGL->SwapOpenGLBuffers();	

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			UNREFERENCED_PARAMETER(sender);
		    UNREFERENCED_PARAMETER(e);
			  vector<double> ax,ay,int_setx,int_sety;
				 double tempx,tempy;
				 
				tempx=ax0,tempy=ay0;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax1,tempy=ay1;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax2,tempy=ay2;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax3,tempy=ay3;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax4,tempy=ay4;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				tempx=ax5,tempy=ay5;
				if(tempx != -1 && tempy!= -1)
				ax.push_back(tempx/50.0), ay.push_back(tempy/50.0);

				 vector<double> bx,by;
				 
				tempx=bx0,tempy=by0;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx1,tempy=by1;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx2,tempy=by2;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx3,tempy=by3;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx4,tempy=by4;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

				tempx=bx5,tempy=by5;
				if(tempx != -1 && tempy!= -1)
				bx.push_back(tempx/50.0), by.push_back(tempy/50.0);

			 double X,Y,Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
			  float vertx[100], verty[100];
			 for(int j=0;j<bx.size();j++)
				 vertx[j] = bx[j], verty[j] = by[j];

			 for(int i=0;i<ax.size();i++)
					{			   
					  double testx = ax[i], testy = ay[i];
					  if(pnpoly(bx.size(),vertx,verty,testx,testy))
						  int_setx.push_back(testx),int_sety.push_back(testy);
					}

			 for(int j=0;j<ax.size();j++)
				 vertx[j] = ax[j], verty[j] = ay[j];

			 for(int i=0;i<bx.size();i++)
					{			   
					  double testx = bx[i], testy = by[i];
					  if(pnpoly(ax.size(),vertx,verty,testx,testy))
						  int_setx.push_back(testx),int_sety.push_back(testy);
					}

			 for(int i=0;i<ax.size();i++)
					for(int j=0;j<bx.size();j++)
					{
					  
						  Ax = ax[i]; Ay = ay[i];
						  Bx = ax[(i+1)%ax.size()] ;By = ay[(i+1)%ax.size()] ;
						  Cx =bx[j]; Cy = by[j];
						  Dx = bx[(j+1)%bx.size()]; Dy = by[(j+1)%bx.size()] ; 
						  if(!lineSegmentIntersection(Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,&X,&Y))
							  int_setx.push_back(X),int_sety.push_back(Y);
				 }
			
			OpenGL->Render(int_setx,int_sety);
		    OpenGL->SwapOpenGLBuffers();
		 }
};
}

