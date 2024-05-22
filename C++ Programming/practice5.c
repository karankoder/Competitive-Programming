#include<stdio.h>
void reverse(int *ptr,int n){
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=ptr[i];
        ptr[i]=ptr[n-i-1];
        ptr[n-i-1]=temp;
    }

}
int main()
{ 
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int *ptr[n];
    for(int i=0;i<n;i++)
    ptr[i]=&a[i];
    for(int i=0;i<n;i++)
    printf(" %d ",ptr[i]);
    reverse(ptr,n);
    printf("\n");
    for(int i=0;i<n;i++)
    printf(" %d ",ptr[i]);



    return 0;
}
