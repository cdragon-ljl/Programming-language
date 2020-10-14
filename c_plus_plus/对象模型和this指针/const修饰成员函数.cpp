#include <iostream>
using namespace std;

//常函数
class Person
{
public:
	//this指针的本质 是 指针常量 
	//Person * const this;
	//指针的指向是不可以修改的,指针指向的值可以修改
	//在成员函数后面加const，修饰的是this指针，让指针指向的值也不可以修改
	//const Person * const this
	void showPerson() const
	{
		//this->m_A = 100;
		this->m_B = 100;
	}

	int m_A;
	mutable int m_B;
};

//常对象
void test04()
{
	Person p;
	p.showPerson();
}

void test05()
{
	const Person p;//在对象前加const，变成常对象
	p.m_A = 100;
	p.m_B = 100;

	//常对象只能调用常函数
	p.showPerson();
}
int main()
{

	system("pause");
	return 0;
}