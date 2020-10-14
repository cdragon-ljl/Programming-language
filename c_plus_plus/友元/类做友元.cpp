#include <iostream>
using namespace std;
#include <string>

//类做友元
class Building;
class GoodGuy
{
public:
	void visit();//参观函数 访问Building中的属性

	Building* building;
};

class Building
{
public:
	Building();

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

//类外写成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGuy::GoodGuy()
{
	building = new Building;
}

void GoodGuy::visit()
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
}

void test02()
{
	GoodGuy gg;
	gg.visit();
}

int main()
{
	test02();

	system("pause");

	return 0;
}