/*********************************************
Topic :同一个类中通过函数重载实现静态多态性
Author:Qiu xiaoli
Date  :2018 -12 -9 -21:26:28

**********************************************/
#include<iostream>
using namespace std;
#include<string.h>
/*-----------定义类Student------------*/
class Student
{
	char name[20];
	int no;
public:
	Student();                                 //构造函数重载版本1，无参数
	Student(char *sname, int n);               //构造函数重载版本1，有参数
	void print();                              //输出函数重载版本1，无参数
	void print(int n);                         //输出函数重载版本1，有参数

};