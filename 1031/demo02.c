#include <stdio.h>

/*
@Describe:编写一个函数计算阶乘
@Author:GongBiao
*/

//声明函数
int pieAdd(int n);

int main()
{
	printf("Please input number:\n");	
	int num;
	scanf("%d", &num);
	int result = pieAdd(num);
	printf("%d\n", result);
	
	return 0;
}


//定义pieAdd函数
int pieAdd(int n)
{
	/*
	解题思路:先计算每个数字的阶乘,再把所有的阶乘加起来
	*/

	//1,如果传入的n值不合理,直接返回0
	if(n < 1)return 0;
	
	//2,定义一个变量,用来记录每次阶剩相加的结果
	int sum = 0;
	int i;
	int j;
	for(i=1; i<=n; i++)
	{
		int multi = 1;
		
		for(j=1; j<=i; j++)	
		{
			multi *= j;		
		}
		sum += multi;
	}

	return sum;

}
