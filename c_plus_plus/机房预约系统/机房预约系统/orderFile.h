#pragma once
#include <iostream>
using namespace std;
#include <map>
#include "globalFile.h"
#include <fstream>
#include <string>

class OrderFile
{
public:
	//���캯��
	OrderFile();

	//����ԤԼ��¼
	void update_Order();

	//��¼ԤԼ����
	int m_Size;

	//��¼����ԤԼ��Ϣ������ key��¼���� value�����¼��ֵ����Ϣ
	map<int, map<string, string>>m_OrderData;
};