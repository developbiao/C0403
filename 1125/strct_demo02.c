#include <stdio.h>
int main()
{
	struct Date
	{
		int year;
		int month;
		int day;
	};

	struct Date d1 = {2015, 11, 25};
	struct Date d2 = {2003, 6, 7};

	//把d1所有的成员值赋给d2
	d1 = d2;

	int size = sizeof(d1); //这个结构体占12个字节

	printf("今天是%d年-%d月-%d日\n", d1.year, d1.month, d1.day);

	printf("结构体的大小:%d\n", size);

	//查看地址
	printf("%p - %p - %p\n", &d1.year, &d1.month, &d1.day);
	return 0;
}
