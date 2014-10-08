#include <stdio.h>
struct student
{
	char name[21];
	int score;
};//这里面创建了一个结构体用来存储姓名和分数
int main()
{
	struct student a[100], t;
	int i, j, n;
	printf("Pleas Enter Number:\n");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%s %d",&a[i].name,&a[i].score );
	}

	//按照分数排序
	for(i = 0; i < n -1; i++)
	{
		for(j = 0; j < n - i; j++)
		{
			if(a[j].score < a[j+1].score)	
			{
				t = a[j];
				a[j] = t;	
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	//遍列数据
	for(i = 0; i < n; i++)
	{
		printf("%s>>score:%d\n", a[i].name, a[i].score);		
	}
	getchar(); getchar();
	
	return 0;
}
