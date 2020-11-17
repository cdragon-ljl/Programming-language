//#include <iostream>
//using namespace std;
//#include <deque>
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_front(30);
//	d1.push_front(20);
//	d1.push_front(10);
//
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";
//		cout << d1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "第一个元素：" << d1.front() << endl;
//	cout << "最后一个元素：" << d1.back() << endl;
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