#include <stdio.h>

int main()
{
	//定义结构体的时候同时定义变量
	struct Person
	{
		int age;
	} p1;

	p1.age = 17;

	struct Person p2 = {32};

	
	return 0;
}
