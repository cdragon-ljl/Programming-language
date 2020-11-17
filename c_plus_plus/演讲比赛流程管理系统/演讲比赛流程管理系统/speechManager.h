#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <deque>
#include <functional>
#include <numeric>
#include <fstream>
#include "speaker.h"

//����ݽ�������
class SpeechManager
{
public:
	SpeechManager();

	void show_Menu();  

	void exit_System();

	void init_Speech();

	void create_Speaker();

	void start_Speech();

	void speech_Draw();

	void speech_Contest();

	void show_Score();

	void save_Record();

	void load_Record();

	void show_Record();

	void clear_Record();

	~SpeechManager();

	//��Ա����
	//�����һ�ֱ���ѡ�ֱ������
	vector<int>v1;

	//����ڶ��ֱ���ѡ�ֱ������
	vector<int>v2;

	//ʤ��ǰ����ѡ�ֱ������
	vector<int>vVictory;

	//��ű���Լ���Ӧ����ѡ������
	map<int, Speaker>m_Speaker;

	//��ű�������
	int m_round;

	bool fileIsEmpty;

	map<int, vector<string>>m_Record;
};