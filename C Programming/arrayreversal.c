#include <stdio.h>
int main()
{
    int a;
    printf("enter the number of elements : ");
    scanf("%d", &a);
    int list[a], list1[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &list[i]);
    }
    printf("original array : \n");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", list[i]);
    }
    printf("array after reversal is : ");
    for (int i = 0; i < a; i++)
    {
        list1[i] = list[a - i - 1];
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", list1[i]);
    }
    return 0;
}