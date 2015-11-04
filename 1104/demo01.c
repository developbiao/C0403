#include <stdio.h>

int main(int argv, char* argc[])
{
	long int var = 100678921398789298l;
	long long int var2 = 513125199304031217;
	printf("long:%ld\n", var);
	printf("long long int:%lld\n", var2);

	
	int value = sizeof(long);
	printf("long size%d\n",  value);

	int value2 = sizeof(long long);
	printf("long long  size%d\n",  value2);

	int value3 = sizeof(short);
	printf("short size %d\n", value3);

	return 0;
}
