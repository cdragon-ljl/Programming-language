//#include <iostream>
//using namespace std;
//
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void ShowPerson()
//	{
//		cout << "Name : " << this->m_Name << " Age : " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//void test01()
//{
//	Person<string, int>p1("�����", 1000);
//	p1.ShowPerson();
//}
//
////2.��ģ����ģ������б��п�����Ĭ�ϲ���
//void test02()
//{
//	Person<string>p2("��˽�", 999);
//	p2.ShowPerson();
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}