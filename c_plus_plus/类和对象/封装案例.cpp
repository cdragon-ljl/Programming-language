#include <iostream>
using namespace std;
#include <string>

class Student
{
public:
	string m_Name;
	int m_Id;

	void showStudent()
	{
		cout << "������" << m_Name << "ѧ�ţ�" << m_Id << endl;
	}

};

int main()
{
	Student s1;

	s1.m_Name = "����";
	s1.m_Id = 1;

	s1.showStudent();

	system("pause");
}
