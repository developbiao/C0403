#include <stdio.h>

int main()
{
	//指向指针的指针
	int a = 10;
	
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	
	/*
		*p1 == a 
		**p2 == *p = a
	*/

	printf("value is %d\n", ****p4);

	return 0;
}
