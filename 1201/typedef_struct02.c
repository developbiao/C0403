/*
@Describe:test typedef
*/

#include <stdio.h>

typedef struct
{
	int age;
	char *name;
} Person;


int main()
{
	//struct Person lizhi = {16, "lizhi"};

	//使用新名字类型以后
	Person lizhi = {18, "lizhi"};
	printf("information:%d\t%s\t\n", lizhi.age, lizhi.name);
	return 0;
}
