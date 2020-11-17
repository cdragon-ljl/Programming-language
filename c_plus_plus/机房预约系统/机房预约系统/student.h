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
	//Ĭ�Ϲ���
	Student();

	//�вι���
	Student(int id, string name, string pwd);

	//�˵�����
	virtual void open_Menu();

	//����ԤԼ
	void apply_Order();

	//�鿴�ҵ�ԤԼ
	void show_Myorder();

	//�鿴����ԤԼ
	void show_Allorder();

	//ȡ��ԤԼ
	void cancel_Order();

	//ѧ��ѧ��
	int m_Id;

	//��������
	vector<ComputerRoom> vCom;
};

void student_Menu(Identity*& student);