/*
@Describe:test typedef
*/

#include <stdio.h>

struct Person
{
	int age;
	char *name;
};

typedef struct Person Person;

int main()
{
	//struct Person lizhi = {16, "lizhi"};

	//使用新名字类型以后
	Person lizhi = {17, "lizhi"};
	printf("information:%d\t%s\t\n", lizhi.age, lizhi.name);
	return 0;
}
