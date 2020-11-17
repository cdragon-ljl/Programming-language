#include <iostream>
using namespace std;
#include "globalFile.h"
#include "Identity.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"


//进入管理员子菜单界面
void Manager_Menu(Identity*& manager)
{
	while (true)
	{
		//调用管理员子菜单
		manager->open_Menu();

		//将父类指针转为子类指针，调用子类里其他接口
		Manager* man = (Manager*)manager;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1://添加账号
			man->add_Account();
			break;
		case 2://查看账号
			man->show_Account();
			break;
		case 3://查看机房
			man->show_Computer();
			break;
		case 4://清空预约
			man->clear_Record();
			break;
		default:
			delete manager;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
			break;
		}
	}
}


//登录功能
void LoginIn(string filename, int type)
{
	Identity* person = NULL;

	ifstream ifs;
	ifs.open(filename, ios::in);

	//文件不存在情况
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	int id;
	string name;
	string pwd;

	if (type == 1)
	{
		cout << "请输入你的学号：" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "请输入你的职工号：" << endl;
		cin >> id;
	}
	
	cout << "请输入用户名：" << endl;
	cin >> name;

	cout << "请输入密码：" << endl;
	cin >> pwd;

	int fId;
	string fName;
	string fPwd;

	if (type == 1)
	{
		//学生登录验证
		cout << "学生登录验证中..." << endl;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{
				cout << "学生验证登录成功!" << endl;
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
		//教师登录验证
		cout << "教师登录验证中..." << endl;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{
				cout << "教师验证登录成功!" << endl;
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
		//管理员登录验证
		cout << "管理员登录验证中..." << endl;

		while (ifs >> fName && ifs >> fPwd)
		{
			if (name == fName && pwd == fPwd)
			{
				cout << "管理员验证登录成功!" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);

				Manager_Menu(person);
				return;
			}
		}
	}

	cout << "验证登录失败!请检查账号或密码" << endl;

	system("pause");
	system("cls");
}

int main()
{
	int select = 0;

	while (true)
	{
		cout << "=====================  欢迎使用机房预约系统  ==================" << endl;
		cout << endl;
		cout<< "=====================      请输入您的身份    ==================" << endl;
		cout << "\t\t -------------------------------\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          1.学生代表           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          2.老    师           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          3.管 理 员           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          0.退    出           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t -------------------------------\n";
		cout << "输入您的选择: ";

		cin >> select;

		switch (select)
		{
		case 1://学生
			LoginIn(STUDENT_FILE, STUDENT_TYPE);
			break;
		case 2://老师
			LoginIn(TEACHER_FILE, TEACHER_TYPE);
			break;
		case 3://管理员
			LoginIn(ADMIN_FILE, ADMIN_TYPE);
			break;
		case 0://退出
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新选择!" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}