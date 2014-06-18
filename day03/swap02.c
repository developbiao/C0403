#include <stdio.h>
//typedef unsigned char int;
//用指针来交换值
//extern
extern void swapdata(int *p_data_x, int *p_data_y);

int main(void)
{
	int x, y;
	int *p_x, *p_y;
	
	printf("请输入x, y:");
	scanf("%d,%d", &x, &y);

	printf("交换数据前: x= %d, y= %d \n", x, y);

	p_x = &x;
	p_y = &y;


	swapdata(p_x, p_y);
	printf("交换后：x = %d, y = %d \n", x, y);

	return 0;
}

void swapdata(int *p_dat_x, int *p_dat_y)
{
	int temp;
	temp = *p_dat_x;
	*p_dat_x = *p_dat_y;
	*p_dat_y = temp;
}

