#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

//身份抽象类
class Identity
{
public:
	//操作菜单
	virtual void open_Menu() = 0;

	string m_Name;//用户名
	string m_Pwd;//密码
};
