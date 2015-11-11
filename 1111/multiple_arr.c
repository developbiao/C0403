#include <stdio.h>

int main()
{
	//mutiple array
	int maps[5][5] = { {10, -11 ,-5, 40, 20}, {0, 90 ,30, 40, 10},
		{11, 30 ,30, -3, 50},
		{15, 0 ,30, 40, 6},
		{17, 28 ,30, 40, 8}

			};

	//int maps[] = {1, 3, 9, 22, 33};

	//int length = sizeof(maps) / sizeof(int);	
	int length = 5;
	int i, j;

	printf("length is %d\n", length);
	

	for(i=0; i<length; i++)
		for(j=0; j<length; j++)
			printf("%d \t", maps[i][j]);
	printf("\n");

	return 0;
}
