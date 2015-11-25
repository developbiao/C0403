#include <stdio.h>

/*
@Describe:测试定义结构体
*/
int main()
{
	/*
	//1.定义匿名结构体
	struct
	{
		char* name;
		int age;
		double height;
		double weight;
	} p1 = {"rose", 172.5, 75};

	//p1 = {"rose", 172.5, 75}; //只能在定义的时候这样初始化
	p1.name = "rose";
	p1.height = 172.5;
	p1.weight = 75;
	*/


	//第二种定义的方法 
	struct Person //定义结构体类型
	{
		char *name;
		int age;
		double height;
		double weight;
	};


	struct Person p1 = {"Jack", 17, 75};	 //定义结构体变量并初始化
	





	
	return 0;
}
