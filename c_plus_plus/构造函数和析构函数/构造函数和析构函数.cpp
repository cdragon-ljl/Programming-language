#include <iostream>
using namespace std;
#include "Person.h"

void test1()
{
	//1.���ŷ�
	Person p1;//Ĭ�Ϲ��캯������
	Person p2(10);//�вι��캯������
	Person p3(p2);//�������캯������

	//2.��ʾ��
	Person p1;//Ĭ�Ϲ���
	Person p2 = Person(10);//�вι���
	Person p3 = Person(p2);//��������



	cout << "p2������Ϊ��" << p2.age << endl;
	cout << "p3������Ϊ��" << p3.age << endl;
}

int main()
{
	test1();

	system("pause");
}