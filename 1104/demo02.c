#include <stdio.h>

/*
@Describe:打印int的二进制数在内存中占位情况
@Author:GongBiao
*/

int main(int argv, char* argc[])
{
	//函数声明
	//void putBinary(int n);
	void putBingary(int); //声明参数可以省略
	putBinary(1993);
	
	return 0;

}

//输出整数的二进制形式
void putBinary(int n)
{
	int bits = sizeof(n) * 8;
	while(bits-->0)
	{
		printf("%d", n>>bits&1);
		if(bits%4==0)
			printf(" ");
	}
	printf("\n");
}
