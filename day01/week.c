#include <stdio.h>
#define WEEKNUM 7

int main()
{
	int temp;
	int week[WEEKNUM] = {1, 2, 3, 4, 5, 6, 7};

	printf("Please input today is :");
	scanf("%d", &temp);

	if (temp <= WEEKNUM)
	{
		printf("Tomorrow is : %d\n", week[temp]);
	}
	else
	{
		printf("Error!\n");
	}

	return 0;

}
