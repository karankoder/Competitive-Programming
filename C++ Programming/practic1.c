#include<stdio.h>

int func(int a)
{
   
    if(a!=0)
    return a+func(a-1);
    else{
        return a;

    }
}
int main()
{ 
    int n,answ;
    printf("Enter the number : ");
    scanf("%d",&n);
    answ=func(n);
    printf("Sum of first %d natural numbers = %d",n,answ);
    
    return 0;
}