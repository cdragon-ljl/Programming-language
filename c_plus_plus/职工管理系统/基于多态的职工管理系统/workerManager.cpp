#include "workerManager.h"


WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//1.�ļ�������
	if (!ifs.is_open())
	{
		cout << "�ļ�������!" << endl;

		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//2.�ļ�Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��!" << endl;

		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//3.�ļ����ڣ����Ѽ�¼����
	int num = this->get_EmpNum();
	this->m_EmpNum = num;

	this->m_EmpArray = new Worker*[this->m_EmpNum];
	this->Init_Emp();
}

void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��ǰְ����������" << m_EmpNum << endl;

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
	cout << "���������ְ����������" << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		int newSize = this->m_EmpNum + addNum;

		Worker** newSpace = new Worker * [newSize];

		//��ԭʼ���ݿ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//���������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "������� " << i + 1 << " ����ְ����ţ�" << endl;
			cin >> id;
			int ret = this->IsExist(id);
			while (ret != -1)
			{
				cout << "�Ѵ���" << id << "��ְ����������������ְ���ţ�" << endl;
				cin >> id;
				ret = this->IsExist(id);
			}

			cout << "������� " << i + 1 << " ����ְ��������" << endl;
			cin >> name;

			cout << "��ѡ���ְ����λ��" << endl;
			cout << "1.��ְͨԱ" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
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
			//������ְ��ְ�𣬱��浽������
			newSpace[this->m_EmpNum + i] = worker;
		}
		delete[] this->m_EmpArray;

		this->m_EmpArray = newSpace;

		this->m_EmpNum = newSize;

		this->m_FileIsEmpty = false;

		cout << "�ɹ����" << addNum << "����Ա��" << endl;

		this->Save();
	}
	else
	{
		cout << "������������" << endl;
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
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		int id;
		cout << "������Ҫɾ����ְ�����" << endl;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret == -1)
		{
			cout << "ɾ��ʧ�ܣ�ְ��������" << endl;
		}
		else
		{
			//����ǰ��
			for (int i = ret; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->Save();
			cout << "ɾ���ɹ���" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		int id;
		cout << "������Ҫ�޸ĵ�ְ�����" << endl;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret == -1)
		{
			cout << "�޸�ʧ�ܣ�ְ��������" << endl;
		}
		else
		{
			delete this->m_EmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�鵽��" << id << " ��ְ������������ְ���ţ�"<< endl;
			cin >> newId;
			int ret = this->IsExist(newId);
			while (ret != -1)
			{
				cout << "�Ѵ���" << newId << "��ְ����������������ְ���ţ�" << endl;
				cin >> newId;
				ret = this->IsExist(newId);
			}

			cout << "��������������" << endl;
			cin >> newName;

			cout << "��ѡ���ְ����λ��" << endl;
			cout << "1.��ְͨԱ" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
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
			//�������ݣ����浽������
			this->m_EmpArray[ret] = worker;
			cout << "�޸ĳɹ���" << endl;

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
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��ѡ�񰴺��ַ�ʽ����" << endl;
		cout << "1.����Ų���" << endl;
		cout << "2.����������" << endl;

		int kind;
		cin >> kind;

		if (kind == 1)
		{
			int id;
			cout << "������Ҫ���ҵ�ְ����ţ�" << endl;
			cin >> id;
			int ret = this->IsExist(id);
			if (ret == -1)
			{
				cout << "����ʧ�ܣ���ְ��������" << endl;
			}
			else
			{
				cout << "�鵽�ɹ�����ְ����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->ShowInfo();
			}
		}
		else if(kind == 2)
		{		
			string name;
			cout << "��������ҵ�������" << endl;
			cin >> name;

			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ��" << m_EmpArray[i]->m_Id << "�ŵ���Ϣ���£�" << endl;
					flag = true;
					this->m_EmpArray[i]->ShowInfo();
				}
			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ���ְ��������" << endl;
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
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;

		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1.����" << endl;
		cout << "2.����" << endl;
		
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

		cout << "����ɹ����������Ϊ��" << endl;
		this->Save();
		this->Show_Emp();
	}
}

void WorkerManager::Clean()
{
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;

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

		cout << "��ճɹ���" << endl;
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
	cout << "*************** ��ӭʹ��ְ������ϵͳ��**************" << endl;
	cout << "****************** 0.�˳�������� ******************" << endl;
	cout << "****************** 1.����ְ����Ϣ ******************" << endl;
	cout << "****************** 2.��ʾְ����Ϣ ******************" << endl;
	cout << "****************** 3.ɾ��ְ����Ϣ ******************" << endl;
	cout << "****************** 4.�޸�ְ����Ϣ ******************" << endl;
	cout << "****************** 5.����ְ����Ϣ ******************" << endl;
	cout << "****************** 6.���ձ������ ******************" << endl;
	cout << "****************** 7.��������ĵ� ******************" << endl;
	cout << "****************************************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}
