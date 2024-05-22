#include<bits/stdc++.h>
using namespace std;

void func(vector<int>&v,vector<int>arr,int i,int n,int sum,vector<int>&ans){
    if(i>=n){
        ans.push_back(sum);
        return;
    }
    arr.push_back(v[i]);
    sum+=v[i];
    func(v,arr,i+1,n,sum,ans);
    arr.pop_back();
    sum-=v[i];
    func(v,arr,i+1,n,sum,ans);
    // time complexity - 2^n
    //space complexity - n
}
int main()
{ 
    vector<int>v={2,3};
    vector<int>arr,ans;
    func(v,arr,0,2,0,ans);
    for(auto i:ans)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}