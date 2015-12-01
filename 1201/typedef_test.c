#include <stdio.h>


//typedef
typedef char * string;

//宏定义只相当于文本替换
#define string2 char *

#define Integer int

int main()
{
	//s1, s2 是char * 指针
	string s1, s2;
	s1 = "jack";
	s2 = "rose";

	Integer love = 100;

	//s3 是char *指针， s4是 char
	string2 s3, s4;	 //string2 char *s3, s4.  s4 是char类型

	printf("%s\tlove%s\n", s1, s2);
	printf("love is:%d\n",love);
	

	return 0;
}

