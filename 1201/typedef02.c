#include <stdio.h>

int main()
{
	//测试typedef的使用域
	typedef int Integer;

	Integer num1 = 22;
	Integer num2 = 33;
	

	printf("%d \t %d\n", num1, num2);

	//test01();
	return 0;
}

void test01()
{
	//Integer var = 99;	//报错
	//printf("var is %d\n", var);
	
}
