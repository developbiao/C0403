#include <stdio.h>
//typedef unsigned char int;
extern void swapdata(int dat_x, int dat_y);

int main(void)
{
	int x, y;
	
	printf("请输入x, y:");
	scanf("%d,%d", &x, &y);

	printf("交换数据前: x= %d, y= %d \n", x, y);

	swapdata(x, y);
	printf("交换后：x = %d, y = %d \n", x, y);

	return 0;
}

void swapdata(int dat_x, int dat_y)
{
	int temp;

	temp = dat_y;
	dat_y = dat_x;
	dat_x = temp; 
}
