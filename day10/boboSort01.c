#include <stdio.h>
int main()
{
	int a[100], i, j, t, n;
	printf("Pleas Enter Number:\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	//boboSort���Ĳ���
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i; j++)
		{
			if(a[j] < a[j+1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	printf("�����Ľ����\n");
	for(i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
