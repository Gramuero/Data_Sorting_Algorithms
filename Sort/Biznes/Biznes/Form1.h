#pragma once

namespace Biznes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	protected: 
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Data::DataSet^  dataSet1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Data::DataColumn^  dataColumn1;
	private: System::Data::DataColumn^  dataColumn2;
	private: System::Data::DataColumn^  dataColumn3;
	private: System::Data::DataColumn^  dataColumn4;
	private: System::Data::DataColumn^  dataColumn5;
	private: System::Data::DataColumn^  dataColumn6;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cidDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fioDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  adrDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  phoneDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  emailDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  imgDataGridViewTextBoxColumn;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->dataColumn6 = (gcnew System::Data::DataColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->cidDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fioDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->adrDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phoneDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->emailDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->imgDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Datebase\\biznes.accdb";
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT        biznes.*\r\nFROM            biznes";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `biznes` (`fio`, `adr`, `phone`, `email`, `img`) VALUES (\?, \?, \?, \?, " 
				L"\?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {(gcnew System::Data::OleDb::OleDbParameter(L"fio", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"fio")), (gcnew System::Data::OleDb::OleDbParameter(L"adr", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"adr")), (gcnew System::Data::OleDb::OleDbParameter(L"phone", System::Data::OleDb::OleDbType::VarWChar, 0, L"phone")), (gcnew System::Data::OleDb::OleDbParameter(L"email", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"email")), (gcnew System::Data::OleDb::OleDbParameter(L"img", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"img"))});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(16) {(gcnew System::Data::OleDb::OleDbParameter(L"fio", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"fio")), (gcnew System::Data::OleDb::OleDbParameter(L"adr", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"adr")), (gcnew System::Data::OleDb::OleDbParameter(L"phone", System::Data::OleDb::OleDbType::VarWChar, 0, L"phone")), (gcnew System::Data::OleDb::OleDbParameter(L"email", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"email")), (gcnew System::Data::OleDb::OleDbParameter(L"img", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"img")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_cid", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"cid", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_fio", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"fio", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_fio", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"fio", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_adr", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"adr", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_adr", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"adr", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_phone", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"phone", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_phone", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"phone", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_email", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"email", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_email", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"email", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_img", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"img", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_img", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"img", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(11) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_cid", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"cid", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_fio", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"fio", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_fio", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"fio", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_adr", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"adr", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_adr", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"adr", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_phone", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"phone", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_phone", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"phone", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_email", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"email", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_email", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"email", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_img", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"img", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_img", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"img", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(6) {(gcnew System::Data::Common::DataColumnMapping(L"cid", 
				L"cid")), (gcnew System::Data::Common::DataColumnMapping(L"fio", L"fio")), (gcnew System::Data::Common::DataColumnMapping(L"adr", 
				L"adr")), (gcnew System::Data::Common::DataColumnMapping(L"phone", L"phone")), (gcnew System::Data::Common::DataColumnMapping(L"email", 
				L"email")), (gcnew System::Data::Common::DataColumnMapping(L"img", L"img"))};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"biznes", __mcTemp__1))});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->dataTable1});
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(6) {this->dataColumn1, this->dataColumn2, 
				this->dataColumn3, this->dataColumn4, this->dataColumn5, this->dataColumn6});
			cli::array< System::String^ >^ __mcTemp__2 = gcnew cli::array< System::String^  >(1) {L"cid"};
			this->dataTable1->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__2, true))});
			this->dataTable1->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->dataColumn1};
			this->dataTable1->TableName = L"biznes";
			// 
			// dataColumn1
			// 
			this->dataColumn1->AllowDBNull = false;
			this->dataColumn1->AutoIncrement = true;
			this->dataColumn1->ColumnName = L"cid";
			this->dataColumn1->DataType = System::Int32::typeid;
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"fio";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"adr";
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"phone";
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"email";
			// 
			// dataColumn6
			// 
			this->dataColumn6->ColumnName = L"img";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->cidDataGridViewTextBoxColumn, 
				this->fioDataGridViewTextBoxColumn, this->adrDataGridViewTextBoxColumn, this->phoneDataGridViewTextBoxColumn, this->emailDataGridViewTextBoxColumn, 
				this->imgDataGridViewTextBoxColumn});
			this->dataGridView1->DataMember = L"biznes";
			this->dataGridView1->DataSource = this->dataSet1;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(640, 151);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &Form1::dataGridView1_CellValidating);
			this->dataGridView1->RowValidating += gcnew System::Windows::Forms::DataGridViewCellCancelEventHandler(this, &Form1::dataGridView1_RowValidating);
			this->dataGridView1->UserDeletingRow += gcnew System::Windows::Forms::DataGridViewRowCancelEventHandler(this, &Form1::dataGridView1_UserDeletingRow);
			// 
			// cidDataGridViewTextBoxColumn
			// 
			this->cidDataGridViewTextBoxColumn->DataPropertyName = L"cid";
			this->cidDataGridViewTextBoxColumn->HeaderText = L"Счетчик";
			this->cidDataGridViewTextBoxColumn->Name = L"cidDataGridViewTextBoxColumn";
			// 
			// fioDataGridViewTextBoxColumn
			// 
			this->fioDataGridViewTextBoxColumn->DataPropertyName = L"fio";
			this->fioDataGridViewTextBoxColumn->HeaderText = L"ФИО";
			this->fioDataGridViewTextBoxColumn->Name = L"fioDataGridViewTextBoxColumn";
			// 
			// adrDataGridViewTextBoxColumn
			// 
			this->adrDataGridViewTextBoxColumn->DataPropertyName = L"adr";
			this->adrDataGridViewTextBoxColumn->HeaderText = L"Адрес";
			this->adrDataGridViewTextBoxColumn->Name = L"adrDataGridViewTextBoxColumn";
			// 
			// phoneDataGridViewTextBoxColumn
			// 
			this->phoneDataGridViewTextBoxColumn->DataPropertyName = L"phone";
			this->phoneDataGridViewTextBoxColumn->HeaderText = L"Телефон";
			this->phoneDataGridViewTextBoxColumn->Name = L"phoneDataGridViewTextBoxColumn";
			// 
			// emailDataGridViewTextBoxColumn
			// 
			this->emailDataGridViewTextBoxColumn->DataPropertyName = L"email";
			this->emailDataGridViewTextBoxColumn->HeaderText = L"Эл.почта";
			this->emailDataGridViewTextBoxColumn->Name = L"emailDataGridViewTextBoxColumn";
			// 
			// imgDataGridViewTextBoxColumn
			// 
			this->imgDataGridViewTextBoxColumn->DataPropertyName = L"img";
			this->imgDataGridViewTextBoxColumn->HeaderText = L"Изображение";
			this->imgDataGridViewTextBoxColumn->Name = L"imgDataGridViewTextBoxColumn";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(187, 189);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 262);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->Text = L"Бизнес. Режим таблицы";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				  //загрузить данные
		oleDbDataAdapter1->Fill(dataTable1);
			 }
private: System::Void dataGridView1_UserDeletingRow(System::Object^  sender, System::Windows::Forms::DataGridViewRowCancelEventArgs^  e) {
			  System::Windows::Forms::DialogResult dr=
				 MessageBox::Show("Удалить запись?",
				 "Удаление записи",
				 MessageBoxButtons::OKCancel,
				 MessageBoxIcon::Warning,
				 MessageBoxDefaultButton::Button2);
			 if (dr==System::Windows::Forms::DialogResult::Yes)
			 { e->Cancel=true; }
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 //обновить данные
			 oleDbDataAdapter1->Update(dataSet1->Tables["biznes"]);
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void dataGridView1_CellValidating(System::Object^  sender, System::Windows::Forms::DataGridViewCellValidatingEventArgs^  e) 
		 {
			  if((e->ColumnIndex==1)&&(dataGridView1->Rows[e->RowIndex]->IsNewRow !=true))
			 {
				 if (String::IsNullOrEmpty(e->FormattedValue->ToString()) )
				 {
					 MessageBox::Show("CellValidating:Поле\"Имя\" не может быть пустым!",
				 "Контакты",
				 MessageBoxButtons::OK,
				 MessageBoxIcon::Error);
				 e->Cancel = true;
				}
			 }
		 }
private: System::Void dataGridView1_RowValidating(System::Object^  sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^  e)
		 {
			 if (dataGridView1->Rows[e->RowIndex]->IsNewRow !=true)
			 {
				 if(String::IsNullOrEmpty(dataGridView1->Rows[e->RowIndex]->Cells[1]->FormattedValue->ToString()))
				 {MessageBox::Show("CellValidating:Поле\"Имя\" не может быть пустым!",
				 "Контакты",
				 MessageBoxButtons::OK,
				 MessageBoxIcon::Error);
				 e->Cancel = true;
				 }
			 }

		 }
};
}

