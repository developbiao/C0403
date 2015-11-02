#include <stdio.h>

int main()
{
	int target;
	printf("Please Enter your want to foor:\n");
	scanf("%d", &target);
	
	switch(target)
	{
		case 1:
		printf("你想到第%d楼\n", target);
		break;

		case 2:
		printf("你想到第%d楼\n", target);
		break;

		case 3:
		printf("你想到第%d楼\n", target);
		break;

		case 4:
		printf("你想到第%d楼\n", target);
		break;

		default:
		printf("您的输入有误\n");
		
	}

	return 0;
}
