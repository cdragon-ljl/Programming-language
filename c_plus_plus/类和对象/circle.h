#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
public:
	void setR(int r);

	int getR();

	void setCenter(Point center);

	Point getCenter();

private:
	int m_R;

	//�����п�������һ������Ϊ�����еĳ�Ա
	Point m_Center;
};