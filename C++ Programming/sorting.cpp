#include<iostream>
using namespace std;
 
int main()
{ 
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    int a;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
            {
                a=A[i];
                A[i]=A[j];
                A[j]=a;
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<A[i]<<" ";


    return 0;
}
