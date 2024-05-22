#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < i; j++)
        {
            printf("%d ", (n - j));
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++)
        {
            printf("%d ", (n - i));
        }
        for (int j = i; j > 0; j--)
        {
            printf("%d ", (n - j + 1));
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("\n");
        for (int j = n; j >= 3 + i; j--)
        {
            printf("%d ", j);
        }
        for (int k = 0; k < 2 * (2 + i) - 1; k++)
        {
            printf("%d ", 2 + i);
        }
        for (int j = 3 + i; j <= n; j++)
        {
            printf("%d ", j);
        }
    }
    return 0;
}