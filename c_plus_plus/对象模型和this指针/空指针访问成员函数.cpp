#include <iostream>
using namespace std;

//空指针调用成员函数
class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << this->m_Age << endl;
	}

	int m_Age;

};

void test03()
{
	Person * p = NULL;

	p->showClassName();

	p->showPersonAge();
}

int main2()
{
	test03();

	system("pause");

	return 0;
}