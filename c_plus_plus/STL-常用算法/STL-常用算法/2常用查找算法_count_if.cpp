//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <string>
//
////ͳ��������������
//class Greater20
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 20;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(10);
//
//	int num = count_if(v.begin(), v.end(), Greater20());
//	cout << "����20�ĸ���Ϊ��" << num << endl;
//}
//
////ͳ���Զ�����������
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
//class AgeGreater35
//{
//public:
//	bool operator()(const Person& p)
//	{
//		return p.m_Age > 35;
//	}
//};
//void test02()
//{
//	vector<Person>v;
//	Person p1("����", 36);
//	Person p2("����", 30);
//	Person p3("�ŷ�", 30);
//	Person p4("����", 25);
//	Person p5("�ܲ�", 40);
//	
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	int num = count_if(v.begin(), v.end(), AgeGreater35());
//	cout << "����35��ĸ���Ϊ��" << num << endl;
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