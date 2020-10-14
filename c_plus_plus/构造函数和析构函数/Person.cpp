#include "Person.h"


Person::Person()
{
	cout << "Person 无参构造函数的调用" << endl;
}

Person::Person(int a)
{
	age = a;
	cout << "Person 有参构造函数的调用" << endl;
}

Person::Person(const Person &p)
{
	age = p.age;
	cout << "Person 拷贝构造函数的调用" << endl;
}

Person::~Person()
{
	cout << "Person 析构函数的调用" << endl;
}