/*
@Describe:宏定义
1.所有的预处理指令都是以#开头
2.预处理指令分3种
1 > 宏定义
2 > 条件编译
3 > 文件包含
3.预处理指令在代码翻译成0和1之前执行
4.预处理的位置是随便写的
5.预处理指令的作用域:从编写指令的那一行开始，一直到文件结尾，可以用#undef取消宏定义的作用

6.宏名一般是大写或者是以k开头，变量名一般用小写
*/
#include <stdio.h>

#define COUNT 4

int main()
{
	int data[COUNT] = {1, 3, 8, 9};

	int i;
	for(i=0; i<COUNT; i++)
	{

		printf("%d\t", data[i]);
	}
	printf("\n");

	return 0;
		
}
