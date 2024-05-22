// Karan Kumar Das
// 22075041
// CSE(BTech.)

#include<iostream>
using namespace std;
int partition(int A[],int first,int last)
{
    int pi=A[last];
    int i=first-1;
    int j=first;
    for(;j<last;j++)
    {
        if(A[j]>pi)
        {
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[last]);
    return i+1;
}
void quicksort(int A[],int first,int last)
{
    if(first>=last)
    return;
    int pi=partition(A,first,last);
    quicksort(A,first,pi-1);
    quicksort(A,pi+1,last);
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    quicksort(A,0,n-1);
    for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
    return 0;
}