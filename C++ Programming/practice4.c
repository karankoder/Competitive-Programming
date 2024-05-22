#include <stdio.h>
#include <limits.h>

int a[100];
void merge(int l, int r, int mid)
{

    int lt = mid - l + 1;
    int rt = r - mid;
    int L[lt + 1];
    int R[rt + 1];
    for (int i = 0; i < lt; i++)
    {
        L[i] = a[i + l];
    }
    for (int i = 0; i < rt; i++)
    {

        R[i] = a[i + mid + 1];
    }

    L[lt] = INT_MAX;
    R[rt] = INT_MAX;

    int li = 0;
    int ri = 0;

    for (int i = l; i <= r; ++i)
    {
        if (L[li] <= R[ri])
        {
            a[i] = L[li];
            li++;
        }
        else
        {
            a[i] = R[ri];
            ri++;
        }
    }
}
void mergesort(int l, int r)
{
    if (l == r)
        return;

    int mid = (l + r) / 2;
    mergesort(l, mid);
    mergesort(mid + 1, r);
    merge(l, r, mid);
}
int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = 2; j <= n; j *= 2)
    {
        for (int i = 1; i <= n; i += j)
        {

            merge(i, i + j - 1, (2 * i + j - 1) / 2);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
