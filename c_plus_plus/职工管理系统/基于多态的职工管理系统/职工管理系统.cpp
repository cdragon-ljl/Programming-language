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
		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:	//退出系统
			wk.ExitSystem();
			break;
		case 1: //增加职工
			wk.Add_Emp();
			break;
		case 2: //显示职工
			wk.Show_Emp();
			break;
		case 3: //删除职工
			wk.Del_Emp();
			break;
		case 4: //修改职工
			wk.Mod_Emp();
			break;
		case 5: //查找职工
			wk.Find_Emp();
			break;
		case 6: //编号排序
			wk.Sort_EmpId();
			break;
		case 7: //清空文档
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