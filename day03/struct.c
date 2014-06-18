/*
结构体指针变量
*/

#include <stdio.h>
#define BUF_LEN_MAX 3  //定义ubf大小
#define DATA_LEN_MAX 3 //定义data text buf大小
typedef unsigned char unit8_t;
typedef struct
{
	unit8_t head;
	unit8_t len;
	unit8_t add;
	unit8_t data[DATA_LEN_MAX];
	unit8_t chk;
}RF_FRAME;

RF_FRAME txbuf[BUF_LEN_MAX] = {	{0xAA, 6, 0x00, 0x11, 0x11, 0xE3},
			    	{0xAA, 6, 0x01, 0x22, 0x22, 0x17}, 
			    	{0xAA, 6, 0X02, 0x33, 0x33, 0x48} };

void output(RF_FRAME *p_ptr);

int main(void)
{
	RF_FRAME *ptr_tmp;  //定义结构体指针
	
	ptr_tmp = txbuf;
	
	output(ptr_tmp);

	return 0;
}


//output
void output(RF_FRAME *p_ptr)
{
	unit8_t i,j;

	for (i = 0; i < BUF_LEN_MAX; i++)
	{
		printf(" %x", p_ptr[i].head);
		printf(" %x", p_ptr[i].len);
		printf(" %x", p_ptr[i].add);

		for(j = 0; j < DATA_LEN_MAX; j++)
		{
			printf(" %x", p_ptr[i].data[j]);
		}

		printf("%x\n", p_ptr[i].chk);
	}
}



