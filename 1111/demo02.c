#include <stdio.h>

int main()
{
	
	int count = 5;
	//int arr[count] = {1, 3, 5, 7, 9}; //count只能是常理不能是变量初始化
	int arr[count];
	arr[0] = 1;
	arr[1] = 3;
	arr[2] = 4;
	arr[3] = 1111;


	int size = sizeof(arr);
	printf("size is%d\n", size);
	
	/*
	int i;
	for(i=0; i<count; i++)
		printf("%d\n", arr[i]);
	*/

	//错误的写法
	//int args[]
	/*
	只能在定义的时候初始化
	int args[5];
	args = {30, 11, 33 ,14}
	*/

		

	return 0;
}
