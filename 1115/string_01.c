#include <stdio.h>

int main()
{
	char name[] = "it";
	//没有加'\0'是很危险的直到找到'\0'为止
	char name2[] = {'o', 'k'};

	printf("value is :%s\n", name2);
	printf("%s\n", &name2[1]);

	return 0;
}
