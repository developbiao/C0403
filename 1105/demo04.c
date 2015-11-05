#include <stdio.h>
/*
@Describe:利用与判断奇数还是偶数
*/
int main(int argv, char* argc[])
{
	/*
		10: 1010
		15: 1111
		规律:event number 最后一位是1 odd nubmer 最后一位是0
	*/
	int number; 

	printf("请输入一个数:\n");
	scanf("%d", &number);

	if(number & 1)
	{
		printf("your input is odd number\n");
	}
	else
	{
		printf("your input is event number \n");
	}

	return 0;
	
}
