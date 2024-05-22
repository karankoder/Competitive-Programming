#include<bits/stdc++.h>
using namespace std;

const int M=1e7+10;


int binexpiter(long long int a,long long int b){
    long long int an=1;
    while(b){
        a=a%M;      //if a is bigger than we apply this
        if(b&1)
        an=binmultiply(an,a)%M;
        a=binmultiply(a,a)%M;
        b>>=1;
    }
    return an;
}

int binmultiply(long long a,long long b){
    long long ans=0;
    while(b){
        if(b&1)
        ans=(ans+a)%M;
        a=(a+a)%M;
        b>>=1;
    }
    return ans;
}


int main()
{
    //Now if constraints of a are very big in a^b,
    //Then (a^b)%M=((a%M)^b)%M;

    //if M is bigger than 10^18, then again it will create problem
    //in that case we will apply binary multiplication
    cout<<binmultiply(455,100);
    return 0;
}