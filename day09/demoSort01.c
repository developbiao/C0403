#include <stdio.h>
int main()
{
	int a[11], i, j, t;
	for(i = 0; i <= 10; i++)
	{
		a[i] = 0; //初始化为0
	}
	for(i = 1; i <= 5; i++)
	{
		scanf("%d", &t); //把读到数到变量t中
		a[t]++; //进行计数
	}
	for(i = 10; i >= 0; i--)
	{
		for(j=1; j <= a[i]; j++)
		{
			printf("%d  ",i);
		}
	}

	//system("pause");
	getchar();getchar();
	//这里的getchar();用来暂停程序，以便查看程序输出的内容
	//也可以用system("pause"); 等代替
	return 0;
}
