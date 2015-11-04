#include <stdio.h>

/*
@Describe:进制
%d\%i  二进制形式输出整数
%c 	输出字符
%p	输出地址
%f	输出小数
%o	八进制输出
%x	十六进制输出整数
*/
int main()
{
	int number = 11; //十进制 默认
	int number2 = 0b111; //二进制(ob或oB开头)
	int number3 = 014; //八进制(0开头)
	int number4 = 0xf; //十六进制(0x开头)

	int var = 15;
	
	printf("%u\n", number2);
	printf("%u\n", number3);
	printf("%u\n", number4);
	printf("%i输出整数:\n", var);
	printf("%o输出八进制:\n", var);
	printf("%x输出十六进制:\n", var);

	
	return 0;
}
