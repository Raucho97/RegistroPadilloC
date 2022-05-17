#include "pch.h"
#include "DB.h"

DB::DB() {

	this->connectionString = "datasource=localhost; username=root; password=raul1997; database=usuarios";
	this->conn = gcnew MySqlConnection(this->connectionString);
}

void DB::OpenConection() {

	this->conn->Open();
}

void DB::CloseConection() {

	this->conn->Close();
}


DataTable^ DB::getData(String^ mail, String^ password) {

	String^ sql = "select * from users where mail='" +mail+ "' and password='" +password+ "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	cursor->ExecuteNonQuery();

	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::InsertData(String^ m, String^ p, String^ n, String^ s, String^ sex, String^ a) {

	String^ sql = "insert into users(id, mail, password, name, surname, sex, age) values (null, '" + m + "','" + p + "', '" + n + "', '" + s + "', '" + sex + "', '" + a + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}


}

void DB::DeleteData(String^ dm, String^ dp) {

	String^ sql = "delete * from users where mail='" + dm + "' and password='" + dp + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	cursor->ExecuteNonQuery();

}



