#include <bits/stdc++.h>

using namespace std;
#define ll long long int
const ll MOD = 1e9 + 7;

int power_mod(int base, int exp) {
    int res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * 1LL * base) % MOD;
        }
        base = (base * 1LL * base) % MOD;
        exp /= 2;
    }
    return res;
}

int main() {
    int n,t=0,count=0,newcount=0;
    
    cin>>n;
    string s;
    cin>>s;
    for(int i=3;i<n;i++)
    {
        if(s[i]=='U' && s[i-1]==s[i-2]){
            t++;
            cout<<"0"<<endl;
            break;
        }
    }
    if(t!=0)
        return 0;
    else
    {
        for(int i=0;i<n;i++){
            if(s[i]=='_')
                count++;
        }
        long long int numb=power_mod(3, count);
        for(int i=3;i<n;i++){
            if(s[i]=='_' && (s[i-1]==s[i-2] || s[i+1]=='U' || s[i+2]=='U' ))
                newcount=((newcount%MOD)+1)%MOD;
        }
        cout<<numb-newcount<<endl;
    }
    
    return 0;
}
