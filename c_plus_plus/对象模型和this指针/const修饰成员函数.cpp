#include <iostream>
using namespace std;

//������
class Person
{
public:
	//thisָ��ı��� �� ָ�볣�� 
	//Person * const this;
	//ָ���ָ���ǲ������޸ĵ�,ָ��ָ���ֵ�����޸�
	//�ڳ�Ա���������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
	//const Person * const this
	void showPerson() const
	{
		//this->m_A = 100;
		this->m_B = 100;
	}

	int m_A;
	mutable int m_B;
};

//������
void test04()
{
	Person p;
	p.showPerson();
}

void test05()
{
	const Person p;//�ڶ���ǰ��const����ɳ�����
	p.m_A = 100;
	p.m_B = 100;

	//������ֻ�ܵ��ó�����
	p.showPerson();
}
int main()
{

	system("pause");
	return 0;
}