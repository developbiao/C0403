#include <stdio.h>
#define VER_LEN 22
int main(void)
{

	char ver[VER_LEN] = "Gate Ver1.00 20140611";
	char idx, *pv_ver;
	
	for (idx = 0; idx < VER_LEN; idx++)
	{
		printf("%c", ver[idx]);
	}

	printf("\n");

	pv_ver = ver;

	while(*pv_ver)
	{
		printf("%c", *pv_ver);
		pv_ver++;
	}

	printf("\n");

	return 0;
	
}

/*
@Describe:数组和指针同时使用
@Date:2014/06/11
@Author:GongBiao
*/
