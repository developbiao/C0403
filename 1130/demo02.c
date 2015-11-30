#include <stdio.h>

int main()
{
	#define LENGTH 8

	int var = LENGTH;

	//从这行开始,LENGTH这个宏就失效了
	#undef LENGTH 
	printf("LENGTH IS :%d\n", LENGTH);
	return 0;
}
