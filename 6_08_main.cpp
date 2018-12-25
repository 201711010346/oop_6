#include"6_08.h"
int main()
{
	Complex c1(1.5, 2.5), c2(5, 10), c3;
	cout << "original c1 is : ";
	c1.print();
	cout << "original c2 is : ";
	c2.print();
	c3 = ++c2;
	cout << "after c3=++c2;c2 is : ";
	c2.print();
	cout << "after c3=++c2,c3 is : ";
	c3.print();
	c3 = c1++;
	cout << "after c3=c1++; c1 is : ";
	c1.print();
	cout << "after c3=c1++; c3 is : ";
	c3.print();
	system("pause");
	return 0;
}