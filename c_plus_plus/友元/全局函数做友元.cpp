#include <iostream>
using namespace std;
#include <string>

class Building
{
	//goodguyȫ�ֺ�����Building�����ѣ����Է���Building��˽�г�Ա
	friend void googuy(Building& building);

public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

public:
	string m_SittingRoom;//����

private:
	string m_BedRoom;//����
};

void googuy(Building& building)
{
	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building.m_SittingRoom << endl;

	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building.m_BedRoom << endl;
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