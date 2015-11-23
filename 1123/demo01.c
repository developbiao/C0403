#include <stdio.h>

int main()
{
	int args[5] = {10, 9, 8, 67, 99};
	int *p;
	//指针变量p指向了数组的首元素
	p = &args[0];

	printf("address is %p\n", p);
	printf("address is %p\n", p + 1);
	printf("address is %p\n", p + 2);
	printf("address is %p\n", p + 3);
	printf("address is %p\n", p + 4);

	printf("value is %d\n", *p);
	return 0;
}
