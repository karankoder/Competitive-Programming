#include<stdio.h>
int main()
{
    int a;
    printf("ENTER YOUR MARKS: ");
    scanf("%d",&a);
    switch(a)
    {
        case 50:
        printf("good");
        break;
        case 70:
        printf("very good");
        break;
        case 90:
        printf("excellent.");
        break;
        case 95:
        printf("outstanding");
        break;
        default:
        printf("FAIL");
    }
    return 0;
}