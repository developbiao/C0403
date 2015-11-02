#include <stdio.h>

int sum(int var1, int var2);

int main()
{
	int a = 33;
	int b = 77;

	int c = sum(a, b);

	printf("sum=%d\n", c);

	return 0;
}

int sum(int a, int b)
{
	return a+b;
}
