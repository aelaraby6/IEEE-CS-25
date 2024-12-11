/* Abdo want BFS in his heart for true love */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<vector<int>> adj;
vector<bool> visited;

void solve(int start, vector<int>& c) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int n = q.front();
        q.pop();
        c.push_back(n);

        for (int i = 0; i < adj[n].size(); ++i) {
            int neighbor = adj[n][i];
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    adj.resize(n + 1);
    visited.resize(n + 1, false);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<vector<int>> d;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            vector<int> component;
            solve(i, component);
            d.push_back(component);
        }
    }

    int requiredRoads = d.size() - 1;
    cout << requiredRoads << endl;

    for (int i = 1; i < d.size(); i++) {
        cout << d[i - 1][0] << " " << d[i][0] << endl;
    }


    return 0;
}
