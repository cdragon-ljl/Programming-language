//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//
//class Mycompare
//{
//public:
//	bool operator()(int val1, int val2)
//	{
//		return val1 > val2;
//	}
//};
////二元谓词
//void test01()
//{
//	vector<int>v;
//	
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(90);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//使用函数对象 改变算法，从大到小排序
//	sort(v.begin(), v.end(), Mycompare());
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