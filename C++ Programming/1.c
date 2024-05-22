#include<stdio.h>

int func(int n)
{
    if(n==18)
    {
        printf("HELLO NOOB\n");
        return -1;
    }

    else printf("ENGINEER\n");
}
int main()
{ 
    int a=func(18);
    printf("%d",a);
    
    return 0;
}