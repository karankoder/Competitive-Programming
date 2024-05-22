#include<bits/stdc++.h>
using namespace std;
// given n string output the unique string with their frequencies and also in lexicographical order.
int main()
{
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto i:m)
    cout<<i.first<<" "<<i.second<<" ";
    
    return 0;
}