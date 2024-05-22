#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> v(10,2);
    vector<int> :: iterator it=v.begin();
    for(it=v.begin();it!=v.end();it++)
    cout<<(*it)<<" ";
    // important- it++ gives us next iterator
    // while      it+1 gives us next location

    vector<pair<int,int>> vp={{1,2},{5,7},{8,10},{11,13}};
    vector<pair<int,int>> ::iterator i;
    for(i=vp.begin();i!=vp.end();i++)
    // cout<<(*i).first<<" "<<(*i).second<<"  ";
    cout<<i->first<<" "<<i->second<<"  ";






      
    return 0;
}