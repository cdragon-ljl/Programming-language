#include <iostream>
using namespace std;

#define PI 3.14

class Circle
{
public:

	int m_r;

	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	Circle c1;

	c1.m_r = 10;

	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;

	system("pause");
}
