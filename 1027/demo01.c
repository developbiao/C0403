#include <stdio.h>
int main(int argv, char* argc[])
{
	int a = 3;
	int b = 5;
	a = b - a;
	b = b - a;
	a = b + a;
	
	printf("swap two number vlaue a is: %d\nb is : %d\n", a, b);

	return 0;
}
