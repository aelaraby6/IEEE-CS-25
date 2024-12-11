#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<pair<int, int>> knightMoves = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};



int solve() {
    string start,end;
    cin>>start>>end;
    if (start == end) return 0;

    pair<int, int> src = {start[1] - '1', start[0] - 'a'};
    pair<int, int> dst = {end[1] - '1', end[0] - 'a'};

    queue<pair<int, int>> q;
    vector<vector<bool>> visited(8, vector<bool>(8, false));

    q.push(src);
    visited[src.first][src.second] = true;

    int moves = 0;
    while (!q.empty()) {
        int n = q.size();

        for (int i = 0; i < n; i++) {
            pair<int, int> p = q.front();
            q.pop();

            if (p.first == dst.first && p.second == dst.second)
            {
                return moves;
            }

            for (int j = 0; j < 8; j++) {
                int newrow = p.first + knightMoves[j].first;
                int newcoulmn = p.second + knightMoves[j].second;

                if (newrow >= 0 && newrow < 8 && newcoulmn >= 0 && newcoulmn < 8 && !visited[newrow][newcoulmn]) {
                    visited[newrow][newcoulmn] = true;
                    q.push({newrow, newcoulmn});
                }
            }
        }

        moves++;
    }
    return -1;
}


int main() {

    int t;
    cin>>t;
    while(t--) {
        cout<<solve()<<endl;
    }


}
