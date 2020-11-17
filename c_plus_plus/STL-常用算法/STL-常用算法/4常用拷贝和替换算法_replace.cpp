//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(60);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(10);
//
//	cout << "Ìæ»»Ç°£º" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//	replace(v.begin(), v.end(), 20, 100);
//
//	cout << "Ìæ»»ºó£º" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
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