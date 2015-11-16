#include <stdio.h>

int changeValue(int*);
int main()
{
	int var = 38;
	
	//调用函数	
	changeValue(&var);
	
	printf("var value is :%d\n", var);
	return 0;
}

int changeValue(int *n)
{
	*n = 72;	
}
