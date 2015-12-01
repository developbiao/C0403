/*
@Describe:test typedef
*/

#include <stdio.h>


//type定义指向结构体的指针类型
typedef struct Person
{
	int age;
	char *name;
} * PersonPoint;


int main()
{

	Person lizhi = {18, "lizhi"};

	PersonPoint p = &lizhi;

	printf("information:%d\t%s\t\n", p->age, p->name);
	return 0;
}
