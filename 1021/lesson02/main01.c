#include <stdio.h>

int main(int argv, char* argc[])
{
	printf("argv is %d\n", argv);
	
	int i;
	for(i; i < argv; i++)
	{
		printf("argc[%d] is: %s\n", i, argc[i]);
	}

	return 0;
}
