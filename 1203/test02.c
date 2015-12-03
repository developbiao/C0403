#include <stdio.h>

struct Date
{
	int year;
	int month;
	int day;
};

void test();
int main()
{
	struct Date date = {.day=10, .month=9, .year=2009};
	
	printf("我的回忆在%d年-%d月-%d日\n", date.year, date.month, date.day);
	return 0;
}
