//#include <iostream>
//using namespace std;
//#include <string>
//
//template<class T1, class T2>
//class Person;
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>p)
//{
//	cout << "Name : " << p.m_Name << " Age : " << p.m_Age << endl;
//}
//
//template<class T1, class T2>
//class Person
//{
//	//全局函数 类内实现
//	friend void printPerson(Person<T1, T2>p)
//	{
//		cout << "Name : " << p.m_Name << " Age : " << p.m_Age << endl;
//	}
//
//	//全局函数 类外实现
//	friend void printPerson2<>(Person<T1, T2>p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//void test01()
//{
//	Person<string, int>p("Tom", 28);
//	printPerson(p);
//}
//
//void test02()
//{
//	Person<string, int>p("Jerry", 28);
//	printPerson2(p);
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