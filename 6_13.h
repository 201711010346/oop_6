#include<iostream>
using namespace std;
const double PI = 3.1416;
class Shape                      //定义抽象基类Shape
{
public:
	virtual double area() const = 0;         //声明纯虚函数
};
class Triangle :public Shape
{
public:
	Triangle(double b, double h) :base(b), height(h)
	{

	}
	double area() const;                  //在派生类中定义纯虚函数的实现代码
private:
	double base, height;
};
class Rectangle :public Shape
{
public:
	Rectangle(double h, double w) :height(h), width(w)
	{}
	double area() const;
private:
	double height, width;
};
class Circle :public Shape          //定义派生圆类
{
public:
	Circle(double r) :radius(r)
	{

	}
	double area() const;
private:
	double radius;
};
	