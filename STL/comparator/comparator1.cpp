#include<bits/stdc++.h>
using namespace std;
bool cmpa(pair<int,int>a,pair<int,int>b)
{
    if(a.first!=b.first)
    {
        return a.first<b.first;
    }
    return a.second>b.second;
}
int main()
{ 
    vector<pair<int,int>>v(7);
    for(int i=0;i<7;i++)
    cin>>v[i].first>>v[i].second;
    cout<<endl;
    // for(int i=0;i<7;i++)
    // {
    //     for(int j=i+1;j<7;j++)
    //     {
    //         // if(v[i]>v[j])           //here comes the concept of comparator
    //         if(cmpa(v[i],v[j]))
    //         swap(v[i],v[j]);
    //     }
    // }
    sort(v.begin(),v.end(),cmpa);
    for(auto value:v)
    cout<<value.first<<" "<<value.second<<endl;
    return 0;
}