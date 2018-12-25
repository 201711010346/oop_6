/*********************************************
Topic :运算符=重载
Author:Qiu xiaoli
Date  :2018 -12 -22 -22:42:10

**********************************************/
#include<iostream>
using namespace std;
#include<string>
class Student
{
	char *specialty;
public:
	Student(char *pSec = 0);
	Student(const Student &r);
	~Student();
	void show();
	Student &operator = (const Student &r);     //新增加的重载复制运算符声明
};
Student::Student(char *pSpec)
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
	}
	else specialty = 0;
}
Student::Student(const Student &r)
{
	if (r.specialty)
	{
		specialty = new char[strlen(r.specialty) + 1];
		strcpy(specialty, r.specialty);
	}
	else
		specialty = 0;
}
Student::~Student()
{
	if (specialty)
		delete[]specialty;           //specialty的存储空间由new运算符分配，需用delete释放
}
void Student::show()
{
	cout << "specialty=" << specialty << '\n';
}
Student &Student::operator = (const Student &s)
{
	if (s.specialty) delete[]specialty;
	if (s.specialty)
	{
		specialty = new char[strlen(s.specialty) + 1];
		strcpy(specialty, s.specialty);
	}
	else
		specialty = 0;
	return *this;
}




int main()
{
	Student zhang("computer");                  //调用普通构造函数
	Student wang("LLL");                         //调用普通构造函数
	wang = zhang;                                   //赋值，调用了重载运算符 =
	zhang.show();
	wang.show();
	system("pause");
	return 0;



system("pause");
return 0;
}