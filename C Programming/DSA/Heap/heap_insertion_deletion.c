#include<stdio.h>
#include<stdlib.h>
//heap is always a complete binary tree
//index of parent node is floor(i/2), where i is the index of child node
//we are using 1 based indexing
//Height of a binary tree is logn
//time complexity of insertion is logn
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
void insert(int A[],int *n,int a){
    *n=*n+1;
    A[*n]=a;
    int i=*n;
    while(i>1){
        int parent=i/2;
        if(A[parent]<=A[i]){
            swap(&A[parent],&A[i]);
        }
        i=parent;
    }
}

//we can only delete root node from the heap
void delete(int A[],int *n){
    swap(&A[1],&A[*n]);
    *n=*n-1;
    int i=1;
    int l,r;
    while(i<=*n){
        l=2*i;
        r=2*i+1;
        if((A[i]<A[l] || A[i]<A[r] )&&  l<=*n && r<=*n ){
            if(A[l]>=A[r]){
                swap(&A[i],&A[l]);
                i=l;
            }
            else if(A[l]<A[r]){
                swap(&A[i],&A[r]);
                i=r;
            }
        }
        else
        break; 
    }
    if(l<=*n && A[l]>A[i])
    swap(&A[i],&A[l]);

}

int main()
{
    int A[]={0,70,60,40,45,50,39,16,10,9,35};
    int a;
    int n=10;
    scanf("%d",&a);
    insert(A,&n,a);
    // delete(A,&n);
    // delete(A,&n);
    // delete(A,&n);
    // delete(A,&n);
    // delete(A,&n);
    // delete(A,&n);
    // delete(A,&n);
    // delete(A,&n);
    // delete(A,&n);
    // delete(A,&n);
    for(int i=1;i<=10;i++)
    printf("%d ",A[i]);
    printf("%d",n);
    return 0;
}