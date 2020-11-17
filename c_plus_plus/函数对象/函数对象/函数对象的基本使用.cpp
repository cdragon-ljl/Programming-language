//#include <iostream>
//using namespace std;
//#include <string>
//
////函数对象（仿函数）
///*
//- 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//- 函数对象超出普通函数的概念，函数对象可以有自己的状态
//- 函数对象可以最为参数传递
//*/
//
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
////1函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//void test01()
//{
//	MyAdd myadd;
//	cout << myadd(10, 10) << endl;
//}
//
////2函数对象超出普通函数的概念，函数对象可以有自己的状态
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//
//	int count;
//};
//
//void test02()
//{
//	MyPrint myprint;
//	myprint("hello world");
//	myprint("hello world");
//	myprint("hello world");
//	myprint("hello world");
//	cout << myprint.count << endl;
//}
//
////3函数对象可以最为参数传递
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//
//void test03()
//{
//	MyPrint myprint;
//	doPrint(myprint, "hello c++");
//
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//
//	system("pause");
//
//	return 0;
//}