//#include <iostream>
//using namespace std;
//#include <functional>
//#include <vector>
//#include <algorithm>
//
////�ڽ��������� ��ϵ�º���
//
///*
//equal_to		����
//not_equal_to	������
//greater			����
//greater_equal	���ڵ���
//less			С��
//less_equal		С�ڵ���
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