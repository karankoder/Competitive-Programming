#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int a;
    cin>>a;
    //odd even
    if(a&1)
    cout<<"ODD NUMBER"<<endl;
    else
    cout<<"EVEN NUMBER"<<endl;

    //for multiplying and dividing by 2
    cout<<(a<<2)<<endl;
    cout<<(a>>2)<<endl;  // a faster operation than normal multiplication

    //upercase to lowercase usnig bit
    char temp='A';
    char cemp= temp | ' ';  //upper to lower case
    cout<<cemp<<endl;      //(1<<5) is space
    char name =(cemp & '_');   // lower to upper case
    cout<<name<<endl;
    // cout<<char(1);


    return 0;
}