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
////vector��������
////1.����ʹ��
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
//	cout << "����ǰ" << endl;
//	v1.swap(v2);
//	cout << "������" << endl;
//	printVector(v1);
//	printVector(v2);
//}
////2.ʵ����;
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
//	//����swap���������ڴ�ռ�
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