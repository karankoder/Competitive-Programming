#include<stdio.h>
int main()
{ 
    int *ptr,a;
    a=19283;
    ptr=&a;
    printf("the address of variable a is %d in decimal and %x in hexadecimal",ptr+1,ptr+1);
    return 0;
}