//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>vt;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vt.resize(min(v1.size(), v2.size()));
//
//	vector<int>::iterator pos = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
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