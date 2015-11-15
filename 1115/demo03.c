#include <stdio.h>

int main()
{
	//char str[] = "hello moto";
	//char str[] = "中国"; //一个中文字占3个字节
	//char str[] = "maker\0chian";
	char str1[] ="Learn";
	char str2[] = {'h', 'p'};
	int len = strlen(str2);

	printf("%d\n", len);
	return 0;
}
