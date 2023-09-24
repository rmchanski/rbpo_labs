#include "Header.h"

void ReadPersonData(string& _name, unsigned short& _age, double& _salary)
{
	cout << "Перегруженная ф-ция #1" << endl;
	cout << "Введите имя: ";
	_name = ReadPersonName();
	cout << "Введите возраст: ";
	_age = ReadPersonAge();
	cout << "Введиет З/П: ";
	ReadPersonSalary(&_salary);
	cout << endl;
}

void ReadPersonData(string& _name, unsigned short& _age, unsigned short& height, unsigned short& _weight)
{
	cout << "Перегруженная ф-ция #2" << endl;
	cout << "Введите имя: ";
	_name = ReadPersonName();
	cout << "Введите возраст: ";
	_age = ReadPersonAge();
	cout << "Введите рост: ";
	ReadPersonHeight();
	cout << "Введите вес: ";
	ReadPersonWeight(_weight);
	cout << endl;
}