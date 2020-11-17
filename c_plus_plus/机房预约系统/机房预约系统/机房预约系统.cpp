#include <iostream>
using namespace std;
#include "globalFile.h"
#include "Identity.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"


//�������Ա�Ӳ˵�����
void Manager_Menu(Identity*& manager)
{
	while (true)
	{
		//���ù���Ա�Ӳ˵�
		manager->open_Menu();

		//������ָ��תΪ����ָ�룬���������������ӿ�
		Manager* man = (Manager*)manager;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1://����˺�
			man->add_Account();
			break;
		case 2://�鿴�˺�
			man->show_Account();
			break;
		case 3://�鿴����
			man->show_Computer();
			break;
		case 4://���ԤԼ
			man->clear_Record();
			break;
		default:
			delete manager;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
			break;
		}
	}
}


//��¼����
void LoginIn(string filename, int type)
{
	Identity* person = NULL;

	ifstream ifs;
	ifs.open(filename, ios::in);

	//�ļ����������
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	int id;
	string name;
	string pwd;

	if (type == 1)
	{
		cout << "���������ѧ�ţ�" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "���������ְ���ţ�" << endl;
		cin >> id;
	}
	
	cout << "�������û�����" << endl;
	cin >> name;

	cout << "���������룺" << endl;
	cin >> pwd;

	int fId;
	string fName;
	string fPwd;

	if (type == 1)
	{
		//ѧ����¼��֤
		cout << "ѧ����¼��֤��..." << endl;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{
				cout << "ѧ����֤��¼�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);

				student_Menu(person);
				return;
			}
		}
	}
	else if (type == 2)
	{
		//��ʦ��¼��֤
		cout << "��ʦ��¼��֤��..." << endl;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{
				cout << "��ʦ��֤��¼�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);

				teacher_Menu(person);
				return;
			}
		}
	}
	else if (type == 3)
	{
		//����Ա��¼��֤
		cout << "����Ա��¼��֤��..." << endl;

		while (ifs >> fName && ifs >> fPwd)
		{
			if (name == fName && pwd == fPwd)
			{
				cout << "����Ա��֤��¼�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);

				Manager_Menu(person);
				return;
			}
		}
	}

	cout << "��֤��¼ʧ��!�����˺Ż�����" << endl;

	system("pause");
	system("cls");
}

int main()
{
	int select = 0;

	while (true)
	{
		cout << "=====================  ��ӭʹ�û���ԤԼϵͳ  ==================" << endl;
		cout << endl;
		cout<< "=====================      �������������    ==================" << endl;
		cout << "\t\t -------------------------------\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          1.ѧ������           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          2.��    ʦ           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          3.�� �� Ա           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          0.��    ��           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t -------------------------------\n";
		cout << "��������ѡ��: ";

		cin >> select;

		switch (select)
		{
		case 1://ѧ��
			LoginIn(STUDENT_FILE, STUDENT_TYPE);
			break;
		case 2://��ʦ
			LoginIn(TEACHER_FILE, TEACHER_TYPE);
			break;
		case 3://����Ա
			LoginIn(ADMIN_FILE, ADMIN_TYPE);
			break;
		case 0://�˳�
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��!" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}