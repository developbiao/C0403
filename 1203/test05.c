#include <stdio.h>

int main()
{
	struct Student
	{
		int age;
		char *name;
	};

	struct Student stu;
	printf("请输入学生年龄:\n");
	scanf("%d", &stu.age);
	printf("请输入学生姓名:\n");
	scanf("%s", stu.name);

	printf("name:%s\t, age:%d\n", stu.name, stu.age);
	return 0;
}
