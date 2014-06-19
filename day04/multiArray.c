#include <stdio.h>
int main(void)
{
	int i, j;
	int data[4][5] = {
				{1, 2, 3},
				{1, 2, 3, 4},
				{1, 2, 3, 4, 5},
				{0}
			};

	printf("data[4][5]:\n");

	for( i = 0; i < 4; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d ", data[i][j]);
		}

		printf("\n");
	}

	return 0;
}

/*
@Describe:定义二维数据和数组的遍历
@Author:GongBiao
@Date:2014/06/19
*/
