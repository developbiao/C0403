#include <stdio.h>

int main()
{
	printf("this is a test include\n");
	#include "./hello.txt"
	printf("value is :%d \n", b);
	return 0;
}

int test01()
{
	return 8;
}
