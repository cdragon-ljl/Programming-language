//#include <iostream>
//using namespace std;
//#include <string>
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	bool operator!=(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return false;
//		}
//		else
//		{
//			return true;
//		}
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//
//	Person p2("Jerry", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1 = p2" << endl;
//	}
//	else
//	{
//		cout << "p1 != p2" << endl;
//	}
//
//	if (p1 != p2)
//	{
//		cout << "p1 != p2" << endl;
//	}
//	else
//	{
//		cout << "p1 == p2" << endl;
//	}
//}
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}