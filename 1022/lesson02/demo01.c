#include <stdio.h>

int main(int argv, char* argc[])
{
	int s, n;
	scanf("%d, %d", &s, &n);
	float v = s / n;
	fprintf(stdout, "v=%f\n", v);
	return 0;
}
