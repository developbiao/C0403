#include <stdio.h>

/*
1,说出下面程序的输出结构
int i = 67 + '4'; // 67 + 52 = 119 
char c = 'c' + 10; //m

2.写一个函数,将小写字母转为大字母

*/

char upperCase(char c);

int main()
{
	/*
	int i = 67 + '4'; // 67 + 52 = 119 
	char c = 'c' + 10; //m

	printf("i is : %d, c is:%c\n", i, c);
	*/
	char c;

	scanf("%c", &c);	
	c = upperCase(c);

	printf("%c\n", c);
	
	return 0;
}


char upperCase(char c)
{
	//如果是小写字母就转成大写

	if(c >='a' && c <= 'z')
	{
		 c -= 32;	
	}

	return c;

}
