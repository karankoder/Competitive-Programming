#include<bits/stdc++.h>
using namespace std;

const int M=1e7+10;
int binexprecur(long long int a,long long int b){
    if(b==0) 
    return 1;
    long long int res=binexprecur(a,b/2);
    if(b&1)
    return a*((res%M*res%M)%M)%M;
    else
    return (res%M*res%M)%M;
}

int binexpiter(long long int a,long long int b){
    long long int an=1;
    while(b){
        if(b&1)
        an=(an*a)%M;
        a=(a*a)%M;
        b>>=1;
    }
    return an;
}
int main()
{
    cout<<binexprecur(2,1000000)<<endl;
    cout<<binexpiter(2,1000000)<<endl;
    return 0;
}