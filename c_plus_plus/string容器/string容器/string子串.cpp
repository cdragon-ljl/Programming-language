#include <iostream>
using namespace std;
#include <string>

//string求子串
void test01()
{
	string str = "hello world";
	string substr = str.substr(0, 5);
	cout << "substr : " << substr << endl;
}

//实用操作
void test02()
{
	string str = "cderic@shu.com";

	int pos = str.find("@");
	cout << pos << endl;

	string username = str.substr(0, pos);
	cout << username << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
