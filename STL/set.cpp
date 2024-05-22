#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string st;
        cin>>st;
        s.insert(st);         // O(logn)
    }
    // s.erase("abcd");          // O(logn)
    // cout<<endl;

    // auto it=s.find("karan");
    // cout<<*it<<"hello"<<endl;

    for(auto value:s)
    cout<<value<<endl;
    cout<<endl;

    unordered_set<string>us;   // similar to unordered maps
    us.insert("abdsf");
    us.insert("abddsf");        //O(1)
    us.insert("abdssnsf");      //O(1)
    us.insert("abdsdjhsdhskdnskdjskdjsf");
    us.insert("abdsfhskfhskhfshfssf");
    for(auto value:us)
    cout<<value<<endl;
    cout<<endl;

    multiset<string>ms;
    ms.insert("karan");
    ms.insert("karan");        //O(logn)
    ms.insert("karan");        //O(logn)
    ms.insert("karan");
    ms.insert("amit");
    for(auto value:ms)
    cout<<value<<endl;
    auto it = ms.find("karan");
    ms.erase(it);         // it will erase only first value

    ms.erase("karan");    // it will erase all values








    return 0;
}