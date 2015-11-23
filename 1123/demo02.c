#include <stdio.h>

/*
1>数组名[下标] args[i]
2>指针变量名[下标]p[i]
3>指针变量名[下标]p[i]

2.指针变量的+1究竟是加多少,取决于指针的类型
*/
int main()
{
	int arr[] = {10, 9, 8, 11, 77};
	int *p = arr;

	int i;
	for(i=0; i<5; i++)
	{
		printf("%d\t", *(p+i));
	}

	printf("%d\n", *p);
	return 0;
}
