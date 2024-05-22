#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    // O(n) time complexity for finding factors of n
    for(int i=1;i<=n;i++){
        if(n%i==0)
        cout<<i<<" ";
    }
    cout<<endl;

    //O(sqrt(n)) time complexity for finding factors of n
    int ct=0;
    int s=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
        cout<<i<<" "<<n/i<<" ";
        if(i!=sqrt(n)){
        ct+=2;
        s+=(i+(n/i));
        }
        else{
        ct++;
        s+=i;}
        }
    }
    cout<<endl;
    cout<<ct<<" "<<s;



    return 0;
}