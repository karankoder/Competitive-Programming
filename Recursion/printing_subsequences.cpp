#include<bits/stdc++.h>
using namespace std;

void func(vector<int>&v,vector<int>arr,int i,int n){
    if(i>=n){
        for(auto i:arr)
        cout<<i<<" ";
        cout<<endl;
        return;
    }
    arr.push_back(v[i]);
    func(v,arr,i+1,n);
    arr.pop_back();
    func(v,arr,i+1,n);
    // time complexity - 2^n
    //space complexity - n
}
int main()
{ 
    vector<int>v={5,8,7,8};
    vector<int>arr;
    func(v,arr,0,4);
    return 0;
}