/*
@Author:GongBiao
@Describe:程序入口
*/

#include <stdio.h>
#include "lisi.h"

int main()
{
	int a = 10;
	int b = 3;

	printf("%d + %d = %d\n", a, b, sum(a, b));
	printf("%d - %d = %d\n", a, b, minus(a, b));
	printf("%d * %d = %d\n", a, b, multiply(a, b));
	printf("%d / %d = %d\n", a, b, divide(a, b));
	
	return 0;
}
