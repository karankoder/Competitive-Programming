#include<bits/stdc++.h>
using namespace std;

const int N = 1e2 + 10;
vector<int> g[N];
bool vis[100010];
int flag = 0;
void dfs(int vertex,int parent){
    vis[vertex] = true;
    for(auto child:g[vertex]){
        if(child!=parent && vis[child]){
            flag = 1;
            return;
        }
        if(vis[child])
            continue;
        vis[child] = true;
        dfs(child,vertex);
    }
}

int main()
{ 
    int n,m;
    cin>>n>>m;
    for (int i = 0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1;i<=n;i++){
        if(!vis[i]){
            dfs(i,-1);
        }
    }
   if(flag) cout<<1<<endl;
   else
       cout << 0 << endl;
    return 0;
}
