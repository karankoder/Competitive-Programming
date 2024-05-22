#include<bits/stdc++.h>
using namespace std;
 
int cnt[100001];
int num;
void add(int x){
    cnt[x]++;
    if(cnt[x]==1){
        num++;
    }
}
void remove(int x){
    cnt[x]--;
    if(cnt[x]==0){
        num--;
    }
}
int k;
bool good(){
    return num<=k;
}

int main()
{ 
    int n;
    cin>>n>>k;
    vector<int>v;
    int x=0,l=0;
    for(int r=0;r<n;r++){
        add(v[r]);
        while(!good){
            remove(v[l]);
            l++;
        }
        x+=r-l+1;
    }
    cout<<x<<endl;

    return 0;
}