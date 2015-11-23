#include <stdio.h>

int main()
{
	char name[] = "version";
	char *p = name;
	*p = 'F';

	char *name2 = "Motorola";

	printf("%s\n", p); //这样也可以打印数据的原因是因为输出字符串直到遇到'\0'
	printf("%s\n", name2); //常量区

	return 0;
}
