# C++基础入门

## 1 C++初识

### 1.1 HelloWorld

```shell
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    system("pause");
    return 0;
}
```

### 1.2 注释

**作用**：在代码中加一些说明和解释，方便自己或其他程序员阅读代码

**两种格式**

1.**单行注释**：

```shell
// 描述信息
```



2.**多行注释**：

```shell
/* 描述信息 */
```



### 1.3 变量

**作用**：给一段指定的内存空间起名，方便操作这段内存

**语法**：数据类型 变量名 = 初始值;

### 1.4 常量

**作用**：用于记录程序中不可更改的数据

C++定义常量两种方式

1.**#define**宏常量:

```shell
#define 常量名 常量值
```

2.**const**修饰的变量

```shell
const 数据类型 常量名 = 常量值
```

### 1.5 关键字

**作用**：关键字是C++中预先保留的单词（标识符）

|            |              |                  |             |          |
| ---------- | ------------ | ---------------- | ----------- | -------- |
| asm        | do           | if               | return      | typedef  |
| auto       | double       | inline           | short       | typeid   |
| bool       | dynamic_cast | int              | signed      | typename |
| break      | else         | long             | sizeof      | union    |
| case       | enum         | mutable          | static      | unsigned |
| catch      | explicit     | namespace        | static_cast | using    |
| char       | export       | new              | struct      | virtual  |
| class      | extern       | operator         | switch      | void     |
| const      | false        | private          | template    | volatile |
| const_cast | float        | protected        | this        | wchar_t  |
| continue   | for          | public           | throw       | while    |
| default    | friend       | register         | true        |          |
| delete     | goto         | reinterpret_cast | try         |          |

 ### 1.6 标识符命名规则

**作用**：C++规定给标识符（变量、常量）命名是，有一套自己的规则

* 标识符不能是关键字
* 标识符只能由字母、数字、下划线组成
* 第一个字符必须为字母或下划线
* 标识符中字母区分大小写

## 2.数据类型

C++规定在创建一个变量或者常量时，必须要指定出相应的数据类型，否则无法给变量分配内存

### 2.1 整形

**作用**：整型变量表示的是**整数类型**的数据

C++中能够表示整型的类型有以下几种方式，**区别在于所占内存空间不同**：

| **数据类型**        | **占用空间**                                    | 取值范围         |
| ------------------- | ----------------------------------------------- | ---------------- |
| short(短整型)       | 2字节                                           | (-2^15 ~ 2^15-1) |
| int(整型)           | 4字节                                           | (-2^31 ~ 2^31-1) |
| long(长整形)        | Windows为4字节，Linux为4字节(32位)，8字节(64位) | (-2^31 ~ 2^31-1) |
| long long(长长整形) | 8字节                                           | (-2^63 ~ 2^63-1) |

### 2.2 sizeof关键字

**作用**：利用sizeof关键字可以**统计数据类型所占内存大小**

**语法**：

```shell
sizeof(数据类型 / 变量)
```

> **short < int <= long <= long long **

### 2.3 实型（浮点型）

**作用**：用于**表示小数**

浮点型变量分为两种：

 1.单精度float

 2.双精度double

两者的**区别**在于表示的有效数字范围不同。

| **数据类型** | **占用空间** | **有效数字范围** |
| ------------ | ------------ | ---------------- |
| float        | 4字节        | 7位有效数字      |
| double       | 8字节        | 15～16位有效数字 |

### 2.4 字符型

**作用**：字符型变量用于显示单个字符

**语法**：

```shell
char ch = 'a';
```

> **在显示字符型变量时，用单引号将字符括起来，不要用双引号**

> **单引号内只能有一个字符，不可以是字符串**

* C和C++中字符型变量只占用**1个字节**
* 字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元

ASCII码表格：

| **ASCII**值 | **控制字符** | **ASCII**值 | **字符** | **ASCII**值 | **字符** | **ASCII**值 | **字符** |
| ----------- | ------------ | ----------- | -------- | ----------- | -------- | ----------- | -------- |
| 0           | NUT          | 32          | (space)  | 64          | @        | 96          | 、       |
| 1           | SOH          | 33          | !        | 65          | A        | 97          | a        |
| 2           | STX          | 34          | "        | 66          | B        | 98          | b        |
| 3           | ETX          | 35          | #        | 67          | C        | 99          | c        |
| 4           | EOT          | 36          | $        | 68          | D        | 100         | d        |
| 5           | ENQ          | 37          | %        | 69          | E        | 101         | e        |
| 6           | ACK          | 38          | &        | 70          | F        | 102         | f        |
| 7           | BEL          | 39          | ,        | 71          | G        | 103         | g        |
| 8           | BS           | 40          | (        | 72          | H        | 104         | h        |
| 9           | HT           | 41          | )        | 73          | I        | 105         | i        |
| 10          | LF           | 42          | *        | 74          | J        | 106         | j        |
| 11          | VT           | 43          | +        | 75          | K        | 107         | k        |
| 12          | FF           | 44          | ,        | 76          | L        | 108         | l        |
| 13          | CR           | 45          | -        | 77          | M        | 109         | m        |
| 14          | SO           | 46          | .        | 78          | N        | 110         | n        |
| 15          | SI           | 47          | /        | 79          | O        | 111         | o        |
| 16          | DLE          | 48          | 0        | 80          | P        | 112         | p        |
| 17          | DCI          | 49          | 1        | 81          | Q        | 113         | q        |
| 18          | DC2          | 50          | 2        | 82          | R        | 114         | r        |
| 19          | DC3          | 51          | 3        | 83          | S        | 115         | s        |
| 20          | DC4          | 52          | 4        | 84          | T        | 116         | t        |
| 21          | NAK          | 53          | 5        | 85          | U        | 117         | u        |
| 22          | SYN          | 54          | 6        | 86          | V        | 118         | v        |
| 23          | TB           | 55          | 7        | 87          | W        | 119         | w        |
| 24          | CAN          | 56          | 8        | 88          | X        | 120         | x        |
| 25          | EM           | 57          | 9        | 89          | Y        | 121         | y        |
| 26          | SUB          | 58          | :        | 90          | Z        | 122         | z        |
| 27          | ESC          | 59          | ;        | 91          | [        | 123         | {        |
| 28          | FS           | 60          | <        | 92          | /        | 124         | \|       |
| 29          | GS           | 61          | =        | 93          | ]        | 125         | }        |
| 30          | RS           | 62          | >        | 94          | ^        | 126         | `        |
| 31          | US           | 63          | ?        | 95          | _        | 127         | DEL      |

ASCII 码大致由以下**两部分组**成：

* ASCII 非打印控制字符： ASCII 表上的数字 **0-31** 分配给了控制字符，用于控制像打印机等一些外围设备。
* ASCII 打印字符：数字 **32-126** 分配给了能在键盘上找到的字符，当查看或打印文档时就会出现。

# C++核心编程

## 1 内存分区模型

C++程序在执行时，将内存大方向划分为**4个区域**

* 代码区：存放函数体的二进制代码，由操作系统进行管理的
* 全局区：存放全局变量和静态变量以及常量
* 栈区：由编译器自动分配释放，存放函数的参数值、局部变量等
* 堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收

**内存四区意义：**

不同区域存放的数据，赋予不同的生命周期，给我们更大的灵活编程

### 1.1 程序运行前

在程序编译后，生成了exe可执行程序，**未执行该程序前**分为两个区域

* **代码区：**
  * 存放CPU执行的机器指令
  * 代码区是**共享**的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
  * 代码区是**只读**的，使其只读的原因是防止程序意外地修改了它的指令
* **全局区：**
  * 全局变量和静态变量存放在此
  * 全局区还包含了常量区、字符串常量和其他常量也存放在此
  * 该区域的数据在程序结束后由操作系统释放

**示例：**

```c++
//全局变量
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main() {

	//局部变量
	int a = 10;
	int b = 10;
	
	//静态变量
	static int s_a = 10;
	static int s_b = 10;
	
	system("pause");

	return 0;
}
```

总结：

* C++中在程序运行前分为全局区和代码区
* 代码区特点是共享和只读
* 全局区中存放全局变量、静态变量、常量
* 常量区中存放const修饰的全局变量、字符串常量

### 1.2 程序运行后

**栈区：**由编译器自动分配释放，存放函数的参数值、局部变量等

**示例：**

```c++
int * func()
{
	int a = 10;
	return &a;
}

int main() {

	int *p = func();

	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}
```

**堆区：**由程序员分配释放，若程序员不释放，程序结束时由操作系统回收

```c++
int* func()
{
	int* a = new int(10);
	return a;
}

int main() {

	int *p = func();

	cout << *p << endl;
	cout << *p << endl;
    
	system("pause");

	return 0;
}
```

**总结：**

* 堆区数据由程序员管理开辟和释放
* 堆区数据利用new关键字进行开辟内存

### 1.3 new操作符

C++中利用**new**操作符在堆区开辟数据

堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符**delete**

语法：new 数据类型

利用new创建的数据，会返回该数据对应的类型的指针

**示例1：基本语法**

```c++
int* func()
{
	int* a = new int(10);
	return a;
}

int main() {

	int *p = func();

	cout << *p << endl;
	cout << *p << endl;

	//利用delete释放堆区数据
	delete p;

	//cout << *p << endl; //报错，释放的空间不可访问

	system("pause");

	return 0;
}
```

**示例2：**

```c++
//堆区开辟数组
int main() {

	int* arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放数组 delete 后加 []
	delete[] arr;

	system("pause");

	return 0;
}
```

## 2 引用

### 2.1 引用的基本使用

**作用：**给变量起别名

**语法：**数据类型	&别名 = 原名

**示例：**

```c++
int main() {

	int a = 10;
	int &b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}
```


