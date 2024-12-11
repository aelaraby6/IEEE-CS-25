/* Abdo want BFS in his heart for true love */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const vector<pair<int, int>> directions = {
    {0, 1},
    {1, 0},
    {0, -1},
    {-1, 0}
};

string chars = "RDLU";

int n, m;
vector<vector<char>> l;
vector<vector<bool>> visited;
vector<vector<pair<int, int>>> parent;
pair<int, int> start, endPoint;

bool solve(int startX, int startY) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    visited[startX][startY] = true;

    while (!q.empty()) {
        auto [cx, cy] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int a = cx + directions[i].first;
            int b = cy + directions[i].second;

            if (a >= 0 && a < n && b >= 0 && b < m && !visited[a][b] && l[a][b] != '#') {
                visited[a][b] = true;
                parent[a][b] = {cx, cy};

                if (l[a][b] == 'B') return true;

                q.push({a, b});
            }
        }
    }

    return false;
}

int main() {
    cin >> n >> m;
    l.resize(n, vector<char>(m));
    visited.resize(n, vector<bool>(m, false));
    parent.resize(n, vector<pair<int, int>>(m, {-1, -1}));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> l[i][j];
            if (l[i][j] == 'A') start = {i, j};
            if (l[i][j] == 'B') endPoint = {i, j};
        }
    }

    if (!solve(start.first, start.second)) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    vector<char> path;
    pair<int, int> current = endPoint;

    while (current != start) {
        pair<int, int> prev = parent[current.first][current.second];
        for (int i = 0; i < 4; i++) {
            if (prev.first + directions[i].first == current.first &&
                prev.second + directions[i].second == current.second) {
                path.push_back(chars[i]);
                break;
            }
        }
        current = prev;
    }

    reverse(path.begin(), path.end());

    cout << path.size() << endl;
    for (int i = 0; i < path.size(); i++) {
        cout << path[i];
    }

    return 0;
}
