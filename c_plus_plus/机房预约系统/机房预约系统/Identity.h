#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

//��ݳ�����
class Identity
{
public:
	//�����˵�
	virtual void open_Menu() = 0;

	string m_Name;//�û���
	string m_Pwd;//����
};
