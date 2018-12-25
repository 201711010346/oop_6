#include<iostream>
using namespace std;
class Base
{
public:
	Base(int x);                       //基类的构造函数
	virtual void Print();               //定义函数print（）为虚函数
	int a; 
};
class Derive :public Base
{
public:
	int a;                            //派生类中数据成员a与基类数据成员同名
	Derive(int x, int y);
	virtual void Print();            //此处的virtual可省略
};