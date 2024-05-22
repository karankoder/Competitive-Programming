#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,string>p1,pair<int,string>p2)
{
    if(p1.second!=p2.second)
    return p1.second<p2.second;
    return p1.first<p2.first;
}
// map has key and its value and key are sorted in ascending order and also map is non contagious.
int main()
{
    map<int,string> m;
    m[1]="karan";        //key.size*O(logn)
    m[5]="abcd";
    m[100]="kolkata";
    m[100]="abcd";
    m[11]="bombay";              // observe the property of maps
    m[25];                       //if we just declare the key then value of key by default will be a empty string.
    m.insert({20,"pqrs"});
    cout<<m[5]<<endl;

    // for finding any key
    // auto it=m.find(7);            // it gives us the iterator of the given key
    // cout<<(*it).first<<"-"<<(*it).second<<endl;
    // m.erase(5);
    // vector<pair<int,string>>v(m.begin(),m.end());     // map to vector of pairs
    // sort(v.begin(),v.end());
    // for(auto &value:m)
    // cout<<value.first<<"-"<<value.second<<" ";
    

    //if we use map then time complexity of all operations will be O(logn)


    return 0;
}