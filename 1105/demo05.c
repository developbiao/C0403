#include <stdio.h>
/*
@Describe:写一个函数,输出整数在内存中的二进制形式
@Date:2015/11/05
*/

void printBinary(int nubmer);

int main()
{
	/*
		0000 0000 0000 0000 0000 0000 0000 0000
		0000 0000 0000 0000 0000 0000 0000 1111

		9:
		0000 0000 0000 0000 0000 0000 0000 1001
		-10:
		1111 1111 1111 1111 1111 1111 1111 0110

	*/
	int number;
	printf("Please Input Number to Binary:\n");
	scanf("%d", &number);

	printBinary(number);
	
	return 0;
}



//打印二进制数

void printBinary(int number)
{
	//记录要行动的位数
	int move = (sizeof(number) << 3) - 1;	 //32 - 1
	
	//只有没有移动完
	while(move >= 0)
	{
		//先挪位,再&1取出对应位的值
		int tmp  = (number >> move) & 1;
		printf("%d", tmp);		

		//每输入4位,就输出一个空格
		if((move) % 4 == 0)
		  printf(" ");

		move--;
	}
	
	printf("\n");
}
