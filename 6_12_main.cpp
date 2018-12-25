#include"6_12.h"
void DrawObject(Point *p)          //定义顶层函数，以基类指针为形式参数
{
	p->Draw();
}
int main()
{
	Line L;
	Circle C;
	DrawObject(&L);
	DrawObject(&C);
	system("pause");
	return 0;
}