#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    queue<string> q;
    q.push("kaka");
    q.push("sjdhws");
    q.push("ffjs");
    q.push("ffjsjds");
    q.push("ffshbd");
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();

    }
    

    return 0;
}