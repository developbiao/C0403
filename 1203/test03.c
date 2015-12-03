#include <stdio.h>

typedef char * String;
int main()
{
	String s1, s2;
	
	s1 = "jack";
	s2 = "Rose";

	printf("%s Love %s\n", s1, s2);
	
	return 0;
}
