#include <stdio.h>
#include "min.h"
#include "max.h"

int main(void)
{
	int a1 = 33;
	int a2 = 21;
	int maxnum = max(a1, a2);
	int minnum = min(a1, a2);
	printf("the max value is: %d\n the min value is: %d\n",  maxnum, minnum);
}
