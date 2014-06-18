#include <stdio.h>

int main(void)
{
	char *str = "I Love You LZH!";
	
	printf("首地址是：\t %p\n", str);

	while(*str)
	{
		printf("%c \t => %p\n", *str, str);
		str++;  //一定要记得指针的移动
	}

	return 0;
}
