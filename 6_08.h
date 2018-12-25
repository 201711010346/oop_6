#include<iostream>
using namespace std;
class Complex
{
private:
	float real;
	float imag;
public:
	Complex(float r = 0, float i = 0);
	void print();
	friend Complex operator ++(Complex &a);           //友元重载单目运算符前缀++，提供一个引用参数
	friend Complex operator ++(Complex &a, int);     //友元重载单目运算符后缀++，多增加一个int
};
