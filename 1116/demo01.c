#include <stdio.h>

int main()
{
	//格式:变量类型 *变量名
	//定义一个指针变量p
	//指针变量只能存储地址8bit

	//指针变量p前面的int:指针变量p只能指向int类型的数据
	int *p;
	int var = 33;
	
	//指针变量p指向了变量a
	p = &var;

	//改变p指向的地址里面的值
	*p = 77;

	printf("%d\n", *p);

	return 0;

}

