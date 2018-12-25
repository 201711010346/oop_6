#include"6_11.h"
int main()
{
	base ob1, *p;              //创建基类的对象obl和指针p
	derive ob2;                //创建派生类的对象ob2
	p = &ob1;                 //将指针p指向基类的对象ob1
	cout << "p point to base class object ob1:\n";

	p->f1();                   //调用基类函数
	p->f2();
	p->f3();
	p = &ob2;
	cout << "p point to derive class object ob2:\n";
	p->f1();
	p->f2();
//	p->f2(1);     因为基类中的f2（）是不带参数的
	p->f3();
	cout << "derive class object ob2 acll member function:\n";
	ob2.f1();                       //通过派生类对象只能直接调用本类的f1（）函数
//  ob2.f2();
	ob2.base::f2();
	ob2.f2(1);
	ob2.f3();

	system("pause");
	return 0;
}