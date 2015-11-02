#include <stdio.h>

void printLine(); //函数声明
void printLine(); //函数声明
void printLine(); //函数声明
void printLine(); //函数可以多次声明

int main()
{
	void printLine(); //也可以在调用前声明
	printLine();
	return 0;
}

void printLine()
{
	printf("Love Love Store!\n");
}
