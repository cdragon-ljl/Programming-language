#include "student.h"


//默认构造
Student::Student()
{

}


//有参构造
Student::Student(int id, string name, string pwd)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;

	//获取机房信息
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
		//学生菜单
		student->open_Menu();

		Student* stu = (Student*)student;
		int select = 0;

		cin >> select;

		switch (select)
		{
		case 1://申请预约
			stu->apply_Order();
			break;
		case 2://查看自身预约
			stu->show_Myorder();
			break;
		case 3://查看所有预约
			stu->show_Allorder();
			break;
		case 4://取消预约
			stu->cancel_Order();
			break;
		default:
			delete student;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
			break;
		}
	}
}


//菜单界面
void Student::open_Menu()
{
	cout << "欢迎学生：" << this->m_Name << " 登录！" << endl;
	cout << "\t\t ----------------------------------\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          1.申请预约              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          2.查看我的预约          |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          3.查看所有预约          |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          4.取消预约              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          0.注销登录              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t ----------------------------------\n";
	cout << "请选择您的操作： " << endl;
}


//申请预约
void Student::apply_Order()
{
	cout << "机房开放时间为周一至周五！" << endl;
	cout << "请输入申请预约的时间：" << endl;
	cout << "1、周一" << endl;
	cout << "2、周二" << endl;
	cout << "3、周三" << endl;
	cout << "4、周四" << endl;
	cout << "5、周五" << endl;

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
		cout << "输入有误，请重新输入" << endl;
	}

	cout << "请输入申请预约的时间段：" << endl;
	cout << "1、上午" << endl;
	cout << "2、下午" << endl;

	while (true)
	{
		cin >> interval;
		if (interval >= 1 && interval <= 2)
		{
			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}

	cout << "请选择机房：" << endl;
	for (int i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].m_ComId << " 号机房容量为：" << vCom[i].m_MaxNum << endl;
	}

	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}

	cout << "预约成功！审核中..." << endl;

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

//查看我的预约
void Student::show_Myorder()
{
	OrderFile of;
	bool myorder = false;

	for (int i = 0; i < of.m_Size; i++)
	{
		if (this->m_Id == atoi(of.m_OrderData[i]["stuId"].c_str()))
		{
			myorder = true;
			cout << "预约日期：周" << of.m_OrderData[i]["date"] << " ";
			cout << "时间段：" << (of.m_OrderData[i]["interval"] == "1" ? "上午" : "下午") << " ";
			cout << "机房号：" << of.m_OrderData[i]["roomId"] << " ";

			string status = "状态：";// 0 取消的预约   1 审核中   2 已预约 -1 预约失败

			if (of.m_OrderData[i]["status"] == "1")
			{
				status += "审核中...";
			}
			else if (of.m_OrderData[i]["status"] == "2")
			{
				status += "预约成功";
			}
			else if (of.m_OrderData[i]["status"] == "-1")
			{
				status += "预约失败，审核未通过.";
			}
			else
			{
				status += "预约已取消";
			}
			cout << status << endl;
		}
	}
	if (!myorder)
	{
		cout << "无预约记录!" << endl;
		system("pause");
		system("cls");
		return;
	}

	system("pause");
	system("cls");
}

//查看所有预约
void Student::show_Allorder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录!" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << "、 ";

		cout << "预约日期：周" << of.m_OrderData[i]["date"] << " ";
		cout << "时间段：" << (of.m_OrderData[i]["interval"] == "1" ? "上午" : "下午") << " ";
		cout << " 学号：" << of.m_OrderData[i]["stuId"] << " ";
		cout << " 姓名：" << of.m_OrderData[i]["stuName"] << " ";
		cout << "机房号：" << of.m_OrderData[i]["roomId"] << " ";

		string status = "状态：";// 0 取消的预约   1 审核中   2 已预约 -1 预约失败

		if (of.m_OrderData[i]["status"] == "1")
		{
			status += "审核中...";
		}
		else if (of.m_OrderData[i]["status"] == "2")
		{
			status += "预约成功";
		}
		else if (of.m_OrderData[i]["status"] == "-1")
		{
			status += "预约失败，审核未通过.";
		}
		else
		{
			status += "预约已取消";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}

//取消预约
void Student::cancel_Order()
{
	OrderFile of;
	bool myorder = false;
	bool mycancel = false;

	cout << "审核中或预约成功的记录可以取消，请输入取消的记录" << endl;

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
				cout << index++ << "、";
				cout << "预约日期：周" << of.m_OrderData[i]["date"] << " ";
				cout << "时间段：" << (of.m_OrderData[i]["interval"] == "1" ? "上午" : "下午") << " ";
				cout << "机房号：" << of.m_OrderData[i]["roomId"] << " ";
				string status = " 状态： ";  // 0 取消的预约   1 审核中   2 已预约  -1 预约失败
				if (of.m_OrderData[i]["status"] == "1")
				{
					status += "审核中";
				}
				else if (of.m_OrderData[i]["status"] == "2")
				{
					status += "预约成功";
				}
				cout << status << endl;
			}
		}
	}
	if (!myorder)
	{
		cout << "无预约记录!" << endl;
		system("pause");
		system("cls");
		return;
	}
	if (!mycancel)
	{
		cout << "无可取消的预约记录!" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "请输入要取消的记录，0表示返回" << endl;
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
					cout << "已取消预约" << endl;
					break;
				}
			}
			cout << "输入有误，请重新输入" << endl;
		}
	}

	system("pause");
	system("cls");
}