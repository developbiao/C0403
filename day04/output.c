#include <stdio.h>
void output(void);

int main(void)
{

	void (*pt_output)(); //定义了一个函数指针
	pt_output = output;  //指向了output函数

	(*pt_output)(); //调用函数指针

	return 0;

}

void output()
{
	printf("指向函数的指针准备就绪！\n");
}

/*
-----------------------------------------
指向函数的指针
格式：类型(*login)();
指向：login = funciton;
引用：(*login)()
----------------------------------------
*/
