//#include <iostream>
//using namespace std;
//
////继承中的构造和析构顺序
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base 的构造函数" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base 的析构函数" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son 的构造函数" << endl;
//	}
//
//	~Son()
//	{
//		cout << "Son 的析构函数" << endl;
//	}
//
//};
//
//void test01()
//{
////	Base b;
//	//继承中的构造和析构顺序如下：
//	//先构造父类，在构造子类，然后析构子类，析构父类
//	Son son;
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