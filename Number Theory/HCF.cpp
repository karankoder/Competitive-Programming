#include<bits/stdc++.h>
using namespace std;

int hcf(int a,int b){
    while(b%a!=0){
        int temp=a;
        a=b%a;
        b=temp;
    }
    return a;
}
int main()
{ 
    //LCM * HCF = Product of two numbers
    int a=hcf(18,12);
    cout<<a<<endl;
    cout<<__gcd(18,12);
    return 0;
}