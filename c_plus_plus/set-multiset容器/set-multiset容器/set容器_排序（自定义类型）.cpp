//#include <iostream>
//using namespace std;
//#include <set>
//#include <string>
//
//
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
//class comparePerson
//{
//public:
//	bool operator()(const Person &p1, const Person& p2)const
//	{
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void test01()
//{
//	set<Person, comparePerson>s1;
//
//	Person p1("刘备", 24);
//	Person p2("关羽", 23);
//	Person p3("张飞", 22);
//	Person p4("赵云", 23);
//
//	s1.insert(p1);
//	s1.insert(p2);
//	s1.insert(p3);
//	s1.insert(p4);
//
//	for (set<Person, comparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;;
//	}
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}