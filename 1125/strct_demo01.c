#include <stdio.h>
int main()
{
	//1.定义结构体类型
	struct Date
	{
		int year;
		int month;
		int day;
	};

	//2.定义结构体变量
	struct Date d1 = {2015, 11, 25};

	//3.结构体的大小 
	int size = sizeof(d1); //这个结构体占12个字节

	printf("今天是%d年-%d月-%d日\n", d1.year, d1.month, d1.day);

	printf("结构体的大小:%d\n", size);

	//查看地址
	printf("%p - %p - %p\n", &d1.year, &d1.month, &d1.day);
	return 0;
}
