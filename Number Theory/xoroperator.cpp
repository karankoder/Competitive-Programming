#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    // properties of xor operator
    int x=5;
    cout<<(x^x)<<endl;    // equal to 0
    cout<<(x^0)<<endl;    // equal to x
    // a^(x^a) = a^x^a = a^a^x = x^a^a
    //swapping of number using xor
    int a=10;
    int b=20;
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<a<<" "<<b;

    //sample question
    //given an array of integers , in which count of all numbers are even except one find that one.
    int n,ans;
    cin>>n;
    cin>>ans;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        ans^=x;
    }
    cout<<ans<<endl;
    return 0;
}