#include <stdio.h>

/*
@Describe:不使用第三方变量交换两个数的值
*/
int main()
{
	int a = 10;
	int b = 11;

	//方法一
	/*
	a = b - a;
	b = b - a;
	a = b + a;
	*/

	//方法二位运算

	
	a = a ^ b; //10 ^ 11
	b = a ^ b; //10 ^ 11 ^ 11  -> b = 10
	a = a ^ b; //10 ^ 11 ^ 10  -> a = 11
	

	printf("value a is :%d\n", a);
	printf("value b is :%d\n", b);

	return 0;
}
