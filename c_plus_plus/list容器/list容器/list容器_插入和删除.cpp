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
//	//Î²²å
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//
//	//Í·²å
//	l1.push_front(100);
//	l1.push_front(200);
//	l1.push_front(300);
//	printList(l1);
//
//	//Î²É¾
//	l1.pop_back();
//	printList(l1);
//
//	//Í·É¾
//	l1.pop_front();
//	printList(l1);
//
//	//insert²åÈë
//	list<int>::iterator it = l1.begin();
//	it++;
//	l1.insert(it, 1000);
//	printList(l1);
//
//	//É¾³ý
//	it = l1.begin();
//	l1.erase(it);
//	printList(l1);
//
//	l1.push_back(10000);
//	printList(l1);
//	l1.remove(10000);
//	printList(l1);
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