#include <stdio.h>
int main(int argv, char* argc[])
{
	int a, b;
	printf("please input int value a:\n");
	scanf("%d", &a);
	printf("please input int value b:\n");
	scanf("%d", &b);

	if(0 != b)
	{
		printf("a / b = %d\n", a / b);
	}
	else
	{
		fprintf(stderr, "b != 0 \n");
		return 1;
	}
	return 0;
}
