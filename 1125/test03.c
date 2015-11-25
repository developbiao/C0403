#include <stdio.h>

struct Date //定义一个全局的结构体类型
{
	int year;
	int month;
	int day;
};

void test();
int main()
{
	struct Date d1 = {1993, 4, 3};
	test();
	printf("main出生日期%d年-%d月-%d-日\n", d1.year, d1.month, d1.day);
	
	return 0;
	
}

void test()
{
	struct Date
	{
		int year;
		int month;
		int day;	
	};	
	
	struct Date d1 = {1994, 6, 7};

	printf("func出生日期%d年-%d月-%d-日\n", d1.year, d1.month, d1.day);
}
