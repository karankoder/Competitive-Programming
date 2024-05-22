#include<bits/stdc++.h>
using namespace std;
bool predicate(int n){

}
int main()
{ 
    long long n;
    long long lo=0,hi=n;
    while(hi-lo>1){
        long long mid=(lo+hi)/2;
        if(predicate(mid))
        lo=mid;
        else
        hi=mid-1;
    }
    if(predicate(lo))
    cout<<lo;
    else
    cout<<hi;

    return 0;
}