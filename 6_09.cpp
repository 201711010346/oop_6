#include"6_09.h"
Base::Base(int x)
{
	a = x;
}
void Base::Print()
{
	cout << "Base::a=" << a << endl;
}
Derive::Derive(int x, int y) :Base(x)
{
	a = y;                        //派生类函数中直接访问本类的同名成员
	Base::a *= 2;                 //对继承类的同名数据成员修改
}
void Derive::Print()                         //此处的virtual可省略
{
	Base::Print();                          //访问基类的同名成员前面需缀上Base：：
	cout << "Derived::a=" << a << endl;   //访问本类中的同名成员
}
