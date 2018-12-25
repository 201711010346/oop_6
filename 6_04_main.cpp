#include"6_04.h"
int main()
{
	Complex c1(1.5, 2.5), c2(5, 10), c3;
	cout << "original c1 is: ";
    c1.print();
	
	cout << "original c2 is: ";
	c2.print();

	c3 = c1 + c2;
	c3.print();
	
	++c2;
	cout << "after added 1, c2 is: ";
	c2.print();
	system("pause");
	return 0;
}