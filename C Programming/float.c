#include<stdio.h>
#define A 1234
int main()
{   
    const int b=5; 
    float a=1.3;
    printf("%d",b/ (int)a);
    printf("%8.4f ",a);
    return 0; 
}