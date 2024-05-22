#include<bits/stdc++.h>
using namespace std;
 // count of -8 in the given array
int main()
{ 
    int min=INT_MAX;
    int a[]={1,2,2,4,5,7,6,8,2,-8,-8,-2,-9,-74,-41,-8,-8};
    int hash[1000]={0};
    for(int i=0;i<17;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    
    for(int i=0;i<17;i++)
    {a[i]=a[i]+abs(min);}
    
    for(int i=0;i<17;i++)
    {
        int t=a[i];
        hash[t]++;
        
    }
    cout<<hash[abs(min)-8];    
    return 0;
}