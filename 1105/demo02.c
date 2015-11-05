#include <stdio.h>

int main()
{
	int number = 9;
	int number2 = 18;
	//9 * 2的n次方

	//左移运算,效率高
	//注意事项,左移运算,舍弃最高位可以导致符号丢失,一般只用于正数


	//右移与左移相反,一般有符号来补齐
	printf("number is:%d \n", number<<2);
	printf("number is:%d \n", number2>>2);

	return 0;
	

}
