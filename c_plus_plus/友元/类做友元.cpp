#include <iostream>
using namespace std;
#include <string>

//������Ԫ
class Building;
class GoodGuy
{
public:
	void visit();//�ιۺ��� ����Building�е�����

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

//����д��Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGuy::GoodGuy()
{
	building = new Building;
}

void GoodGuy::visit()
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
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