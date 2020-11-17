//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(2);
//
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//	if (pos != v.end())
//	{
//		cout << "找到了相邻重复元素" << *pos << endl;
//	}
//	else
//	{
//		cout << "没找到" << endl;
//	}
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}