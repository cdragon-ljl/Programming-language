#include <iostream>
using namespace std;
#include "Person.h"

void test1()
{
	//1.括号法
	Person p1;//默认构造函数调用
	Person p2(10);//有参构造函数调用
	Person p3(p2);//拷贝构造函数调用

	//2.显示法
	Person p1;//默认构造
	Person p2 = Person(10);//有参构造
	Person p3 = Person(p2);//拷贝构造



	cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的年龄为：" << p3.age << endl;
}

int main()
{
	test1();

	system("pause");
}