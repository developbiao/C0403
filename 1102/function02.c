#include <stdio.h>

test1() //这样也可以被调用
{
	printf("hhaahhaah\n");
}

test2()
{
	return 7;
}

void test3()
{
	printf("hello moto\n");
}

int main()
{
	//test1();
	printf("%d\n", test2());
	test3();
		
	return 0;	
}
