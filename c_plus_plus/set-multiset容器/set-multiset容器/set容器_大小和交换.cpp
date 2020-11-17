//#include <iostream>
//using namespace std;
//#include <set>
//
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(70);
//
//	printSet(s1);
//
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1的大小为：" << s1.size() << endl;
//	}
//}
//
//void test02()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(70);
//
//	set<int>s2;
//
//	s2.insert(15);
//	s2.insert(25);
//	s2.insert(45);
//	s2.insert(65);
//
//	cout << "交换前" << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "交换后" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
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