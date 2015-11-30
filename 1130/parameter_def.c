/*
@Describe:带参数的宏定义
带参数的宏定义函数只相当于文本替换
*/
#include <stdio.h>
//#define sum(v1, v2) v1 + v2 这种写法不严谨
#define squre(num) ((num) * (num))

int main()
{
	//int a = sum(8, 9);
	int a = squre(7);
	//如果不加括号:5 + 5 * 5 + 5 = 30
	int b = squre(5 + 5); 
	
	printf("value a is :%d\n", a);
	printf("value b is :%d\n", b);
	return 0;
}
