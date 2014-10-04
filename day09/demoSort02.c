#include <stdio.h>
int main()
{
	int book[1001], i, j, n, t;
	for(i = 0; i < 1001; i++)
	{
		book[i] = 0;  //初始化1000个数组中的值为0;
	}
	printf("Pleas Enter Count:\n");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &t);
		book[t]++;
		
	}
	printf("Out put is ...\n");
	for(i = 1000; i >= 0; i--)
	{
		for(j = 0; j < book[i]; j++)
		{
			printf("%d ", i);
		}
	}
	getchar();getchar();
	return 0;
}
