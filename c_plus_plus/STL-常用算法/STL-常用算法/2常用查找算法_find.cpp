//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <string>
//
////���ò����㷨find
//
////����������������
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	
//	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
//	if (pos != v.end())
//	{
//		cout << "�ҵ��ˣ�" << *pos << endl;
//	}
//	else
//	{
//		cout << "û�ҵ�" << endl;
//	}
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
//
//	//����== �õײ�find֪����ζԱ�Person��������
//	bool operator==(const Person& p)
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
//	string m_Name;
//	int m_Age;
//};
////�����Զ�����������
//void test02()
//{
//	vector<Person>v;
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
//	vector<Person>::iterator pos = find(v.begin(), v.end(), p2);
//	if (pos != v.end())
//	{
//		cout << "�ҵ��ˣ�" << pos->m_Name<<" "<< pos->m_Age << endl;
//	}
//	else
//	{
//		cout << "û�ҵ�" << endl;
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