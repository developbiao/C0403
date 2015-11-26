#include <stdio.h>

int main()
{
	struct Date
	{
		int year;
		int month;
		int day;
	};	

	struct Student
	{
		int uid;
		struct Date birthday;
		struct Date ruxueday;
	};

	

	struct Student xiaoming = {32, {1990, 11, 8}, {1997, 9, 1}};	

	printf("xiao ming 的学号是%d,他是%d年-%d月%d-日出生的，他是在%d年-%d月到学校读书的.\n", xiaoming.uid, xiaoming.birthday.year, xiaoming.birthday.month, xiaoming.birthday.day, xiaoming.ruxueday.year, xiaoming.ruxueday.month);

	return 0;
}
