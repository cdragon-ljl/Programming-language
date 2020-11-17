#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <map>
#include <ctime>

#define CEHUA	0
#define MEISHU	1
#define YANFA	2

class Worker
{
public:
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";

	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];

		worker.m_Salary = rand() % 10000 + 10000;

		v.push_back(worker);
	}
}


void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int deptId = rand() % 3;
		m.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>&m)
{
	cout << "�߻�����" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "--------------------------------" << endl;

	cout << "��������" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "--------------------------------" << endl;

	cout << "�з�����" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}
}


int main()
{
	srand((unsigned int)time(NULL));
	//����Ա��
	vector<Worker>vWorker;
	createWorker(vWorker);

	//Ա������
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);
	
	showWorkerByGroup(mWorker);

	system("pause");

	return 0;
}