#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    long long int n;
    cin>>n;
    long long int lo=1;
    long long int hi=n;
    while(hi>=lo){
        long long int mid=(lo+hi)/2;
        if(mid*mid==n){
        cout<<mid;
        break;
        }
        else if(mid*mid>n)
        hi=mid-1;
        else
        lo=mid+1;
    }
    return 0;
}