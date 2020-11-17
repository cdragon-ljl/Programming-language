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

//设计演讲管理类
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

	//成员属性
	//保存第一轮比赛选手编号容器
	vector<int>v1;

	//保存第二轮比赛选手编号容器
	vector<int>v2;

	//胜出前三名选手编号容器
	vector<int>vVictory;

	//存放编号以及对应具体选手容器
	map<int, Speaker>m_Speaker;

	//存放比赛轮数
	int m_round;

	bool fileIsEmpty;

	map<int, vector<string>>m_Record;
};