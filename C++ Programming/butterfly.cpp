#include<iostream>
using namespace std;
 
int main()
{ 
    int n;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        cout<<"\n";
        for(int j=0;j<i+1;j++)
        cout<<"*";
        for (int k = 0; k <(n-1-i)*2 ; k++)
        cout<<" ";
        for (int l = 0; l < i+1; l++)
        cout<<"*"; 
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"\n";
        for (int m = 0; m < n-i ; m++)
        cout<<"*";
        for (int p = 0; p < i*2; p++)
        cout<<" ";
        for (int q = 0; q < n-i ; q++)
        cout<<"*";
    }
    
    return 0;
}