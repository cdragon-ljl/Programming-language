//#include <iostream>
//using namespace std;
//
////class Java
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
////	}
////
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
////	}
////	void left()
////	{
////		cout << "Java��Python��C++...(���������б�)" << endl;
////	}
////	void content()
////	{
////		cout << "Javaѧ����Ƶ" << endl;
////	}
////};
////
////class Python
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
////	}
////
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
////	}
////	void left()
////	{
////		cout << "Java��Python��C++...(���������б�)" << endl;
////	}
////	void content()
////	{
////		cout << "Pythonѧ����Ƶ" << endl;
////	}
////};
//
////�̳�ʵ��ҳ��
////�̳еĺô��������ظ�����
////�﷨�� class ���� : �̳з�ʽ ����
////���� Ҳ��Ϊ ������
////���� Ҳ��Ϊ ����
//
////����ҳ����
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//	
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++...(���������б�)" << endl;
//	}
//};
//
//class Java : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	Java ja;
//
//	cout << "Java������Ƶҳ�����£�" << endl;
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
//	cout << "Python������Ƶҳ�����£�" << endl;
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