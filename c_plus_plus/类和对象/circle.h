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

	//在类中可以让另一个类作为本类中的成员
	Point m_Center;
};