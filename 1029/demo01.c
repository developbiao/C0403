#include <stdio.h>

int main()
{
	//自动类型提升
	/*
	double c = 10.6 + 6;
	
	printf("%f\n", c);

	*/

	//参与运算左边的是什么类型结果就是什么类型
	double c = (double)10 / 3;
	printf("%f\n", c);
	return 0;
}
