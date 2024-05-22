#include<bits/stdc++.h>
using namespace std;

const int N=1e7+10;
vector<bool>isprime(N,1);
vector<int>lp(N,0),hp(N,0);
int main()
{
    //for checking prime number using sieve algorithm
    isprime[0]=isprime[1]=1;               //time complexity - O(nlog(logn))
    for(int i=2;i*i<=N;i++){    
        if(isprime[i]==true){
            for(int j=i*i;j<=N;j+=i)
            isprime[j]=false;
        }
    }
    cout<<isprime[5];
    return 0;
}
