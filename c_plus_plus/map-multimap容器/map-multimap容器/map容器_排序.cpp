#include <iostream>
using namespace std;
#include <map>

class Mycompare
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};

void printMap(map<int, int, Mycompare>& m)
{
	for (map<int, int, Mycompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << (*it).second << endl;
	}
	cout << endl;
}
void test01()
{
	map<int, int, Mycompare>m1;

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(4, 40));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	
	printMap(m1);
}

int main()
{
	test01();

	system("pause");

	return 0;
}