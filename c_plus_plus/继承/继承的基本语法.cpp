//#include <iostream>
//using namespace std;
//
////class Java
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
////	}
////
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
////	}
////	void left()
////	{
////		cout << "Java、Python、C++...(公共分类列表)" << endl;
////	}
////	void content()
////	{
////		cout << "Java学科视频" << endl;
////	}
////};
////
////class Python
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
////	}
////
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
////	}
////	void left()
////	{
////		cout << "Java、Python、C++...(公共分类列表)" << endl;
////	}
////	void content()
////	{
////		cout << "Python学科视频" << endl;
////	}
////};
//
////继承实现页面
////继承的好处：减少重复代码
////语法： class 子类 : 继承方式 父类
////子类 也称为 派生类
////父类 也称为 基类
//
////公共页面类
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//	}
//	
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++...(公共分类列表)" << endl;
//	}
//};
//
//class Java : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
//void test01()
//{
//	Java ja;
//
//	cout << "Java下载视频页面如下：" << endl;
//
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "-----------------------" << endl;
//
//	Python py;
//
//	cout << "Python下载视频页面如下：" << endl;
//
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
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