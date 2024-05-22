#include<stdio.h>
int main()
{ 
    char a,b,c;
    printf("enter the character in a:");
    scanf("%c",&a);
    getchar();
    printf("enter the character in b:");
    scanf("%c",&b);
    getchar();
    printf("enter the character in c:");
    scanf("%c",&c);
    printf("the character in a:%c",a);               // here space is taken as an input, that's getchar
    printf("the character in b:%c",b);
    printf("the character in c:%c",c);
    return 0;
}