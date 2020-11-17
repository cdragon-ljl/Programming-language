//#include <iostream>
//using namespace std;
//#include <vector>
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////vector容器互换
////1.基本使用
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 9; i >= 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	cout << "交换前" << endl;
//	v1.swap(v2);
//	cout << "交换后" << endl;
//	printVector(v1);
//	printVector(v2);
//}
////2.实际用途
//
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 1000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v capacity : " << v.capacity() << endl;
//	cout << "v size : " << v.size() << endl;
//
//	v.resize(3);
//	cout << "v capacity : " << v.capacity() << endl;
//	cout << "v size : " << v.size() << endl;
//
//	//巧用swap可以收缩内存空间
//	vector<int>(v).swap(v);
//	cout << "v capacity : " << v.capacity() << endl;
//	cout << "v size : " << v.size() << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}