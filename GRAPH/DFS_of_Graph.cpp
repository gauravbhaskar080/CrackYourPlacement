#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<int> &visited, vector<int> &list) {
    visited[node] = 1;
    list.push_back(node);
    for (auto child : adj[node]) {
        if (!visited[child])
            dfs(child, adj, visited, list);
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<int> visited(V, 0);
    vector<int> list;
    int start = 0;
    dfs(start, adj, visited, list);
    return list;
}

int main() {
    int V = 5;
    vector<int> adj[V];
    adj[0] = {2, 3, 1};
    adj[1] = {0};
    adj[2] = {0, 4};
    adj[3] = {0};
    adj[4] = {2};

    vector<int> res = dfsOfGraph(V, adj);
    for (int node : res) {
        cout << node << " "; 
    }
    return 0;
}
