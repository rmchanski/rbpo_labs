#include "Header.h"

string strGlobalSalary;

void WritePersonData(const string& _name,
	const string& _height = "",
	const string& _weight = "",
	const unsigned short* _age = 0)
{
	cout << endl << "-" << endl;
	cout << "���: " << _name << endl;
	cout << "����: " << _height << endl;
	cout << "���: " << _weight << endl;
	cout << "�������: " << *(_age) << endl;
	cout << "�/�: " << strGlobalSalary << endl;
	cout << endl << "-" << endl;
}