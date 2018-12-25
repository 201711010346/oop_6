#include"6_13.h"
int main()
{
	Shape *ptr[3];                //定义抽象类的指针数组
	ptr[0] = new Triangle(2.5, 10.0);
	ptr[1] = new Rectangle(15, 22);
	ptr[2] = new Circle(3.0);
	cout << "The area of Triangle(2.5,10.0) is:";
	cout << ptr[0]->area() << endl;
	cout << "The area of Rectangle(15,22) is:";
	cout << ptr[1]->area() << endl;
	cout << "The area of Circle(3.0)；is:";
	cout << ptr[2]->area() << endl;

	system("pause");
	return 0;
}