#include<bits/stdc++.h>
using namespace std;
// 1 1.1 1.2 1.3 1.4 1.5 1.6 1.7 1.8 1.9 2.0 
int  main()
{ 
    double n;
    cin>>n;
    double lo=1;
    double hi=n;
    while(hi-lo>0.0000000001){
        double mid=(lo+hi)/2;
        if(mid*mid<n)
        lo=mid;
        else
        hi= mid;
    }
    cout<<hi;


    return 0;
}