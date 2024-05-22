/*Given an integer array nums that may contain duplicates, return all possible 
 subsets
(the power set).
 The solution set must not contain duplicate subsets. Return the solution in any order.
 */

#include<bits/stdc++.h>
using namespace std;

void func(vector<int>&v,vector<int>arr,int i,int n,vector<vector<int>>&ans){
    ans.push_back(arr);
    for(int j=i;j<n;j++){
        if(j!=i and v[j]==v[j-1]) continue;
        arr.push_back(v[j]);
        func(v,arr,i+1,n,ans);;
        arr.pop_back();
    }
    return;
    // time complexity - (2^n)*n
    
}
int main()
{ 
    vector<int>v={1,1,2,2};
    vector<int>arr;
    vector<vector<int>>ans;
    func(v,arr,0,4,ans);
    for(auto i:ans){
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}
