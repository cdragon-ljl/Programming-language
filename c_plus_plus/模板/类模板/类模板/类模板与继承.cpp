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
////����֪�������е�T���ͣ����ܼ̳и�����
//class Son1 :public Base<int>
//{
//	
//};
////��������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
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