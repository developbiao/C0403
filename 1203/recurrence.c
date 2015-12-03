/*
@Describe:递归相关知识
@Author:GongBiao
*/
#include <stdio.h>

int pow2(int num, int n);
int pow3(int num, int n);
int main()
{
	//计算8^6次方
	int result = pow2(8, 3);
	int memory = pow3(8, 3);		
	printf("result:%d\n", result);
	printf("以前我的v3ie的手机内存是:%d\n", memory);
	return 0;
}

int pow2(int num, int n)
{
	if(n <= 0)
	{
		return 1;
	}
	int i;
	int result = 1;
	for(i=0; i<n; i++)
	{
		result *= num;	
	}

	return result;
}


/*
规律
pow3(num, 0) = 1;
pow3(num, 1) = num == pow(num, 0) * num;
pow3(num, 2) = num == pow(num, 1) * num;
pow3(num, 3) = num == pow(num, 2) * num;

*/
int pow3(int num, int n)
{
	if(n <= 0)return 1;

	return pow3(num, n-1) * num;	
}
