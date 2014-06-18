#include <stdio.h>

int main(void)
{
	char *str = "I Love You SiChuang!";
	char i;
	printf("str= %s \n", str);
	
	for (i = 0; i < 20; i++)
	{
		printf("str[%c] = \n", str[i]);
	}
	
	//定义的字符串指针的使用
	printf("str = %c \n", str[2]);
	
	return 0;
}
