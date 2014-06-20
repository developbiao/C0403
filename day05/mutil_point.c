#include <stdio.h>
int main(void)
{
	char *name[] = {"China", "Beijing", "Ya,an"};
	char ** p_name;	

	printf("name[0] : %p\n", name[0]);
	printf("name[1] : %p\n", name[1]);
	printf("name[2] : %p\n", name[2]);

	printf("\n");

	p_name = &name[0];
	printf("&name[0]: %p\n", &p_name);
	
	p_name = &name[1];
	printf("&name[1]: %p\n", &p_name);

	p_name = &name[2];
	printf("&name[2]: %p\n", &p_name);


	return 0;

	
}

/*
多级指针，数据本生的地址，和指向指针的地址。
*/
