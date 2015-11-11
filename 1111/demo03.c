#include <stdio.h>

int main()
{
	//char chars[] = {'A', 'B', 'C', 'D'};
	//int lenght = sizeof(chars);
	
	int nums[] = {1, 3, 8, 9, 10};
	int length = sizeof(nums) / sizeof(int);
	int i;
	for(i=0; i<length; i++)
		printf("%d \t", nums[i]);
	printf("\n");

	return 0;
}
