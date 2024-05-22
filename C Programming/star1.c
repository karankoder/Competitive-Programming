#include <stdio.h>
int main()
{
    int a;
    printf("enter the number of rows: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("\n");
        for (int j = 0; j <= i; j++)
        {
            printf(" * ");
        }
    }
    return 0;
}