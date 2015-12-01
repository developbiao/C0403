/*
@Describe:Test include multi file
*/
#include <stdio.h>
#include "yejing.h"
#include "dsk.h"
int main()
{
	int a = 77;
	int b = 99;
	int total = sum(a,  b);
	int minus = dec(a, b);
	printf("total is :%d\n", total);
	printf("Dec is :%d\n", minus);
	return 0; 
}
