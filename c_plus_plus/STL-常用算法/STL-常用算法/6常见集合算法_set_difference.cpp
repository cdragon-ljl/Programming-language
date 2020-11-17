//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>vt;
//	vt.resize(max(v1.size(), v2.size()));
//
//	cout << "v1和v2的差集为：";
//	vector<int>::iterator pos = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
//	for_each(vt.begin(), pos, Myprint);
//	cout << endl;
//
//	cout << "v2和v1的差集为：";
//	pos = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vt.begin());
//	for_each(vt.begin(), pos, Myprint);
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