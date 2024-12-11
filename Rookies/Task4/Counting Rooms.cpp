
/*Abdo want DFS in his heart for true love */

#include <bits/stdc++.h>
using namespace std;

#define ll long long


vector<pair<int, int>> directions = {
    {1, 0},
    {-1, 0},
    {0, 1},
    {0, -1}
};

int n, m;

void solve(int x, int y, vector<vector<bool>>& visited, vector<vector<char>>& map) {

    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while (!q.empty()) {
      pair<int, int> p = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int newx = p.first + directions[i].first, newy = p.second + directions[i].second;
            if (newx >= 0 && newx < n && newy >= 0 && newy < m && map[newx][newy] == '.' && !visited[newx][newy]) {
                visited[newx][newy] = true;
                q.push({newx, newy});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    vector<vector<char>> map(n, vector<char>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }

    int counter = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == '.' && !visited[i][j]) {
                solve(i, j, visited, map);
                counter++;
            }
        }
    }

    cout << counter << endl;

    return 0;
}



