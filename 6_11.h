#include<iostream>
using namespace std;
class base
{
public:
	virtual void f1()              //声明并定义基类base
	{
		cout << "f1 function of base \n";
	}
	virtual void f2()              //声明为虚函数
	{
		cout << "f2 function of base \n";
	}
	void f3()
	{
		cout << "f3 function of base \n";
	}
};
class derive :public base
{
public:
	void f1()                                       //具有虚函数特征
	{
		cout << "f1 function of derive \n";
	}
	void f2(int x)                                     //改变参数，，同名覆盖，不具有虚函数特征
	{
		cout << "f2 function of derive \n";
	}
	void f3()                                       //仍未普通函数，同名覆盖
	{
		cout << "f3 function of derive \n";
	}
};