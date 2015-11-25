#include <stdio.h>

int main()
{
	//补齐算法（对齐算法）；
	//结构体所占用的存储空间，必须是最大类型的倍数
	struct Student
	{
		int age;
		//char *name;
		char flag;
		
	};

	//struct Student st1 = {.name = "花木兰", .age = 18};
	struct Student st1 = {.flag = 'A', .age = 18};
	
	int size = sizeof(st1);
	printf("size is :%d\n", size);
	return 0;
}
