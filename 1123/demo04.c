#include <stdio.h>

/*
定义字符串的2种方式
1>利用数组
char name[] = "itcast";
特点:字符串里面的字符是可以修改
*使用场合：字符串的内容需要经常修改

2>利用指针
char *name = "itcast"
特点：字符串其实是常量字符，里面的字符是不能修改的
使用场景:字符串内容不需要修改，而这个字符经常使用
*name2 = 'T'; //
*/
int main()
{
	char name[] = "it";
	// "it" == 'i' + 't' + '\0'
	//指针变量name指向了字符的首字符
	
	//字符串放在常量区
	char *name2 = "it";
	char *name3 = "it";

	char *name4 = "bbbb"; //不经常修改的，字符串常量区

	//*name2 = 'H'; //error

	printf("%p\t%p\t", name2, name3);	

	//printf("%c\n", *name2);
	printf("%s\n", name2);
	printf("%s\n", name4);
	return 0;
}
