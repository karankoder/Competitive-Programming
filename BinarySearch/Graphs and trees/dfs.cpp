#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>graph[N];
bool vis[N];

void dfs(int vertex){
    //action on entering the vertex
    vis[vertex]=true;
    cout<<vertex<<endl;
    for(auto child :graph[vertex]){
        //action before entering child node
        if(vis[child]) continue;
        dfs(child);
        //action after exiting the child node
    }
    //action before exiting the vertex
}

// time complexity of dfs is (V+E)

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    
    return 0;
}