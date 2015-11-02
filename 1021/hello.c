#include <stdio.h>
#include "max.h"
#include "min.h"
int main(void)
{
	int a = 3;
	int b = 7;
	int maxnum = max(a, b);
	int minnum = min(a, b);
	printf("max value is: %d\n min value is: %d\n", maxnum, minnum);
	printf("Hi Girl~\n");

	return 0;
}
