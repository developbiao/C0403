/*
@Describe: 
1.extern 和static 分别定义和调用外部函数和内部函数
2.内部函数定义了static外部函数的extern同名函数是调用不了的
*/
#include <stdio.h>
extern void test(); //声明外部函数
static  void test02(); //声明内部函数
int main()
{

	test();		
	test02();
	return 0;
}

static void test02()
{
	printf("内部函数in main\n");	
}

