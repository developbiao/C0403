#include <stdio.h>
int main()
{
	int a[11], i, j, t;
	for(i = 0; i <= 10; i++)
	{
		a[i] = 0; //��ʼ��Ϊ0
	}
	for(i = 1; i <= 5; i++)
	{
		scanf("%d", &t); //�Ѷ�����������t��
		a[t]++; //���м���
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
	//�����getchar();������ͣ�����Ա�鿴�������������
	//Ҳ������system("pause"); �ȴ���
	return 0;
}
