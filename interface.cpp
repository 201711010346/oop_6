#include"interface.h"
#include<string.h>
#include<iostream>
using namespace std;
Interface::Interface()
{
	num = 0;
}
void Display()
{
	cout << "\n********0.退    出**************" << endl;
	cout << "**********1.录入信息**************" << endl;
	cout << "**********2.查询信息**************" << endl;
	cout << "**********3.浏览信息**************" << endl;
	cout << "**********4.年龄排序**************" << endl;
	cout << "**********5.统计信息**************" << endl;
}
void Interface::Run()
{
	int choice;
	do
	{
		Display();
		cout << "\n请输入你的选择：";
		cin >> choice;
		switch(choice)
		{
			case 0:break;
			case 1:
				Input();
				break;
			case 3:
				Browse();
				break;
			case 4:
				Sort();
				break;
			case 5:
				Statistic();
				break;
		}
	} while (choice);
}
void Interface::Input()
{
	if (num == N)
	{
		cout << "\n数据已经存满！\n";
		return;
	}
	int i = num;
	cin >> st[i];
	num++;
}
void Interface::Browse()
{
	cout << "\n你要查看的学生的数据！\n";
	if (num == 0)
	{
		cout << "\n没有学生数据！\n";
		return;
	}
	else
	{
		cout << "姓名" <<'\t' << "性别" << '\t'<< "年龄" << '\t' << "专业" << '\t' << "学号" << '\n';
		for (int i = 0; i < num; i++)
			cout << st[i];
	}
}bool Interface::Search()
{
	char na[20];
	cout << "\n你要查找的学生！" << endl;
	cout << "\n你要查找的人员姓名：" << endl;
	cin >> na;
	int i;
	for (i = 0; i < num; i++)
		if (strcmp((char*)(st[i]), na) == 0)
			break;
	if (i == num)
	{
		cout << "\n 没有此人信息！\n" << endl;
		return false;
	}
	else
		cout << "\n没有此人信息!" << endl;
	return false;
}
void Interface::Sort()
{
	cout << "\n按学生年龄排序！";
	int k;
	for (int i = 0; i < num - 1; i++)
	{
		k = i;
		for (int j = i + 1; j < num; j++)
			if ((int)(st[k]) < (int)(st[j]))
				k = j;
		Student t = st[k];
		st[k] = st[i];
		st[i] = t;
	}
}
void Interface::Statistic()
{
	int m = 0;
	cout << "\n按学生性别统计数据！";
	for (int i = 0; i < num; i++)
		if (char(st[i]) == 'M' || char(st[i]) == 'M')
			m++;
	cout << "\n统计结果！男同学：" << m << "人\n";
}