/*
@Describe:编写一个函数char_contains(char str[], char c)
如果字符串str 中包含字符c则返回数值1,否则返回数值0
*/
#include <stdio.h>
#include <string.h>

int char_contains(char str[], char c);
int main()
{
	int flag = char_contains("hello", 'b');
	printf("flag value is %d\n", flag);
	
	return 0;
}


/*
int char_contains(char str[], char c)
{
	int i;
	for(i=0; i<strlen(str); i++)
	{
		if(c == str[i])
			return 1;
	}

	return 0;
}
*/

int char_contains(char str[], char c)
{
	int i = 0;
	//遍历整个字符数组
	while(str[i] != '\0')	
	{
		if(c == str[i])	
			return 1;
		i++;
	}
	return 0;
}
	
