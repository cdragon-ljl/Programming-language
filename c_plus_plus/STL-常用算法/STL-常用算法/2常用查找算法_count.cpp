//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <string>
//
////统计内置数据类型
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(10);
//
//	int num = count(v.begin(), v.end(), 10);
//	cout << num << endl;
//}
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator==(const Person& p)
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
////统计自定义数据类型
//void test02()
//{
//	vector<Person>v;
//
//	Person p1("刘备", 35);
//	Person p2("关羽", 30);
//	Person p3("张飞", 30);
//	Person p4("赵云", 25);
//	Person p5("曹操", 40);
//
//	Person p("诸葛亮", 30);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	int num = count(v.begin(), v.end(), p);
//	cout << "和诸葛亮同岁数的人员个数为：" << num << endl;
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