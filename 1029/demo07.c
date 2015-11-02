#include <stdio.h>

int main()
{
	printf("please input your socre: \n");
	
	int score;

	scanf("%d", &score);

	//判断等级(性能最高)
	if(score >=90 && score <= 100)//[90, 100]
	{
		printf("A\n");
	}
	else if(score >= 80) //[80, 89]
	{
		printf("B\n");

	}
	else if(score >= 70)//[70, 79]
	{
		printf("C\n");
	}
	else if(score >= 60) //[60, 69]
	{
		printf("D\n");
	}
	else
	{
		printf("E\n"); //[lt, 59]
	}

	return 0;
}
