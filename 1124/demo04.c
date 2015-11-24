#include <stdio.h>

int main()
{
	//1.定义结构体类型
	struct Person
	{
		int age; //年龄
		double height; //身高
		char *name; //姓名
	};

	//2.根据结构体类型，定义结构体变量
	struct Person p = {22, 170, "rose"};
	p.age = 17;

	//不用按顺序的写法
	struct Person p2 = {.age=13, .height=150.6, .name="xiaoxiao"};

	printf("name:%s \t age:%d\t height:%lf\n", p.name, p.age, p.height);
	printf("name:%s \t age:%d\t height:%lf\n", p2.name, p2.age, p2.height);

	return 0;
	
}
