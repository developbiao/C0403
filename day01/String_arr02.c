#include <stdio.h>
#define LEN 26

int main(void)
{
	char str[LEN] = {'A', 'B', 'C', 'D', 'E', 'F', 'J', 'H', 'G', 'K', 'L', 'M',
			 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int idx; 
	char *p_str;

	p_str = str;

	printf("please input Idx(0-25) and Enter :\n");
	scanf("%d", &idx);

	if(idx < LEN)
	{
		printf(" The character is : %c \n", *(p_str + idx));
	}
	else
	{
		printf(" The Idx is overflow \n");
	}

	return 0;
}
