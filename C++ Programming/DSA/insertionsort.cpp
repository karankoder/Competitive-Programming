#include<iostream>
using namespace std;
 
int main()
{ 
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    for(int i=1;i<n;i++)
    {
        int curr=A[i];
        int j=i-1;
        while(j>=0 && A[j]<curr)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=curr;
    }
    for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
    return 0;
}