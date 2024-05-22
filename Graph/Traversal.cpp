#include<bits/stdc++.h>
using namespace std;
 
const int N = 1e2 + 10;
int graph1[N][N];
vector<int> graph2[N];

int main()
{
    int n,m;
    cin >> n >> m;
    for (int i = 0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph1[u][v] = 1;
        graph1[v][u] = 1;        // Adjancency Matrix - space complexity O(V^2)
        graph2[u].push_back(v);  // Adjancency List - space complexity O(V+E)
        graph2[v].push_back(u);
    }
    cout << "Adjacency Matrix: " << endl;
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=n;j++){
            cout << graph1[i][j] << " ";
        }
    }
    cout << endl;
    cout << "Adjacency List: " << endl;
    for (int i = 1;i<=n;i++){
        cout << i << " -> ";
        for (int j = 0;j<graph2[i].size();j++){
            cout << graph2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}