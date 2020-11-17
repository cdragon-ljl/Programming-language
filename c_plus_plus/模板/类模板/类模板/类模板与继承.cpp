//#include <iostream>
//using namespace std;
//#include <string>
//
//template<class T>
//class Base
//{
//public:
//	T m;
//};
//
////必须知道父类中的T类型，才能继承给子类
//class Son1 :public Base<int>
//{
//	
//};
////如果想灵活指定父类中T类型，子类也需要变类模板
//template<class T1, class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1 type: " << typeid(T1).name() << endl;
//		cout << "T2 type: " << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void test02()
//{
//	Son2<int, char>s2;
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//
//	return 0;
//}