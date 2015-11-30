/*
@Desceribe:条件编译只有写了#if,在最后必须加上#endif
*/
#include <stdio.h>

#define PAGE 10
int main()
{
	#if defined(PAGE)	
		printf("哈哈定义了PGAGE\n");
	#else
		printf("没有定义PAGE\n");
	#endif

	printf("程序执行完成!\n");
		
	
	return 0;
}
