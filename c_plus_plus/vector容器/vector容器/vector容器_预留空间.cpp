#include <iostream>
using namespace std;
#include <vector>

void test01()
{
	vector<int>v;

	v.reserve(10000);
	//ÀûÓÃreserveÔ¤Áô¿Õ¼ä
	int num = 0;
	int* p = NULL;

	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;
}
int main()
{
	test01();

	system("pause");

	return 0;
}