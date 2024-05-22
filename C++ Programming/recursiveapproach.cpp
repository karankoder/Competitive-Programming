#include<bits/stdc++.h>
using namespace std;
string f(string s,int idx,int n){
    if(idx==n)
    return "";
    string curr = "";      // important thing to notice
    curr=curr+s[idx];
    return ((s[idx]=='a')? "" : curr) + f(s,idx+1,n); 

}
int f(int k,int num)
{
    if(num==0)
    return 0;                       // k times num equals
    return k+f(k,num-1);
}

int main()
{ 
    string s;
    cin>>s;
    cout<<f(s,0,5);

    int n,k;
    cin>>n>>k;
    cout<<f(n,k);
    return 0;
}