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
//
//class Greater10
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 10;
//	}
//};
//
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
//	replace_if(v.begin(), v.end(), Greater10(), 100);
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
