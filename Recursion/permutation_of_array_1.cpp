#include<bits/stdc++.h>
using namespace std;

void func(vector<int>&v,vector<int>&arr,int n,vector<vector<int>>&ans,vector<int>&hs){
    if(arr.size()==n){
        ans.push_back(arr);
        return;
    }
    for(int i=0;i<n;i++){
        if(hs[i]==0){
            hs[i]++;
            arr.push_back(v[i]);
            func(v,arr,n,ans,hs);
            hs[i]=0;
            arr.pop_back();
        }
    }
    // time complexity - (n!)*n
    //space complexity - n(recursion depth or auxillary space) + n(extra for map)
}
int main()
{ 
    vector<int>v={1,2,4,5,3,6,7,8};
    vector<vector<int>>ans;
    vector<int>arr;
    vector<int>hs(10,0);
    // for(int i=0;i<3;i++){
    //     hs[v[i]]++;
    // }
    func(v,arr,8,ans,hs);
    cout<<ans.size()<<endl;
    for(auto i:ans){
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }

    return 0;
}