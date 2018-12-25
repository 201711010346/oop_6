#include"6_13.h"
double Triangle::area() const
{
	return 0.5*base*height;
}
double Rectangle::area() const
{
	return height*width;
}
double Circle::area() const
{
	return PI*radius*radius;
}