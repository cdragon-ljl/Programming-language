//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
////�º��� ����ֵ������bool�������ͣ���Ϊν��
////���operator()����һ����������ô����һԪν��
//
//class GreatThenFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//���������� ��û�д���5������
//	//GreatThenFive() ������������
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreatThenFive());
//	if (it == v.end())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��� " << *it << endl;
//	}
//}
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}