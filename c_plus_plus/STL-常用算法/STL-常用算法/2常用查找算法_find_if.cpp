//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <string>
//
////常用查找算法 find_if
//
////1.查找内置数据类型
//class GreaterThenFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterThenFive());
//	if (pos != v.end())
//	{
//		cout << "找到了：" << *pos << endl;
//	}
//	else
//	{
//		cout << "没找到" << endl;
//	}
//}
//
////2查找自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//class Greater20
//{
//public:
//	bool operator()(Person& p)
//	{
//		return p.m_Age > 20;
//	}
//};
//void test02()
//{
//	vector<Person>v;
//
//	Person p1("A", 10);
//	Person p2("B", 20);
//	Person p3("C", 30);
//	Person p4("D", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	//查找大于20
//	vector<Person>::iterator pos = find_if(v.begin(), v.end(), Greater20());
//	if (pos != v.end())
//	{
//		cout << "找到了：" << (*pos).m_Name << " " << (*pos).m_Age << endl;
//	}
//	else
//	{
//		cout << "没找到" << endl;
//	}
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}