#include"6_01.h"
/*------------类成员函数的实现--------------*/
Student::Student()
{
	no = 0;
	strcpy(name, "同学");
}
Student::Student(char *sname, int n)
{
	no = n;
	strcpy(name, sname);
}
void Student::print()
{
	cout << name << " " << no << endl;
}
void Student::print(int n)
{
	cout << name << " B" << n << no << endl;
}