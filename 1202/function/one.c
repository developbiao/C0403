#include <stdio.h>

extern void test() // 定义外部函数
{
	printf("调用了test\n");
}

extern void test02()
{

	printf("调用了外部test02\n");
}

static void test03() //定义内部函数
{
	printf("调用了外部test03\n");
}


