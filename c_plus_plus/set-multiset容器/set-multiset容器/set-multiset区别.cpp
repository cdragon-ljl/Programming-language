//#include <iostream>
//using namespace std;
//#include <set>
//
//void test01()
//{
//	set<int>s1;
//
//	pair<set<int>::iterator, bool> ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "第一次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败" << endl;
//	}
//
//	ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//
//	multiset<int>ms1;
//
//	ms1.insert(10);
//	ms1.insert(10);
//
//	for (multiset<int>::iterator it = ms1.begin(); it != ms1.end(); it++)
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