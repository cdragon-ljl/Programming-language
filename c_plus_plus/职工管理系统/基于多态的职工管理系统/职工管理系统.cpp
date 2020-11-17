#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include "workerManager.h"

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
	WorkerManager wk;
	int choice = 0;

	while (true)
	{
		wk.Show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:	//�˳�ϵͳ
			wk.ExitSystem();
			break;
		case 1: //����ְ��
			wk.Add_Emp();
			break;
		case 2: //��ʾְ��
			wk.Show_Emp();
			break;
		case 3: //ɾ��ְ��
			wk.Del_Emp();
			break;
		case 4: //�޸�ְ��
			wk.Mod_Emp();
			break;
		case 5: //����ְ��
			wk.Find_Emp();
			break;
		case 6: //�������
			wk.Sort_EmpId();
			break;
		case 7: //����ĵ�
			wk.Clean();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}