#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>graph[N];
bool vis[N];
bool isloopexist=false;
bool dfs(int vertex,int parent){
    //action on entering the vertex
    vis[vertex]=true;
    cout<<vertex<<endl;
    for(auto child :graph[vertex]){
        //action before entering child node
        if(vis[child] and child==parent) continue;
        if(vis[child]) return true;
        isloopexist|=(child,vertex);
        //action after exiting the child node

    }
    //action before exiting the vertex
    return isloopexist;
}
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
    bool ans=false;
    for(int i=1;i<=n;i++){
        if(dfs(i,0)){
        ans=true;
        break;
        }
    }
    cout<<ans<<endl; 
    
    return 0;
}