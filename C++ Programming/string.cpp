#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    string s;
    cin>>s;       // this will print only one word
    cout<<s<<endl;
    // string str;
    // getline(cin,str);   // this will print all the words in a line
    // cout<<str;
    string p;
    cin>>p;
    cout<<p<<endl;

    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--)
    // {
    //     string p;
    //     getline(cin,p);
    //     cout<<p<<endl;
    // }
    // for size of the string - str.size()
    cout<<"Combined string = "<<s + " " +p<<endl;

    char c='a';
    cout<<int(c)<<endl;    // this will print the ascii value
    cout<<c-'a'<<endl;
    char y='5';
    cout<<int(y)<<endl;    // this will print ascii value of 5
    cout<<y-'0';           // this will be in integer 

    string temp;
    temp.push_back('k');
    cout<<"farzi= "<<temp;

    return 0;
}