#include"6_03.h"
int main()
{
	Array a(5), b(10), c(8);             //定义3个数组对象，长度不同
	cout << "original a array:" << endl;
	a.print();                           //输出原始的a对象
	
	cout << "original b array:" << endl;
	b.print();                             //输出原始的b对象
  
	cout << "original c array:" << endl;
	c.print();                             //输出原始的c对象

	a += b;                                //隐式调用重载的+=运算符
	cout << "after added with b,a array:" << endl;

	a.print();                               //输出改变后的a对象
	c.operator+=(b);                          //显式调用重载的+=运算符，


	cout << "after added with b,c array:" << endl;
	c.print();                              //输出改变后C的对象

	++b;                                      //隐式调用
	cout << "after++,b array:" << endl;
	b.print();                             //输出改变后的b对象

	system("pause");
	return 0;

}