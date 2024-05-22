#include<bits/stdc++.h>
using namespace std;
// given n strings and given q queries if given string is present then cout yes else no.
int main()
{
    unordered_set<string>s;
    for(int i=0;i<10;i++){
        string st;
        cin>>st;
        s.insert(st);
    }

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        string stri;
        cin>>stri;
        if(s.find(stri)==s.end())
        cout<<"NO"<<endl;
        else 
        cout<<"YEs"<<endl;
    }

    


       
    return 0;
}