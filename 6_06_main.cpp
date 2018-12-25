#include"6_06.h"
int main()
{
	Matrix am(10, 10);
	cout << "am(2,3)=" << am(2, 3) << endl;

	am(2, 3) = 900;
	cout << "am(2,3)=" << am(2, 3) << endl;
	system("pause");
	return 0;
}