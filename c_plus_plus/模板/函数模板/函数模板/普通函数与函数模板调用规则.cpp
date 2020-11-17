//#include <iostream>
//using namespace std;
//
////普通函数与函数模板调用规则
////1.如果函数模板和普通函数都可以调用，优先调用普通函数
////2.可以通过空模板参数列表 强制调用 函数模板
////3.函数模板可以发生函数重载
////4.如果函数模板可以产生更好的匹配，优先使用函数模板
//
//void myPrint(int a, int b)
//{
//	cout << "普通函数调用" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "模板函数调用a,b" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b, T c)
//{
//	cout << "模板函数调用a,b,c" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	char c1 = 'c';
//	char c2 = 'd';
//
//	//如果函数模板和普通函数都可以调用，优先调用普通函数
//	myPrint(a, b);
//
//	//通过空模板参数列表 强制调用 函数模板
//	myPrint<>(a, b);
//
//	//函数模板可以发生函数重载
//	myPrint<>(a, b, c);
//
//	//如果函数模板可以产生更好的匹配，优先使用函数模板
//	myPrint<>(c1, c2);
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