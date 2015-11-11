#include <stdio.h>

/*
	验证int数组存储细节的地址
*/
int main()
{
	int nums[] = {1, 8, 7, 9, 10};
	int i;

	printf("nums first address is %p\n", nums);

	for(i=0; i<5; i++)
		printf("nums[%d] address is %p \n", i, &nums[i]);

	return 0;
}
