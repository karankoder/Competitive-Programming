#include<bits/stdc++.h>
using namespace std;

const int N=1e7+10;
vector<bool>isprime(N,1);
vector<int>lp(N,0),hp(N,0);
int main()
{
    //for calculating highest and lowest prime of a number
    isprime[0]=isprime[1]=1;               //time complexity - O(nlog(logn))
    for(int i=2;i<N;i++){
        if(isprime[i]==true){
            lp[i]=hp[i]=i;
            for(int j=i*2;j<N;j+=i){
            isprime[j]=false;
            hp[j]=i;
            if(lp[j]==0)    
            lp[j]=i;
            }
        }
    }
    int num;
    cin>>num;
    vector<int>prime_factor;
    while(num>1){
        int pf=hp[num];
        while(num%pf==0){    //time complexity - O(logn)
            num/=pf;
            prime_factor.push_back(pf);
        }
    }
    for(auto i:prime_factor)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}