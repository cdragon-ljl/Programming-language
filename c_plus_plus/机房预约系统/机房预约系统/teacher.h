#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"
#include "orderFile.h"

class Teacher :public Identity
{
public:
	//默认构造
	Teacher();

	//有参构造
	Teacher(int empid, string name, string pwd);

	//菜单界面
	virtual void open_Menu();

	//查看所有预约
	void show_Allorder();

	//审核预约
	void valid_Order();

	//教师编号
	int m_EmpId;
};

void teacher_Menu(Identity*& teacher);