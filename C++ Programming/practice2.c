#include<stdio.h>
int fact(int n)
{
    if(n>1)
    return n*fact(n-1);
    else
    return 1;
}
int main()
{ 
    int a,answ;
    printf("Enter the number :");
    scanf("%d",&a);
    answ=fact(a);
    printf("Factorial of %d is= %d",a,answ);
    return 0;
}