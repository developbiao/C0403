/*
@Describe:test typedef
*/

#include <stdio.h>

typedef int (*Mypoint)(int, int); //定义指向函数的新类型指针

int minus(int a, int b)
{
	return a + b;
}


int main()
{
	Mypoint pfn1 = minus; //pfn1指向了minus函数
	int num = pfn1(88, 77); //调用
	printf("num is :%d \n", num);
	return 0;
}
