#include <stdio.h>

//#define Integer int

//typedef int Integer;

//typedef unsigned long int MyInt;

#define String2 char *

typedef char * String;

int main()
{
    /*
    int a,b;
    int a;
    int b;
    */
    
    //s1、s2是char *指针
    String s1, s2;
    /*
     String s1;
     String s2;
     */
    s1 = "jack";
    s2 = "rose";
    
    // s3才是char *指针，s4只是char
    String2 s3, s4;
    /*
    char *s3, s4;
    char *s3;
    char s4;
    */
    //String2 s3 = "jake";
    
    /*
    String s1;
    String s2;
    */
    
    
    
    
    //Integer i = 10;
    
    return 0;
}