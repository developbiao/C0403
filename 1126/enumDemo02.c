#include <stdio.h>

int main()
{
	enum Season
	{
		spring,
		summer,
		autumn,
		winter
	};

	//定义枚举变量
	enum Season s1 = winter;

	printf("current season is %d\n", s1);
	
	return 0;
}
