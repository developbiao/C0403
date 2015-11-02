#include <stdio.h>

void change(int a, int b)
{
	int tmp = a;
	 a = b;
	 b = tmp;
}

int main(int argv, char* argc[])
{
	int a = 17;
	int b = 18;
	change(a, b);

	printf("num a is %d, num b is %d \n", a, b);

	return 0;
}
