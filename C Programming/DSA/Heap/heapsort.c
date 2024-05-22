#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int max(int a,int b){
    if(a>=b)
    return a;
    return b;
}

void heapify(int A[],int n,int i){
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    if (l <= n && A[l] > A[largest])
    largest = l;
    if (r <= n && A[r] > A[largest])
    largest = r;
    if(largest!=i){
        swap(&A[largest],&A[i]);
        heapify(A,n,largest);
    }
}

void heapsort(int A[],int n){
    for(int i=n/2;i>=1;i--)
    heapify(A,n,i);
    for(int i=n;i>=2;i--){
        swap(&A[1],&A[i]);
        heapify(A,i-1,1);
    }
}
//we can only delete root node from the heap
int main()
{
    int A[]={0,70,60,40,45,50,39,16,10,9,35};
    int a;
    int n=10;
    heapsort(A,n);
    for(int i=1;i<=10;i++)
    printf("%d ",A[i]);
    // printf("%d",n);
    return 0;
}