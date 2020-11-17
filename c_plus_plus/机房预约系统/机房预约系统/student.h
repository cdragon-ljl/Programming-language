#pragma once
#include <iostream>
//using namespace std;
#include "Identity.h"
#include "globalFile.h"
#include "computerRoom.h"
#include "orderFile.h"

class Student :public Identity
{
public:
	//默认构造
	Student();

	//有参构造
	Student(int id, string name, string pwd);

	//菜单界面
	virtual void open_Menu();

	//申请预约
	void apply_Order();

	//查看我的预约
	void show_Myorder();

	//查看所有预约
	void show_Allorder();

	//取消预约
	void cancel_Order();

	//学生学号
	int m_Id;

	//机房容器
	vector<ComputerRoom> vCom;
};

void student_Menu(Identity*& student);