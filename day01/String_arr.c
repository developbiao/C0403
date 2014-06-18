#include <stdio.h>
#define LEN 10

int main()
{
	int i;
	char str[LEN] = "gongbiao";

	printf("%s\n", str);

	for (i = 0; i < LEN; i++)
	{
		printf("%c : %p \n", str[i], &str[i]);
	}
	return 0;
}
