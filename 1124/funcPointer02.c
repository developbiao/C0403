#include <stdio.h>
/*
@Describe:指向函数的指针
*/

int sum(int a, int b);

int main()
{
	
	int (*func_p)(int, int); //定义一个指针
	func_p = sum; //指向函数
	int result;
	
	result = (*func_p)(3, 5);


	printf("value is %d\n", result);
	
	
	return 0;
}

int sum(int a, int b)
{
	return a + b;
}
