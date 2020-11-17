#include "workerManager.h"


WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//1.文件不存在
	if (!ifs.is_open())
	{
		cout << "文件不存在!" << endl;

		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//2.文件为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空!" << endl;

		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//3.文件存在，且已记录数据
	int num = this->get_EmpNum();
	this->m_EmpNum = num;

	this->m_EmpArray = new Worker*[this->m_EmpNum];
	this->Init_Emp();
}

void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "当前职工总人数：" << m_EmpNum << endl;

		for (int i = 0; i < m_EmpNum; i++)
		{
			this->m_EmpArray[i]->ShowInfo();
		}
	}
	system("pause");
	system("cls");
}

int WorkerManager::get_EmpNum()
{
	ifstream ifs;

	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	return num;
}

void WorkerManager::Init_Emp()
{
	ifstream ifs;

	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker * worker = NULL;

		if (dId == 1)
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3)
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

void WorkerManager::Add_Emp()
{
	cout << "请输入添加职工的数量：" << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		int newSize = this->m_EmpNum + addNum;

		Worker** newSpace = new Worker * [newSize];

		//将原始数据拷贝
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "请输入第 " << i + 1 << " 个新职工编号：" << endl;
			cin >> id;
			int ret = this->IsExist(id);
			while (ret != -1)
			{
				cout << "已存在" << id << "号职工，请重新输入新职工号：" << endl;
				cin >> id;
				ret = this->IsExist(id);
			}

			cout << "请输入第 " << i + 1 << " 个新职工姓名：" << endl;
			cin >> name;

			cout << "请选择该职工岗位：" << endl;
			cout << "1.普通职员" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dSelect;

			Worker * worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			//将创建职工职责，保存到数组中
			newSpace[this->m_EmpNum + i] = worker;
		}
		delete[] this->m_EmpArray;

		this->m_EmpArray = newSpace;

		this->m_EmpNum = newSize;

		this->m_FileIsEmpty = false;

		cout << "成功添加" << addNum << "名新员工" << endl;

		this->Save();
	}
	else
	{
		cout << "输入数据有误" << endl;
	}

	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}

	return index;
}

void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		int id;
		cout << "请输入要删除的职工编号" << endl;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret == -1)
		{
			cout << "删除失败，职工不存在" << endl;
		}
		else
		{
			//数据前移
			for (int i = ret; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->Save();
			cout << "删除成功！" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		int id;
		cout << "请输入要修改的职工编号" << endl;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret == -1)
		{
			cout << "修改失败，职工不存在" << endl;
		}
		else
		{
			delete this->m_EmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查到：" << id << " 号职工，请输入新职工号："<< endl;
			cin >> newId;
			int ret = this->IsExist(newId);
			while (ret != -1)
			{
				cout << "已存在" << newId << "号职工，请重新输入新职工号：" << endl;
				cin >> newId;
				ret = this->IsExist(newId);
			}

			cout << "请输入新姓名：" << endl;
			cin >> newName;

			cout << "请选择该职工岗位：" << endl;
			cout << "1.普通职员" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}
			//更改数据，保存到数组中
			this->m_EmpArray[ret] = worker;
			cout << "修改成功！" << endl;

			this->Save();
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请选择按何种方式查找" << endl;
		cout << "1.按编号查找" << endl;
		cout << "2.按姓名查找" << endl;

		int kind;
		cin >> kind;

		if (kind == 1)
		{
			int id;
			cout << "请输入要查找的职工编号：" << endl;
			cin >> id;
			int ret = this->IsExist(id);
			if (ret == -1)
			{
				cout << "查找失败，该职工不存在" << endl;
			}
			else
			{
				cout << "查到成功！该职工信息如下：" << endl;
				this->m_EmpArray[ret]->ShowInfo();
			}
		}
		else if(kind == 2)
		{		
			string name;
			cout << "请输入查找的姓名：" << endl;
			cin >> name;

			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功，职工编号为：" << m_EmpArray[i]->m_Id << "号的信息如下：" << endl;
					flag = true;
					this->m_EmpArray[i]->ShowInfo();
				}
			}
			if (flag == false)
			{
				cout << "查找失败，该职工不存在" << endl;
			}
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Sort_EmpId()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;

		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式：" << endl;
		cout << "1.升序" << endl;
		cout << "2.降序" << endl;
		
		int kind;
		cin >> kind;
		
		Worker *temp;

		for(int i = 0; i < m_EmpNum; i++)
		{
			for (int j = 0; j < m_EmpNum-1-i; j++)
			{
				if (kind == 1)
				{
					if (this->m_EmpArray[j]->m_Id > this->m_EmpArray[j+1]->m_Id)
					{
						temp = this->m_EmpArray[j + 1];
						this->m_EmpArray[j + 1] = this->m_EmpArray[j];
						this->m_EmpArray[j] = temp;
					}
				}
				else if(kind == 2)
				{
					if (this->m_EmpArray[j]->m_Id < this->m_EmpArray[j+1]->m_Id)
					{
						temp = this->m_EmpArray[j+1];
						this->m_EmpArray[j+1] = this->m_EmpArray[j];
						this->m_EmpArray[j] = temp;
					}
				}

			}
		}

		cout << "排序成功，排序后结果为：" << endl;
		this->Save();
		this->Show_Emp();
	}
}

void WorkerManager::Clean()
{
	cout << "确认清空？" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;

	int choice = 0;
	cin >> choice;

	if (choice == 1)
	{
		ofstream ofs;

		ofs.open(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}

			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "清空成功！" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManager::Save()
{
	ofstream ofs;

	ofs.open(FILENAME, ios::out);
	
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	ofs.close();
}

void WorkerManager::Show_Menu()
{
	cout << "****************************************************" << endl;
	cout << "*************** 欢迎使用职工管理系统！**************" << endl;
	cout << "****************** 0.退出管理程序 ******************" << endl;
	cout << "****************** 1.增加职工信息 ******************" << endl;
	cout << "****************** 2.显示职工信息 ******************" << endl;
	cout << "****************** 3.删除职工信息 ******************" << endl;
	cout << "****************** 4.修改职工信息 ******************" << endl;
	cout << "****************** 5.查找职工信息 ******************" << endl;
	cout << "****************** 6.按照编号排序 ******************" << endl;
	cout << "****************** 7.清空所有文档 ******************" << endl;
	cout << "****************************************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}
