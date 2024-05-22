#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    char a[][13]={"papaya","lime","watermelon","apple","mango","kiwi"};
    // similar to - int a[][5]={{1,2,3,4,5},{7,8,10,11,12}};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(a[j],a[i])<0)
            swap(a[i],a[j]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
    return 0;
}