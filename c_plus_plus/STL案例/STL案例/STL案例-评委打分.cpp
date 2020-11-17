#include <iostream>
using namespace std;
#include <vector>
#include <deque>
#include <algorithm>
#include <string>
#include <ctime>

class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "abcde";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ�������deque������
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		//cout << "ѡ�֣�" << it->m_Name << " ��ί��֣�";
		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		//{
		//	cout << *dit << " ";
		//}
		//cout << endl;

		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();

		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}

		int avg = sum / d.size();

		it->m_Score = avg;
	}
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ�֣�" << it->m_Name << " ƽ���֣�" << it->m_Score << endl;;
	}
}
void test01()
{
	srand((unsigned int)time(NULL));

	vector<Person>v;
	createPerson(v);

	setScore(v);

	showScore(v);
}

int main()
{
	test01();

	system("pause");

	return 0;
}