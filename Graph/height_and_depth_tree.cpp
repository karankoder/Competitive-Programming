#include<bits/stdc++.h>
using namespace std;

vector<int> g[1001];
vector<int> height(100010),depth(100010);
void dfs(int vertex,int parent){
    for(auto child:g[vertex]){
        if(child==parent) continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child]+1);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0;i<n-1;i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    for (int i = 1; i <= n;i++)
        cout << depth[i] << " ";
    cout << endl;
    for (int i = 1; i <= n;i++)
        cout << height[i]<<" ";
    cout << endl;
    return 0;
}