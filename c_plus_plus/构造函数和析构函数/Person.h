#pragma once
#include <iostream>
using namespace std;

class Person
{
public:
	Person();
	Person(int a);
	Person(const Person &p);
	~Person();

	int age;
};
