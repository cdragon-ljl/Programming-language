#pragma once
#include <iostream>
using namespace std;
#include <fstream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	WorkerManager();

	void Show_Menu();

	void ExitSystem();

	int m_EmpNum;

	Worker ** m_EmpArray;

	void Add_Emp();

	void Init_Emp();

	void Show_Emp();

	int IsExist(int id);

	void Del_Emp();

	void Mod_Emp();

	void Find_Emp();

	void Sort_EmpId();

	void Clean();

	void Save();

	int get_EmpNum();

	bool m_FileIsEmpty;

	~WorkerManager();
};
