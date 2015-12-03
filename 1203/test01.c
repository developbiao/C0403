#include <stdio.h>

int sum(int, int);

int main()
{
	//定义指向函数的指针必须加上()号
	int (*p)(int, int);
	p = sum;
	int c = p(10, 11); //使用的时候不用加*号
	printf("和是%d\n", c);
	return 0;
}

int sum(int a, int b)
{
	return a + b;
}
