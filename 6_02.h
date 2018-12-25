/*********************************************
Topic :运算符重载示例
Author:Qiu xiaoli
Date  :2018 -12 -11 -22:04:51

**********************************************/
#include<iostream>
using namespace std;
/*------------------类Point的定义-----------*/
class Point
{
public:
	Point(int a = 0, int b = 0);                     //构造函数
	void print();                                    //打印函数
	Point operator + (Point p1);           //以成员函数形式重载运算符
	friend Point operator -(Point p1, Point p2);            //以友元形式重载运算符-
private:
	int x;
	int y;
};