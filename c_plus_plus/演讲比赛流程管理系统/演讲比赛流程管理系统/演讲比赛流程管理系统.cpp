#include <iostream>
using namespace std;
#include <ctime>
#include "speechManager.h"

int main()
{
	srand((unsigned int)time(NULL));

	SpeechManager sm;

	int choice = 0;

	while (true)
	{
		sm.show_Menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1://��ʼ����
			sm.start_Speech();
			break;
		case 2://�鿴��¼
			sm.show_Record();
			break;
		case 3://��ռ�¼
			sm.clear_Record();
			break;
		case 0://�˳�ϵͳ
			sm.exit_System();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}
