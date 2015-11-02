#include <stdio.h>

/*
@Describe: 提示用户输入一个小于10的正整数n,如果n是5,就输出下列图形,其它n值以此类推
54321
5432
543
54
5
	
*/
int main()
{
	//1,定义变量存储用户输入的整数
	int n = 0;

	//2,判断n是否是1~10的正整数
	while(n <= 0 || n >= 10)
	{
		//提示用户输入
		printf("输入一个1~9的正整数:\n");	
		scanf("%d", &n);
	}

	//3,输出一条分隔线(跟用户输入隔开)
	printf("--------------------\n");
	
	//输出
	int row;
	int col;
	for (row=1; row <= n; row++)	
	{
		for(col=n; col >= row; col--)
		{
		
			printf("%d", col);
		}
		printf("\n");
	}
	
	return 0;
}
