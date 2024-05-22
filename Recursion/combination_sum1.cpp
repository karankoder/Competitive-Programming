/*Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
frequency
 of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input. */

#include<bits/stdc++.h>
using namespace std;

void func(int ind,int target,vector<int>v,vector<vector<int>>&ans,vector<int>ds){
    if(ind==v.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if(v[ind]<=target){
        ds.push_back(v[ind]);
        func(ind,target-v[ind],v,ans,ds);
        ds.pop_back();
    }
    func(ind+1,target,v,ans,ds);
}
int main()
{ 
    vector<int>v={5,8,7,8};
    vector<int>arr;
    vector<vector<int>>ans;
    func(0,20,v,ans,arr);
    // cout<<ans.size()<<endl;
    for(auto i:ans){
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }

    return 0;
}

 