#include <stdio.h>

int main()
{
/*
提示用户输入一个时间的秒数,比如500秒就输入500,然后对应的分钟和秒,
比如500s就是8分钟20秒
*/

//1.提示用户输入时间
printf("plase input time(second): \n");

//2.接收用户输入的时间
int time;
scanf("%d", &time);

//3.转换成对应分钟和秒
int minute = time / 60; //分钟
int second = time % 60; //秒

printf("%d秒 = %d分钟%d秒\n", time, minute, second);

return 0;

}
