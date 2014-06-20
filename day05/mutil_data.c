#include <stdio.h> 
int main(void)
{
	int i, j;
	//int data[4][5];  //没有对数组初始化的结果
	int data[4][5] = {
				{1, 2, 3, 4, 5},
				{1, 2, 3, 4, 5},
				{1, 2, 3, 4, 5},
				{1, 2, 3, 4, 5}
			};

	printf("data[4][5]: \n");

	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%p ", &data[i][j]);
		}
		printf("\n");
	}

	return 0;
}
