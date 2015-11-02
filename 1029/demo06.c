#include <stdio.h>
int main()
{
	//int result = 3 > 4 + 7;// value is 0
	//printf("%d\n", result);	

	//int a = 5 != 4 + 2 * 7 > 3 == 10;
	//int a = 5 != (4 + (2 * 7)) > 3 == 10;
	//int a = 5 != 18 > 3 == 10; 
	//int a = 5 != 1 == 10; 
	//int a = 1 == 10 
	int a = 5 != 4 + 2 * 7 > 3 == 10; //0
	printf("%d\n", a);

	return 0;
}
