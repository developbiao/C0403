#include <stdio.h>

//define struct
struct Woogi
{
	char *name;
	int id;
};

//not modify value
void test1(struct Woogi w1)
{
	w1.id = 30;
	w1.name = "xiaowoogi";	
}

//modfiy value
void test2(struct Woogi *p)
{
	p->id = 15;
	p->name = "Jake";
	
}
	
int main()
{
	
	
	struct Woogi stu1 = {.id=99903, .name="Roba"};
	test1(stu1);
	test2(&stu1);
	printf("uid:%d, name:%s\n", stu1.id, stu1.name);
	return 0;
}


