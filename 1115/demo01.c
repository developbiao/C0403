#include <stdio.h>

int main()
{
	//字符串,C语言中没有string类型
	//char name[10] = "gongbiao"; 
	char name[10] ={'g', 'o', 'n', 'g', 'b', 'i', 'a', 'o', '\0'};

	//char name[10] = {'a', 'b'};
	//没有\0就只是单纯的字符数组不是字符串
	printf("my name is %s \n ", name);
	return 0;
}
