#include <stdio.h>

char *test();

int main()
{
	char *name = test();
	printf("name = %s \n", name);

	return 0;
}

char *test() //返回函数的指针
{
	return "rose";
}
