#include<iostream>
using namespace std;
class Date
{
	int year, month,day;                             //数据成员默认为是私有属性
public:
	Date(int y = 2011, int m = 8, int d = 30);
	friend ostream & operator <<(ostream &out, const Date &);       //友元函数重载输出运算符
	friend istream &operator >>(istream & in, Date &);              //友元函数重载输入运算符
};