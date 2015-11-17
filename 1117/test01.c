#include <stdio.h>

/*
@Describe:针指占多少字节证明
*/
int main()
{
	int var = 10;
	char c = 1;
	//int *p = &c; waring int 类型的指字指指向了char的内存会多读3个字节空间
	char *p = &c;

	int *p1;
	double *p2;
	char *p3;

	int a = sizeof(p1);
	int b = sizeof(p2);
	int e = sizeof(p3);

	printf("指针的长度%d\t%d\t%d", a, b, e);


	printf("c value is :%d\n", *p);
	return 0;
}
