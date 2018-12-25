#include<iostream>
using namespace std;
class A
{
public:
	virtual ~A();              //将析构函数声明为虚函数
};
class B :public A
{
public:
	B(int i);
	~B();
private:                      //派生类的析构函数自动为虚函数
	char *buffer;
};