#include <stdio.h>

void test()
{
	printf("调用了test函数\n");
}

int main()
{
	//(*p) 是固定写法,代表指针变量p将来肯定是指向函数
	//左边的void:指针变量p指向的函数没有返回值
	//右边():指针变量p指向的函数没有形参

	void (*p)();
	//指针变量p指向了test函数
	p = test;

	(*p)(); //调用函数

	p();  //第二种方式调用

	
	return 0;
}
