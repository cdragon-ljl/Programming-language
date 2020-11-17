//#include <iostream>
//using namespace std;
//#include <string>
//
////字符串查找和替换
////1.查找
//void test01()
//{
//	string str1 = "I love c plus plus";
//	//find从左往右查找
//	int pos = str1.find("lo");
//	if (pos == -1)
//	{
//		cout << "not found" << endl;
//	}
//	else
//	{
//		cout << "pos = " << pos << endl;
//	}
//	//rfind从右往左查找
//	pos = str1.rfind("us");
//	if (pos == -1)
//	{
//		cout << "not found" << endl;
//	}
//	else
//	{
//		cout << "pos = " << pos << endl;
//	}
//}
////2.替换
//void test02()
//{
//	string str1 = "I love c plus plus";
//	//从2号位置起2个字符替换为hate,结果为I lllove ...
//	str1.replace(2, 2, "111o");
//	cout << "str1 = " << str1 << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}