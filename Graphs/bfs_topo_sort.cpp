#include<iostream>
using namespace std;


vector<int> topoSort(int V, vector<int> adj[]){
    int indegree[V] = {0};
    for(int i = 0; i<V; i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i = 0; i<V; i++){
        if(indegree[i] == 0){
            p.push(i;)
        }
    }
    vector<int> topo;
    // O(V+E) Time Complexity
    while(!q.empty()){
        int node = q.front();
        q.pop();
        top.push_back(node);

        // node is in your topo sort
        // so please remove it from your indegree
        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it] == 0){
                q.push(it);
            }
        }
    }

    return topo;
}

int main()
{
 
    return 0;
}