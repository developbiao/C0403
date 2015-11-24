#include <stdio.h>

int a = 10;
int b, c = 20;

//函数的形参也是局部变量
int sum(int v1, int v2)
{
	return v1 + v2;	
}
int main()
{
	int e = 10;
	{
		{
			int f = 30;
		}
	}
	
	return 0;
}
