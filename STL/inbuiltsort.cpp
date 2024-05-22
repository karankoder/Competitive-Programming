#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    sort(A,A+n);
    for(auto value:A)
    cout<<value<<" ";
    cout<<endl;
    for(int i=n-1;i>=0;i--)
    cout<<A[i]<<" ";
    // pass address of starting point and address of ending point + 1
    //for vector we can pass a.begin(),a.end()
    return 0;
}
