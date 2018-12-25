/*********************************************
Topic :定义由于原函数重载运算符
Author:Qiu xiaoli
Date  :2018 -12 -22 -21:33:34

**********************************************/
#include<iostream>
using namespace std;

class Complex             //定义complex类
{
private:
	float real;          //实数
	float imag;          //虚数
public:
	Complex(float r = 0, float i = 0);
	void print();
	friend Complex operator + (const Complex &a, const Complex &b);           //友元重载双目运算符+，两个形式参数
	friend Complex operator ++(Complex &a);                                      //友元重载单目运算符++，提供一个引用参数
};
