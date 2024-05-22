#include<bits/stdc++.h>
using namespace std;
// benefit of using map is that it will reduce the time complexity to O(1) but here we dont get key in sorted order
int main()
{
    unordered_map<int,string> m;
    m[1]="karan";        // O(1)
    m[5]="abcd";
    m[7]="kolkata";
    m[10]="delhi";
    m[10]="bombay";
    for(auto i:m)
    cout<<i.first<<" "<<i.second<<" ";
   

    // if order doesn't matter then we definitely have to use unordered_map
    //we cant use pairs and other containers in unordered map we only use integer and string

    //multimap
    // in map we have seen that identical keys can't be created
    // in order to store identical keys we can use multimap
    return 0;
}