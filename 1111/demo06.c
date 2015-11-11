#include <stdio.h>

int maxOfArray(int array[], int length);

int main()
{
	int nums[10] = {10, 20, -99, 88, 77, 55, 77, 88, 99, 5};	

	int max = maxOfArray(nums, sizeof(nums) / sizeof(int));

	printf("main number is : %d\n", max);
	return 0;
}


//find array max number

int maxOfArray(int array[], int length)
{
	int max = array[0]; //initlaize max value
	int i;
	for(i=0; i<length; i++)	
	{
		if(array[i] > max)	
		{
			max = array[i];
		}
	}

	return max;

}


//array parames
int arraySize(int array[])
{
	//当数组被当作函数函数传递的时候,把数据当成指针
	//指针的长度默认是8
	int size = sizeof(array);
	
	printf("function inner size is: %d\n", size);
}
