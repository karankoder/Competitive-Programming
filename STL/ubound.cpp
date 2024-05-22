#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    vector<int>v;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    //time complexity O(logn)
    auto it=lower_bound(v.begin(),v.end(),8);       //if present then return same element if not then next element
    auto it1=upper_bound(v.begin(),v.end(),8);      //if present then return next element if not then next element
    cout<<(*it)<<" "<<(*it1);

    //for sets and map use auto it=s.lower_bound(8);

    return 0;
}