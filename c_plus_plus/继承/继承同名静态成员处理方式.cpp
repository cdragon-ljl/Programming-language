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
//	//ͨ���������
//	cout << "ͨ���������" << endl;
//	Son s;
//	cout << "Son  �µ� m_A =" << s.m_A << endl;
//	cout << "Base �µ� m_A =" << s.Base::m_A << endl;
//
//	//ͨ����������
//	cout << "ͨ����������" << endl;
//	cout << "Son  �µ� m_A =" << Son::m_A << endl;
//	//��һ��::����ͨ��������ʽ���� �ڶ���::������ʸ�����������
//	cout << "Base �µ� m_A =" << Son::Base::m_A << endl;
//}
//
//void test02()
//{
//	//ͨ���������
//	Son s;
//	cout << "ͨ���������" << endl;
//	s.func();
//	s.Base::func();
//	s.Base::func(100);
//
//	//ͨ����������
//	cout << "ͨ����������" << endl;
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