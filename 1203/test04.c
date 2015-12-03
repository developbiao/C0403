#include <stdio.h>

#define PI 3.14
int main()
{

	#ifndef PI
	printf("没有定义PI这个宏\n");
	#else
	printf("定义了PI这个宏\n");
	#endif

	return 0;

}
