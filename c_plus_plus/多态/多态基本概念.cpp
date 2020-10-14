//#include <iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
////地址早绑定 在编译阶段确定函数地址
//
////动态多态满足条件
////1.有继承关系
////2.子类重写父类中的虚函数
//
////动态多态使用
////父类的指针或者引用 指向子类对象
//
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
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