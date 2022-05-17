#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;


ref class DB
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	DB();
	DataTable^ getData(String^ mail, String^ password);
	void OpenConection();
	void CloseConection();
	void InsertData(String^ m, String^ p, String^ n, String^ s, String^ sex, String^ a);
	void DeleteData(String^ dm, String^ dp);
	
};	

