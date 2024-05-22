// Karan Kumar Das
// 22075041
// CSE(BTech.)

#include<iostream>
using namespace std;
void merge(int A[],int l,int mid,int r){
    int an=mid-l+1;
    int bn= r-mid;
    int a[an],b[bn];
    for(int i=0;i<an;i++)
    a[i]=A[l+i];
    for(int i=0;i<bn;i++)
    b[i]=A[mid+1+i];
    int i=0,j=0,k=l;
    while(i<an && j<bn)
    {
        if(a[i]>b[j])
        A[k++]=a[i++];
        else
        A[k++]=b[j++];
    }
    while(i<an)
    A[k++]=a[i++];
    while(j<bn)
    A[k++]=b[j++];
}
void mergesort(int A[],int l, int r ){
    if(l>=r)
    return;
    int mid=(l+r)/2;
    mergesort(A,l,mid);
    mergesort(A,mid+1,r);
    merge(A,l,mid,r);
}
int main()
{ 
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    mergesort(A,0,n-1);
    for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
    return 0;
}