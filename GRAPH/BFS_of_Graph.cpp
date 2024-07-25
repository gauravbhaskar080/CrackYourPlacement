#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> visited(V, 0);
    visited[0] = 1;
    vector<int> result;
    queue<int> q;
    q.push(0);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        result.push_back(node);
        for (auto it : adj[node])
        {
            if (!visited[it])
            {
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return result;
}

int main()
{
    int V = 5;
    vector<int> adj[V];
    adj[0] = {1, 2, 3};
    adj[2] = {4};

    vector<int> res = bfsOfGraph(V, adj);
    for (auto i : res)
        cout << i << " ";
    return 0;
}
