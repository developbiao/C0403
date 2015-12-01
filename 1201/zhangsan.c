/*
 1.<>表示系统自带的文件，""表示自定义的文件
 2.不允许循环包含，比如a.h包含b.h，b.h又包含a.h
 */

#include "lisi.h"

#include <stdio.h>

int main()
{
    int c = sum(10, 19);
    
    printf("c is %d\n", c);
    
    return 0;
}
