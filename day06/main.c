#include <stdio.h>
int main(int argc, char *argv[])
{
	//mian 函数参数的操作


	while(argc-- > 1)
	{
		printf("%s\n", *++argv);
	}

		printf("ok server is runing");

	//printf("%s\n", *argv);

	return 0;
	
}

/*

mian函数传参数的问题
*/
