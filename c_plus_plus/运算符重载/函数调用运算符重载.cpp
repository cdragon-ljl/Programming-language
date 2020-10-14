#include <iostream>
using namespace std;
#include <string>

class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test01()
{
	MyPrint myprint;
	
	myprint("Hello World!"); //由于使用起来非常类似于函数调用，因此称为仿函数
}

//仿函数非常灵活，没有固定的写法
//加法类
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myadd;

	int ret = myadd(100, 100);

	cout << ret << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}