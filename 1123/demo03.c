#include <stdio.h>

void change(int *array);

int main()
{
	int data[] = {8, 79, 23, 31, 77, 88};
	//change(data); // 数据一传随间变成指针
	change(&data[2]); //从下标为2的地址开始

	return 0;
}

void change(int *array)
{
	//printf("%d\n", *(array+4));	
	printf("%d\n", array[1]); //31
}
