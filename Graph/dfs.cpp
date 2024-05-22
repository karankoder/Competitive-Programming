#include<bits/stdc++.h>
using namespace std;

const int N = 1e2 + 10;
vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    vis[vertex] = true;
    cout << vertex << endl;
    for(auto child:g[vertex]){
        cout << "Parent " << vertex << " Child " << child << endl;
        if(vis[child])
            continue;
        vis[child] = true;
        dfs(child);
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
    dfs(1);       // time complexity of dfs - O(V+E) and auxilary space complexity of dfs - O(V)
    return 0;
}