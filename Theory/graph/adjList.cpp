#include<iostream>
using namespace std;

int main()
{
    // undirected
    int n, m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i =0; i<m; i++){
        int u, v;
        cin >> u >> v;
        // u <--> v
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    return 0;
}