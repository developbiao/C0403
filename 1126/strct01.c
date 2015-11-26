#include <stdio.h>

/*
@Describe:结构体的访问方式
*/
int main()
{
	struct Woogi
	{
		int age;
		char *name;
		
	};

	//结构体变量
	struct Woogi wtest1 = {22, "ropter"};

	//定义结构体指针
	struct Woogi *p = &wtest1;
	
	p->age = 33;

	//第一种方法访问
	printf("age=%d, name =%s\n", wtest1.age, wtest1.name);
	//第二种方法访问 
	printf("age=%d, name =%s\n", (*p).age, (*p).name);
	//第三种方法访问
	printf("age=%d, name =%s\n", p->age, p->name);
	
	return 0;
}
