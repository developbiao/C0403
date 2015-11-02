#include <stdio.h>
int main(int argv, char* argc[])
{
	printf("FireStone\n");	
	int a;
	
	//stdin
	//scanf("%d", &a);
	fscanf(stdin, "%d", &a);

	//stdout
	//printf(stdout, "input value is:%d\n", a);
	fprintf(stdout, "input value is:%d\n", a);

	//stderr
	if(a < 0)
	{
		fprintf(stderr, "the value must > 0 \n");
	}

	return 0;
}