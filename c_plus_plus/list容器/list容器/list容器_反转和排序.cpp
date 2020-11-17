//#include <iostream>
//using namespace std;
//#include <list>
//
//void printList(const list<int>& l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>l1;
//
//	l1.push_back(50);
//	l1.push_back(20);
//	l1.push_back(80);
//	l1.push_back(40);
//
//	//反转前
//	printList(l1);
//
//	l1.reverse();
//	//反转后
//	printList(l1);
//
//	//排序
//	printList(l1);
//}
//
//void test02()
//{
//	list<int>l1;
//
//	l1.push_back(50);
//	l1.push_back(20);
//	l1.push_back(80);
//	l1.push_back(40);
//
//	//排序前
//	printList(l1);
//
//	l1.sort();
//
//	//排序后
//	printList(l1);
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}