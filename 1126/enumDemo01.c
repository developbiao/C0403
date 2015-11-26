#include <stdio.h>
/*
@Describe:枚举类型enum
枚举默认的类型就是int
*/
int main()
{
	//定义枚举类型
	enum Sex
	{
		Man = 10,
		Woman,
		Unkonw
	};

	
	//定义枚举变量

	//enum Sex se = Unkonw;
	enum Sex se = Woman;

	printf("%d\n", se);


	
	return 0;
	
	
}

