/*
1.<>表示系统自带文件，""表示自定义的文件
2.不允许循环一包含，比如a.h包含b.h,b.h又包含a.h
*/

#include <stdio.h>
#include "lisi.h"

int main()
{
	int total = sum(33, 77);
	printf("total is: %d\n", total);
	return 0;
}
