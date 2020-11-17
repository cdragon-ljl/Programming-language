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
	//Ĭ�Ϲ���
	Manager();

	//�вι���
	Manager(string name, string pwd);

	//ѡ��˵�
	virtual void open_Menu();

	//����˺�
	void add_Account();

	//�鿴�˺�
	void show_Account();

	//�鿴������Ϣ
	void show_Computer();

	//���ԤԼ��¼
	void clear_Record();

	//��ʼ������
	void init_Vector();

	//����ظ�
	bool check_Repeat(int id, int type);

	//ѧ������
	vector<Student> vStu;

	//��ʦ����
	vector<Teacher> vTea;

	//��������
	vector<ComputerRoom> vCom;
};