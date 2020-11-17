#include "speechManager.h"



void SpeechManager::init_Speech()
{
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	this->m_Record.clear();
	this->m_round = 1;
}
SpeechManager::SpeechManager()
{
	this->init_Speech();
	this->create_Speaker();
	this->load_Record();
}

SpeechManager::~SpeechManager()
{

}

void SpeechManager::show_Menu()
{
	cout << "*****************************" << endl;
	cout << "****** 欢迎参加演讲比赛******" << endl;
	cout << "******  1.开始演讲比赛 ******" << endl;
	cout << "******  2.查看往届记录 ******" << endl;
	cout << "******  3.清空比赛记录 ******" << endl;
	cout << "******  0.退出比赛程序 ******" << endl;
	cout << "*****************************" << endl;
	cout << endl;
}

void SpeechManager::exit_System()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::create_Speaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;

		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}
		//创建选手编号，并放入v1容器中
		this->v1.push_back(i + 10001);

		//选手编号以及对应选手 放入map容器中
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

//开始比赛 比赛整个流程控制函数
void SpeechManager::start_Speech()
{
	//第一轮开始比赛

	//1.抽签
	this->speech_Draw();
	//2.比赛
	this->speech_Contest();
	//3.显示晋级结果
	this->show_Score();
	//第二轮开始比赛
	this->m_round++;
	//1.抽签
	this->speech_Draw();
	//2.比赛
	this->speech_Contest();
	//3.显示最终结果
	this->show_Score();
	//保存到文件中
	this->save_Record();

	this->init_Speech();
	this->create_Speaker();
	this->load_Record();

	cout << "--- 本届比赛完毕 ---" << endl;
	system("pause");
	system("cls");
}

void Myprint(int val)
{
	cout << val << " ";
}
//抽签
void SpeechManager::speech_Draw()
{
	cout << "--- 第 " << this->m_round << " 轮比赛选手正在抽签 ---" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "抽签后演讲顺序如下：" << endl;

	if (this->m_round == 1)
	{
		//第一轮比赛
		random_shuffle(v1.begin(), v1.end());
		for_each(v1.begin(), v1.end(), Myprint);
		cout << endl;
	}
	else
	{
		//第二轮比赛
		random_shuffle(v2.begin(), v2.end());
		for_each(v2.begin(), v2.end(), Myprint);
		cout << endl;
	}
	cout << "-----------------------------------------------------------------------" << endl;
}

void SpeechManager::speech_Contest()
{
	cout << "--- 第 " << this->m_round << " 轮比赛正式开始 --- " << endl;

	multimap<double, int, greater<double>>groupScore;
	int num = 0;

	vector<int>v_Src;
	if (this->m_round == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;

		sort(d.begin(), d.end(), greater<double>());
		d.pop_front();
		d.pop_back();

		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();

		//cout << "编号：" << *it << " 姓名：" << this->m_Speaker[*it].m_Name << " 平均分：" << avg << endl;

		this->m_Speaker[*it].m_Score[this->m_round - 1] = avg;

		groupScore.insert(make_pair(avg, *it));

		if (num % 6 == 0)
		{
			cout << "--- 第 " << num / 6 << "小组比赛名次：" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "编号：" << it->second << " 姓名：" << this->m_Speaker[it->second].m_Name << " 成绩：" << this->m_Speaker[it->second].m_Score[this->m_round - 1] << endl;
			}

			//取走前三名
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++, count++)
			{
				if (this->m_round == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vVictory.push_back((*it).second);
				}
			}
			groupScore.clear();
		}
	}


	cout << "--- 第 " << this->m_round << " 轮比赛完毕 ---" << endl;
	cout << endl;
	system("pause");
}

void SpeechManager::show_Score()
{
	cout << "--- 第" << this->m_round << " 轮晋级选手信息如下：---" << endl;

	vector<int>v;
	if (this->m_round == 1)
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手编号：" << *it << " 姓名：" << this->m_Speaker[*it].m_Name << " 得分：" << this->m_Speaker[*it].m_Score[this->m_round - 1] << endl;
	}
	cout << endl; 
	system("pause");
	system("cls");
	this->show_Menu();
}

void SpeechManager::save_Record()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);

	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;

	ofs.close();

	cout << "--- 记录已经保存 ---" << endl;

	this->fileIsEmpty = false;
}

void SpeechManager::load_Record()
{
	ifstream ifs("speech.csv", ios::in);

	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	this->fileIsEmpty = false;

	ifs.putback(ch);

	string data;
	int index = 0;
	while (ifs >> data)
	{
		vector<string>v;

		int pos = -1;
		int start = 0;

		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				break;
			}
			string temp = data.substr(start, pos - start);
			v.push_back(temp);

			start = pos + 1;
		}

		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();
	cout << endl;
}

void SpeechManager::show_Record()
{
	if (this->fileIsEmpty)
	{
		cout << "文件为空或文件不存在" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "第" << i + 1 << "届 " <<
				"冠军编号：" << this->m_Record[i][0] << " 得分：" << this->m_Record[i][1] << " "
				"亚军编号：" << this->m_Record[i][2] << " 得分：" << this->m_Record[i][3] << " "
				"季军编号：" << this->m_Record[i][4] << " 得分：" << this->m_Record[i][5] << endl;
		}
		system("pause");
		system("cls");
	}
}

void SpeechManager::clear_Record()
{
	cout << "确认清空?" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		this->init_Speech();
		this->create_Speaker();
		this->load_Record();

		cout << "清空成功" << endl;
	}

	system("pause");
	system("cls");
}