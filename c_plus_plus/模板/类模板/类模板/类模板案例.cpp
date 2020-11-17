#include <iostream>
using namespace std;
#include "MyArray.hpp"
#include <string>

//测试自定义数据类型
class Person
{
public:
	Person() {};
	Person(string name, int age) 
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printIntArrar(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test01()
{
	MyArray<int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	cout << "arr1:" << endl;
	printIntArrar(arr1);
	cout << "arr1 Capacity:" << arr1.getCapacity() << endl;
	cout << "arr1 Size:" << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);
	printIntArrar(arr2);
	arr2.Pop_Back();
	cout << "尾删后" << endl;
	printIntArrar(arr2);

	cout << "arr2 Capacity:" << arr2.getCapacity() << endl;
	cout << "arr2 Size:" << arr2.getSize() << endl;
	//MyArray<int>arr3(100);
	//arr3 = arr1;
}

void printPersonArrar(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << "年龄：" << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person>arr(10);

	Person p1("孙悟空", 999);
	Person p2("李白",998);
	Person p3("韩信", 997);
	Person p4("赵云", 996);
	Person p5("露娜", 995);

	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	printPersonArrar(arr);

	//Capacity
	cout << "arr capacity : " << arr.getCapacity() << endl;

	//Size
	cout << "arr size : " << arr.getSize() << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");

	return 0;
}