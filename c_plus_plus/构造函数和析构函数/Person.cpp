#include "Person.h"


Person::Person()
{
	cout << "Person �޲ι��캯���ĵ���" << endl;
}

Person::Person(int a)
{
	age = a;
	cout << "Person �вι��캯���ĵ���" << endl;
}

Person::Person(const Person &p)
{
	age = p.age;
	cout << "Person �������캯���ĵ���" << endl;
}

Person::~Person()
{
	cout << "Person ���������ĵ���" << endl;
}