#include <stdio.h>

int main()
{
/*

	不建议的写法, int *p 只能指向itn类型的数据
	int *p;
	double d = 10.0;
	p = &d;
*/

/*
	指针变量未经过初始化,不要拿来间接访问其它存储空间
*/

int a = 10;

int *p = &a; //等同于p = &a

//*p = &a 是这错误的写法,自己存储自己的地址

*p = 88; //是个时候的*的作用:访问指向变量p指向存储空间

char c = 'B';

char *cp = &c;

*cp = 'G';

printf("%c\n", c);



return 0;
}
