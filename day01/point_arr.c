#include <stdio.h>

int main(void)
{
	char ver[] = "Gate Ver1.00 20100427";
	char *p_ver;
	p_ver = ver; //指针指向了数组的第一个地址
	
	while(*p_ver)
	{
		printf("character is :%c address is: %p \n", *p_ver, p_ver);
		p_ver++;
	}

	return 0;
}
