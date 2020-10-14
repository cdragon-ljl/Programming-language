//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	static void func()
//	{
//		cout << "Base - static func" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base - static func(int a)" << endl;
//	}
//	static int m_A;
//};
//
//int Base::m_A = 100;
//
//class Son : public Base
//{
//public:
//	static void func()
//	{
//		cout << "Son - static func" << endl;
//	}
//	static int m_A;
//};
//int Son::m_A = 200;
//
//
//void test01()
//{
//	//通过对象访问
//	cout << "通过对象访问" << endl;
//	Son s;
//	cout << "Son  下的 m_A =" << s.m_A << endl;
//	cout << "Base 下的 m_A =" << s.Base::m_A << endl;
//
//	//通过类名访问
//	cout << "通过类名访问" << endl;
//	cout << "Son  下的 m_A =" << Son::m_A << endl;
//	//第一个::代表通过类名方式访问 第二个::代表访问父类作用域下
//	cout << "Base 下的 m_A =" << Son::Base::m_A << endl;
//}
//
//void test02()
//{
//	//通过对象访问
//	Son s;
//	cout << "通过对象访问" << endl;
//	s.func();
//	s.Base::func();
//	s.Base::func(100);
//
//	//通过类名访问
//	cout << "通过类名访问" << endl;
//	Son::func();
//	Son::Base::func();
//	Son::Base::func(100);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//
//	return 0;
//}