#include <iostream>
using namespace std;
#include <fstream>

class Person
{
public:

	char m_Name[64];
	int m_Age;
};

void test01()
{
	ifstream ifs;

	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "open failed" << endl;
		return;
	}

	Person p;

	ifs.read((char *)&p, sizeof(Person));
	cout << "name: " << p.m_Name << "Age: " << p.m_Age << endl;

	ifs.close();
}

int main()
{
	test01();
	
	system("pause");

	return 0;
}