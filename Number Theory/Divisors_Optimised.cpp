#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    const int a=1e5+10;
    vector<int>divisor[a];
    for(int i=2;i<a;i++){
        for(int j=i;j<a;j+=i)
        divisor[j].push_back(i);
    }
        for(auto i:divisor[40])
        cout<<i<<" ";
        // cout<<endl;
    return 0;
}