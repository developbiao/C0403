#include <stdio.h>
int main(void)
{
	//通过指针访问二维数组
	int arr[3][4] = {
				{1, 2, 3, 4},
				{5, 6, 7, 8},
				{9, 10, 11, 12}
			};

	printf("numberis :%d \n", *(arr[2] + 2));
	printf("第二种方法:%d \n", *(*(arr + 1) + 2));

	return 0;
}

//通过指针访问数组的两种方法
//*(grid[i]+j);
//*(*(grid+i) + j);
