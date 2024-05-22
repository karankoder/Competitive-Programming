#include <stdio.h>
int main()
{
    int a;
    printf("enter the number of rows : ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("\n");
        for (int j = a - i-1; j > 0; j--)
        {
            printf("   ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf(" * ");
        }
    }
    return 0;
}