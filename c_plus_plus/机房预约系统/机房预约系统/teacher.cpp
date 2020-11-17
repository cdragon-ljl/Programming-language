#include "teacher.h"


//Ĭ�Ϲ���
Teacher::Teacher()
{

}


//�вι���
Teacher::Teacher(int empid, string name, string pwd)
{
	this->m_EmpId = empid;
	this->m_Name = name;
	this->m_Pwd = pwd;
}


void teacher_Menu(Identity*& teacher)
{
	while (true)
	{
		//��ʦ�˵�
		teacher->open_Menu();

		Teacher* tea = (Teacher*)teacher;
		int select = 0;

		cin >> select;
		switch (select)
		{
		case 1://�鿴����ԤԼ
			tea->show_Allorder();
			break;
		case 2://���ԤԼ
			tea->valid_Order();
			break;
		default:
			delete teacher;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
			break;
		}
	}
}

//�˵�����
void Teacher::open_Menu()
{
	cout << "��ӭ��ʦ��" << this->m_Name << " ��¼��" << endl;
	cout << "\t\t ----------------------------------\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          1.�鿴����ԤԼ          |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          2.���ԤԼ              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          0.ע����¼              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t ----------------------------------\n";
	cout << "��ѡ�����Ĳ����� " << endl;
}


//�鿴����ԤԼ
void Teacher::show_Allorder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << "�� ";

		cout << "ԤԼ���ڣ���" << of.m_OrderData[i]["date"] << " ";
		cout << "ʱ��Σ�" << (of.m_OrderData[i]["interval"] == "1" ? "����" : "����") << " ";
		cout << " ѧ�ţ�" << of.m_OrderData[i]["stuId"] << " ";
		cout << " ������" << of.m_OrderData[i]["stuName"] << " ";
		cout << "�����ţ�" << of.m_OrderData[i]["roomId"] << " ";

		string status = "״̬��";// 0 ȡ����ԤԼ   1 �����   2 ��ԤԼ -1 ԤԼʧ��

		if (of.m_OrderData[i]["status"] == "1")
		{
			status += "�����...";
		}
		else if (of.m_OrderData[i]["status"] == "2")
		{
			status += "ԤԼ�ɹ�";
		}
		else if (of.m_OrderData[i]["status"] == "-1")
		{
			status += "ԤԼʧ�ܣ����δͨ��.";
		}
		else
		{
			status += "ԤԼ��ȡ��";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}


//���ԤԼ
void Teacher::valid_Order()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "����˵�ԤԼ��¼���£�" << endl;

	vector<int>v;
	int index = 0;
	for (int i = 0; i < of.m_Size; i++)
	{
		if (of.m_OrderData[i]["status"] == "1")
		{
			v.push_back(i);
			cout << ++index << "��";
			cout << "ԤԼ���ڣ� ��" << of.m_OrderData[i]["date"];
			cout << " ʱ�Σ�" << (of.m_OrderData[i]["interval"] == "1" ? "����" : "����");
			cout << " ������" << of.m_OrderData[i]["roomId"];
			string status = " ״̬�� ";  // 0ȡ����ԤԼ   1 �����   2 ��ԤԼ  -1 ԤԼʧ��
			if (of.m_OrderData[i]["status"] == "1")
			{
				status += "�����";
			}
			cout << status << endl;
		}
	}
	cout << "��������˵�ԤԼ��¼��0��ʾ����" << endl;
	int select = 0;
	int ret = 0;
	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				cout << "��������˽��" << endl;
				cout << "1.ͨ��" << endl;
				cout << "2.��ͨ��" << endl;

				cin >> ret;
				if (ret == 1)
				{
					of.m_OrderData[v[select - 1]]["status"] = "2";
				}
				else
				{
					of.m_OrderData[v[select - 1]]["status"] = "-1";
				}
				of.update_Order();
				cout << "������" << endl;
				break;
			}
		}
		cout << "������������������" << endl;
	}
	system("pause");
	system("cls");
}
