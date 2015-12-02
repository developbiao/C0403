/*
全局变量分2种:
外部变量：定义的变量能被文件和其它文件访问
1> 默认情况下，所有的全局变量都是外部变量
2> 不同文件中的同名外部变量，都代表着同一个变量

内部变量:定义的变量只能被本文件访问，不被其它文件访问
1>不同文件中的同内部变量，互不影响

static对变量的作用
声明一个外部变量作用:
声明一个外部变量

static对函数的作用：
定义和声明一个内部函数

extern对函数的作用:
定义和声明一个外部函数(可以省略)
*/
#include <stdio.h>

int a; //还是要声明外部的 int a 
int main()
{
	static int b =97;
	test();
	a = 77;
	printf("main a is: %d\n", a);
	printf("maint inner b is :%d\n", b);
	return 0;
}

int a;
