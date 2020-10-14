#include <iostream>
using namespace std;
#include <string>

class Building
{
	//goodguy全局函数是Building好朋友，可以访问Building中私有成员
	friend void googuy(Building& building);

public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

public:
	string m_SittingRoom;//客厅

private:
	string m_BedRoom;//卧室
};

void googuy(Building& building)
{
	cout << "好基友的全局函数 正在访问：" << building.m_SittingRoom << endl;

	cout << "好基友的全局函数 正在访问：" << building.m_BedRoom << endl;
}

void test01()
{
	Building building;
	googuy(building);
}

int main1()
{
	test01();

	system("pause");

	return 0;
}