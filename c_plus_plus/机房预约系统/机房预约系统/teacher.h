#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"
#include "orderFile.h"

class Teacher :public Identity
{
public:
	//Ĭ�Ϲ���
	Teacher();

	//�вι���
	Teacher(int empid, string name, string pwd);

	//�˵�����
	virtual void open_Menu();

	//�鿴����ԤԼ
	void show_Allorder();

	//���ԤԼ
	void valid_Order();

	//��ʦ���
	int m_EmpId;
};

void teacher_Menu(Identity*& teacher);