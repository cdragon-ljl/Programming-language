//#include <iostream>
//using namespace std;
//
////��̬���� ������Ʒ
//
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void PourIntoCup() = 0;
//
//	//���븨��
//	virtual void PutSomeThing() = 0;
//
//	//������Ʒ
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourIntoCup();
//		PutSomeThing();
//	}
//};
//
////��������
//class Coffee :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "���޹���" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	//���뱭��
//	virtual void PourIntoCup()
//	{
//		cout << "���뿧�ȱ�" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomeThing()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
////������
//class Tea :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//���뱭��
//	virtual void PourIntoCup()
//	{
//		cout << "����豭" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomeThing()
//	{
//		cout << "�������" << endl;
//	}
//};
//
//void doWork(AbstractDrinking * abs)
//{
//	abs->makeDrink();
//	delete abs;
//}
//
//void test01()
//{
//	doWork(new Coffee);
//
//	cout << "---------------" << endl;
//
//	doWork(new Tea);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}