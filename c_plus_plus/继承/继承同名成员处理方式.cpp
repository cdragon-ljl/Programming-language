//#include <iostream>
//using namespace std;
//
////继承中同名成员处理方式
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base - func()调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)调用" << endl;
//	}
//
//	int m_A;
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void func()
//	{
//		cout << "Son - func()调用" << endl;
//	}
//
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//	cout << s.m_A << endl;
//	//如果通过子类对象 访问到父类中同名成员，需要加作用域
//	cout << s.Base::m_A << endl;
//}
//
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//	s.Base::func(10);
//}
//
//int main()
//{
////  test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}