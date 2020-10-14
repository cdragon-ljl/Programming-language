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
		cout << "姓名：" << m_Name << "学号：" << m_Id << endl;
	}

};

int main()
{
	Student s1;

	s1.m_Name = "张三";
	s1.m_Id = 1;

	s1.showStudent();

	system("pause");
}
