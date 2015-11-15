#include <stdio.h>

int main(int argv, char* argc[])
{
	char names[3][10] = {"Jack", "Rose", "Peter"};
	
	//等同于
	char names2[3][10] =
	{
		{'J', 'a', 'c', 'k', '\0'},
		{'R', 'o', 's', 'e', '\0'},
		{'P', 'e', 't', 'e', 'r', '\0'}
	};

	int i;
	for(i=0; i<3; i++)
		printf("Student: %s\t", names2[i]);
	printf("ok\n");
	return 0;
}
