#include <stdio.h>

#define LIMIT 10 
int main()
{
	#if (LIMIT == 20)
		printf("MYSQL LIMIT IS %d\n", LIMIT);
	#elif (LIMIT == 10)
		printf("SQLSEVER LIMIT IS %d\n", LIMIT); //只编译这句
	#elif (LIMIT == 5)
		printf("POSTSQL LIMIT IS %d\n", LIMIT);
	#else
		printf("OTHER SQL DATABASE \n");
	#endif

	#if !defined(POST)
		printf(" not difend post\n");
	#endif

	printf("程序运行完成\n");

	return 0;
}
