/*
@Describe:写一个函数计算两个数的合和差

*/
#include <stdio.h>

int sumAndMin(int var1, int var2, int* var3);

int main()
{
	int a;
	int b;
	printf("Please input value a\n");
	scanf("%d", &a);
	printf("Please input value b\n");
	scanf("%d", &b);

	int total;
	int cha;
	

	total = sumAndMin(a, b, &cha);	
	

	printf("sum is: %d\t cha is %d\n", total, cha);
	
}

int sumAndMin(int var1, int var2, int* var3)
{

	*var3 = var1 - var2;
	return var1 + var2;	
	
}

