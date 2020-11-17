#include "student.h"


//Ĭ�Ϲ���
Student::Student()
{

}


//�вι���
Student::Student(int id, string name, string pwd)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;

	//��ȡ������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom c;
	while (ifs >> c.m_ComId && ifs >> c.m_MaxNum)
	{
		vCom.push_back(c);
	}

	ifs.close();
}


void student_Menu(Identity*& student)
{
	while (true)
	{
		//ѧ���˵�
		student->open_Menu();

		Student* stu = (Student*)student;
		int select = 0;

		cin >> select;

		switch (select)
		{
		case 1://����ԤԼ
			stu->apply_Order();
			break;
		case 2://�鿴����ԤԼ
			stu->show_Myorder();
			break;
		case 3://�鿴����ԤԼ
			stu->show_Allorder();
			break;
		case 4://ȡ��ԤԼ
			stu->cancel_Order();
			break;
		default:
			delete student;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
			break;
		}
	}
}


//�˵�����
void Student::open_Menu()
{
	cout << "��ӭѧ����" << this->m_Name << " ��¼��" << endl;
	cout << "\t\t ----------------------------------\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          1.����ԤԼ              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          2.�鿴�ҵ�ԤԼ          |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          3.�鿴����ԤԼ          |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          4.ȡ��ԤԼ              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          0.ע����¼              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t ----------------------------------\n";
	cout << "��ѡ�����Ĳ����� " << endl;
}


//����ԤԼ
void Student::apply_Order()
{
	cout << "��������ʱ��Ϊ��һ�����壡" << endl;
	cout << "����������ԤԼ��ʱ�䣺" << endl;
	cout << "1����һ" << endl;
	cout << "2���ܶ�" << endl;
	cout << "3������" << endl;
	cout << "4������" << endl;
	cout << "5������" << endl;

	int date = 0;
	int interval = 0;
	int room = 0;

	while (true)
	{
		cin >> date;
		if (date >= 1 && date <= 5)
		{
			break;
		}
		cout << "������������������" << endl;
	}

	cout << "����������ԤԼ��ʱ��Σ�" << endl;
	cout << "1������" << endl;
	cout << "2������" << endl;

	while (true)
	{
		cin >> interval;
		if (interval >= 1 && interval <= 2)
		{
			break;
		}
		cout << "������������������" << endl;
	}

	cout << "��ѡ�������" << endl;
	for (int i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].m_ComId << " �Ż�������Ϊ��" << vCom[i].m_MaxNum << endl;
	}

	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		cout << "������������������" << endl;
	}

	cout << "ԤԼ�ɹ��������..." << endl;

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);
	ofs << "date:" << date << " ";
	ofs << "interval:" << interval << " ";
	ofs << "stuId:" << this->m_Id << " ";
	ofs << "stuName:" << this->m_Name << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:1" << endl;

	ofs.close();

	system("pause");
	system("cls");
}

//�鿴�ҵ�ԤԼ
void Student::show_Myorder()
{
	OrderFile of;
	bool myorder = false;

	for (int i = 0; i < of.m_Size; i++)
	{
		if (this->m_Id == atoi(of.m_OrderData[i]["stuId"].c_str()))
		{
			myorder = true;
			cout << "ԤԼ���ڣ���" << of.m_OrderData[i]["date"] << " ";
			cout << "ʱ��Σ�" << (of.m_OrderData[i]["interval"] == "1" ? "����" : "����") << " ";
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
	}
	if (!myorder)
	{
		cout << "��ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}

	system("pause");
	system("cls");
}

//�鿴����ԤԼ
void Student::show_Allorder()
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

//ȡ��ԤԼ
void Student::cancel_Order()
{
	OrderFile of;
	bool myorder = false;
	bool mycancel = false;

	cout << "����л�ԤԼ�ɹ��ļ�¼����ȡ����������ȡ���ļ�¼" << endl;

	vector<int>v;
	int index = 1;
	for (int i = 0; i < of.m_Size; i++)
	{
		if (this->m_Id == atoi(of.m_OrderData[i]["stuId"].c_str()))
		{
			myorder = true;
			if (of.m_OrderData[i]["status"] == "1" || of.m_OrderData[i]["status"] == "2")
			{
				mycancel = true;
				v.push_back(i);
				cout << index++ << "��";
				cout << "ԤԼ���ڣ���" << of.m_OrderData[i]["date"] << " ";
				cout << "ʱ��Σ�" << (of.m_OrderData[i]["interval"] == "1" ? "����" : "����") << " ";
				cout << "�����ţ�" << of.m_OrderData[i]["roomId"] << " ";
				string status = " ״̬�� ";  // 0 ȡ����ԤԼ   1 �����   2 ��ԤԼ  -1 ԤԼʧ��
				if (of.m_OrderData[i]["status"] == "1")
				{
					status += "�����";
				}
				else if (of.m_OrderData[i]["status"] == "2")
				{
					status += "ԤԼ�ɹ�";
				}
				cout << status << endl;
			}
		}
	}
	if (!myorder)
	{
		cout << "��ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}
	if (!mycancel)
	{
		cout << "�޿�ȡ����ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "������Ҫȡ���ļ�¼��0��ʾ����" << endl;
		int select = 0;
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
					of.m_OrderData[v[select - 1]]["status"] = "0";
					of.update_Order();
					cout << "��ȡ��ԤԼ" << endl;
					break;
				}
			}
			cout << "������������������" << endl;
		}
	}

	system("pause");
	system("cls");
}