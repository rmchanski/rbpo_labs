#include "Header.h"

void ReadPersonData(string& _name, unsigned short& _age, double& _salary)
{
	cout << endl << "-" << endl;
	cout << "������������� �-��� #1" << endl;
	cout << "������� ���: ";
	_name = ReadPersonName();
	cout << "������� �������: ";
	_age = ReadPersonAge();
	cout << "������� �/�: ";
	ReadPersonSalary(&_salary);
	cout << endl;
	cout << endl << "-" << endl;
}

void ReadPersonData(string& _name, unsigned short& _age, unsigned short& height, unsigned short& _weight)
{
	cout << endl << "-" << endl;
	cout << "������������� �-��� #2" << endl;
	cout << "������� ���: ";
	_name = ReadPersonName();
	cout << "������� �������: ";
	_age = ReadPersonAge();
	cout << "������� ����: ";
	ReadPersonHeight();
	cout << "������� ���: ";
	ReadPersonWeight(_weight);
	cout << endl;
	cout << endl << "-" << endl;
}