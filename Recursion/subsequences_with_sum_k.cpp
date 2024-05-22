#include<bits/stdc++.h>
using namespace std;

int func(vector<int>&v,vector<int>arr,int i,int n,int sum,int check){
    if(i>=n){
        if(check==0){
           return 1;
        }
        return 0;
    }
    arr.push_back(v[i]);
    check-=v[i];
    int l=func(v,arr,i+1,n,sum,check);
    arr.pop_back();
    check+=v[i];
    int r=func(v,arr,i+1,n,sum,check);
    return l+r;
    // time complexity - 2^n
    // space complexity - n                   
}
int main()
{ 
    vector<int>v={5,4,7,2};
    vector<int>arr;
    int ans=func(v,arr,0,4,0,16);
    cout<<ans<<endl;
    return 0;
}