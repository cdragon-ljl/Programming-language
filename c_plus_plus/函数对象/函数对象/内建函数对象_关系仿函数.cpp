//#include <iostream>
//using namespace std;
//#include <functional>
//#include <vector>
//#include <algorithm>
//
////内建函数对象 关系仿函数
//
///*
//equal_to		等于
//not_equal_to	不等于
//greater			大于
//greater_equal	大于等于
//less			小于
//less_equal		小于等于
//*/
//
//class Mycompare
//{
//public:
//	bool operator()(int val1, int val2)
//	{
//		return val1 > val2;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(80);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//sort(v.begin(), v.end(), Mycompare());
//	sort(v.begin(), v.end(), greater<int>());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
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