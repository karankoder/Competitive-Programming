#include<bits/stdc++.h>
using namespace std;

void func(int index,vector<int>&nums,vector<vector<int>>&ans){
    if(index==nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        func(index+1,nums,ans);
        swap(nums[index],nums[i]);
    }
    // time complexity - (n!)*n
    //space complexity - n(recursion depth)
}
int main()
{ 
    vector<int>nums={1,2,4,5};
    vector<vector<int>>ans;
    func(0,nums,ans);
    for(auto i:ans){
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }

    return 0;
}