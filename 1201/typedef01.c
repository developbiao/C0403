/*
@Describe:typedef的使用
1.作用：给已存在的类型起一个新的名称

2.使用场合
1> 基本数据类型
2> 指针
3> 结构体
4> 枚举
5> 指向函数的指针
*/
#include <stdio.h>

typedef char * string; //给 char * 起新名 string
int main()
{
	string name = "Jake";
	string hobb = "PingPang";

	printf("name: %s\t hobb :%s\n", name, hobb);
	return 0;
}
