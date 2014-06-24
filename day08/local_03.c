#include <stdio.h>
int main(void)
{
	unsigned a,b;
	printf("input a number:");
	
	scanf("%d", &a);
	b = a >> 5;
	b = b & 15;
	
	printf("a=%d\tb=%d\n",a ,b);
	
	return 0;
}

/*
位运算练习
*/
