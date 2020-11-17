#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"
#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include "computerRoom.h"


class Manager :public Identity
{
public:
	//默认构造
	Manager();

	//有参构造
	Manager(string name, string pwd);

	//选择菜单
	virtual void open_Menu();

	//添加账号
	void add_Account();

	//查看账号
	void show_Account();

	//查看机房信息
	void show_Computer();

	//清空预约记录
	void clear_Record();

	//初始化容器
	void init_Vector();

	//检测重复
	bool check_Repeat(int id, int type);

	//学生容器
	vector<Student> vStu;

	//教师容器
	vector<Teacher> vTea;

	//机房容器
	vector<ComputerRoom> vCom;
};