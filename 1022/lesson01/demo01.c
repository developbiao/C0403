#include <stdio.h>
int main(int argv, char* argc[])
{
	int i, j;
	
	printf("please input value a:\n");
	scanf("%d", &i);
	printf("please input value b:\n");
	scanf("%d", &j);

	printf("i + j = %d\n", i + j);	

	return 0;
}
