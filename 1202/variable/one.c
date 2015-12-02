#include <stdio.h>

int a;
static int b;	//定义一个内部变量

void test()
{
	b = 98;
	printf("a is :%d\n", a);
	printf("b is :%d\n", b);
}
