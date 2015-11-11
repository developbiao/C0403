#include <stdio.h>

int main()
{
	//数组的定义 类型  数组名
	int args[5];
	args[0] = 1;
	args[1] = 2;
	args[3] = 3;
	args[4] = 4;

	int args2[5] = {19, 27, 30, 83, 77};

	printf("args[3] is :%d\n", args[3]);
	printf("args2[3] is :%d\n", args2[3]);
	
	return 0;
}
