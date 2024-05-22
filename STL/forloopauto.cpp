#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    vector<int> v={5,8,2,24,25};
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    for(auto value : v)     // range based loop func
    cout<<value<<" ";     // it will pass a copy only
    cout<<endl;
    for(int &value: v)
    value++;
    for(int value: v)
    cout<<value<<" ";
    cout<<endl;

    // auto keyword automatically assume the datatype

    // optimised code for using iterator
    for(auto it=v.begin();it!=v.end();it++)
    cout<<(*it)<<" ";
    cout<<endl;



    return 0;
}