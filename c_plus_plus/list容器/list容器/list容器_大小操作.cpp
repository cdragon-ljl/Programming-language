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
//void test01()
//{
//	list<int>l1;
//
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	printList(l1);
//	if (l1.empty())
//	{
//		cout << "l1为空" << endl;
//	}
//	else
//	{
//		cout << "l1不为空" << endl;
//		cout << "l1的元素个数为" << l1.size() << endl;
//	}
//
//	l1.resize(10);
//	printList(l1);
//	cout << "l1的元素个数为" << l1.size() << endl;
//	
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