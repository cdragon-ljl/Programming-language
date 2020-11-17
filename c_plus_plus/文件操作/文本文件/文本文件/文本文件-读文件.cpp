#include <iostream>
using namespace std;
#include <fstream>
#include <string>

void test01()
{
	ifstream ifs;

	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout<<"open failed!"<<endl;
		return;
	}
	//读数据
	//第一种
	//char buf[128] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//第二种
	//char buf[128] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//第三种
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}

	ifs.close();
}

int main()
{
	test01();

	system("pause");

	return 0;
}