#include <stdio.h>
int main(void)
{
	char *name[] = {"China", "SiChuang", "Ya'an", "Shimain"};
	char **p_name;
	int i;
	
	p_name = name; //pname 指向了name的地址

	for (i = 0; i < 4; i++)
	{
		printf(" %s ", *(p_name + i));
	}

	printf("\a\a\a\a\a\a\a\a");
	printf("输出完成！\n");
	

	return 0;

}
