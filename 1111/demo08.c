#include <stdio.h>

int main()
{
	//int array[][] = {}; 声明初始化是错误的
	int array[3][5] = {
	{1, 3, 5, 7, 9},
	{2, 4, 6, 8, 10},
	{3, 7, 5, 8, 5}
	};
	
	int i,j;
	for(i=0; i<3; i++)
		for(j=0; j<5; j++)
			printf("%d \t", array[i][j]);
	printf("\n");
	return 0;
}
