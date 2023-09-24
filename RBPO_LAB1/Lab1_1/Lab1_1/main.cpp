#include <iostream>
#include <string>
using namespace std;

unsigned short height;
string strGlobalSalary;

unsigned short ReadPersonAge()
{
	unsigned short age;
	cin >> age;
	return age;
}
string ReadPersonName()
{
	string name;
	cin >> name;
	return name;
}
void ReadPersonHeight()
{
	cin >> height;
}
void ReadPersonWeight(unsigned short& _weight)
{
	cin >> _weight;
}
void ReadPersonSalary(double* _salary)
{
	cin >> *(_salary);
}
void ReadPersonData(string& _name, unsigned short& _age, double& _salary)
{
	cout << "������� ���: ";
	_name = ReadPersonName();
	cout << "������� �������: ";
	_age = ReadPersonAge();
	cout << "������� �/�: ";
	ReadPersonSalary(&_salary);
}
void ReadPersonData(string& _name, unsigned short& _age, unsigned short& height, unsigned short& _weight)
{
	cout << "������� ���: ";
	_name = ReadPersonName();
	cout << "������� �������: ";
	_age = ReadPersonAge();
	cout << "������� ����: ";
	ReadPersonHeight();
	cout << "������� ���: ";
	ReadPersonWeight(_weight);
}

void WritePersonData(const string& _name,
	const string& _height = "",
	const string& _weight = "",
	const unsigned short* _age = 0)
{
	cout << "���: " << _name << endl;
	cout << "����: " << _height << endl;
	cout << "���: " << _weight << endl;
	cout << "�������: " << *(_age) << endl;
	cout << "�/�: " << strGlobalSalary << endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	unsigned short weight, age;
	string strHeight, strWeight;
	string name;
	double salary;

	ReadPersonData(name, age, salary);
	strGlobalSalary = to_string(salary);
	WritePersonData(name, strHeight, strWeight, &age);
	ReadPersonData(name, age, height, weight);
	WritePersonData(name, to_string(height), to_string(weight), &age);

	return 0;
}

