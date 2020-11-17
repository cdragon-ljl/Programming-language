//#include <iostream>
//using namespace std;
//
////实现通用 对数组排序的函数
////降序
////选择排序
////测试char数组，int数组
//
////排序算法
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void mySort(T array[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (array[max] < array[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			mySwap(array[max], array[i]);
//		}
//	}
//}
//
//template<class T>
//void printArray(T array[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << array[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	char charArray[] = "cdragon";
//	int num = sizeof(charArray) / sizeof(char);
//	mySort(charArray, num);
//	printArray(charArray, num);
//}
//
//void test02()
//{
//	int intArray[] = { 1,5,9,6,7,1,0,1,2,3,0 };
//	int num = sizeof(intArray) / sizeof(int);
//	mySort(intArray, num);
//	printArray(intArray, num);
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}