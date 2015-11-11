#include <stdio.h>

int main()
{
	//数组的地址,数组名的地址就是数组的首地址

	char chars[] = {'A', 'B', 'C', 'D', 'E'};
	
	printf("firsit address is %p\n", chars);

	int i;
	for(i=0; i<5; i++)
	{
		printf("chars[%d] address is: %p \n", i, &chars[i]);
	}
	
	return 0;
}
