#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    vector<int> v;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int min=*min_element(v.begin(),v.end());
    cout<<min<<endl;
    int max=*max_element(v.begin(),v.end());
    cout<<max<<endl;                                     //all have time complexity O(n)
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int ct=count(v.begin(),v.end(),5);
    cout<<ct<<endl;
    auto it=find(v.begin(),v.end(),5);
    cout<<*it<<endl;
    reverse(v.begin(),v.end());
    for(auto value: v)
    cout<<value<<" ";



    return 0;
}