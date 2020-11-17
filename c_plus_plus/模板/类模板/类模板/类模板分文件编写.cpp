//#include <iostream>
//using namespace std;
//
////类模板分文件编写问题及解决
//
////第一种解决方式，直接包含源文件
//#include "person.hpp"
//
////第二种解决方式，将.h和.cpp中的内容写到一起，将后缀名改成.hpp
//
//void test01()
//{
//	Person<string, int>p("CD", 26);
//	p.showPerson();
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