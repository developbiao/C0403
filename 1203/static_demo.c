#include <stdio.h>

void openLight();
int main()
{
	openLight();
	openLight();
	openLight();
	openLight();
	return 0;
}

void openLight()
{
	int a = 0;
	static int b = 0; //初始化一个静态变量,常用使用可以定义成static
	b++;
	printf("a = %d\t b=%d\n", a, b);
}
