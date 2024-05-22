#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
const int M=1e5+10;
int graph1[N][N];
vector<int>graph2[M];

int main()
{ 
    //adjacency matrix representation
    // time complexity mainly depends on the value of its vertices, its v*v.
    int v,e;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        graph1[a][b]=1;   // if weight is mentioned then we put value of its weight instead of 1 
        graph2[b][a]=1;

        graph2[a].push_back(b);
        graph2[b].push_back(a);
    }
    //adjacency list representation
    // its time complexity is O(v+e) so it can take upto 1e5+10 where e<1e7+10

    //its easy to find whether i,j is connnected or not from adjacency matrix representation of graph,
    return 0;
}