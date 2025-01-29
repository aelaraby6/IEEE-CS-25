
/*In the end, we only regret the chances we didn’t take.*/

#include <bits/stdc++.h>
#define ll long long
#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] <<endl; }

ll mod = 1e9 + 7;

using namespace std;

/*================================================================================================================================
                    ⠘⣷⣶⣤⣄⡀
                    ⠸⣿⣿⣿⣿⣷⡒⢄⡀
                        ⢹⣿⣿⣿⣿⣿⣆⠙⡄ ⠐
        ⣤⣤⣤⣤⣤⣤⣤⣤⣤⠤⢄⡀  ⣿⣿⣿⣿⣿⣿⡆⠘⡄ ⡆
        ⠈⠙⢿⣿⣿⣿⣿⣿⣿⣿⣦⡈⠒⢄⢸⣿⣿⣿⣿⣿⣿⡀⠱ ⡇
            ⠈⠻⣿⣿⣿⣿⣿⣿⣿⣦ ⠱⣿⣿⣿⣿⣿⣿⣇ ⢃⡇
                ⠘⢿⣿⣿⣿⣿⣿⣿⣷⡄⣹⣿⣿⣿⣿⣿⣿⣶⣾⣿⣶⣤⣀
                ⣀⣀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀
        ⢀⣠⣴⣶⣿⣭⣍⡉⠙⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷
    ⢀⣠⣶⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇   ⣀
    ⠉⠉⠛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡷⢂⣓⣶⣶⣶⣶⣤⣤⣄⣀
            ⠈⠙⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⠟⢀⣴⢿⣿⣿⣿⠟⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠋⠉
            ⠤⠤⠤⠤⠙⣻⣿⣿⣿⣿⣿⣿⣾⣿⣿⡏⣠⠟⡉⣾⣿⣿⠋⡠⠊⣿⡟⣹⣿⢿⣿⣿⣿⠿⠛⠉
        ⢀⣠⣤⣶⣤⣭⣤⣼⣿⢛⣿⣿⣿⣿⣻⣿⣿⠇⠐⢀⣿⣿⡷⠋ ⢠⣿⣺⣿⣿⢺⣿⣋⣉⣉⣩⣴⣶⣤⣤⣄
            ⠉⠉⠛⠻⠿⣿⣿⣿⣇⢻⣿⣿⡿⠿⣿⣯⡀ ⢸⣿⠋⢀⣠⣶⠿⠿⢿⡿⠈⣾⣿⣿⣿⣿⡿⠿⠛⠋⠁
                ⠙⠻⢧⡸⣿⣿⣿ ⠃⠻⠟⢦⢾⢣⠶⠿⠏ ⠰ ⣼⡇⣸⣿⣿⠟⠉  ⢀
                ⢀⣠⣴⣾⣶⣽⣿⡟⠓⠒  ⡀ ⠠⠤⠬⠉⠁⣰⣥⣾⣿⣿⣶⣶⣷⡶⠄
                ⠉⠉⠉⠉⠹⠟⣿⣿⡄  ⠠⡇     ⢠⡟⠛⠛⠋⠉
                    ⢀⣠⠋⠹⣷⣄ ⠐⣊⣀  ⢀⡴⠁⠣⣀
                ⢀⣀⣤⣀⠤⠊⢁⡸ ⣆⠹⣿⣧⣀  ⡠⠖⡑⠁   ⠑⢄⣀⣀
            ⣰⣦⣶⣿⣿⣟⣁⣤⣾⠟⠁⢀⣿⣆⠹⡆⠻⣿⠉⢀⠜⡰  ⠈⠑⢦⡀⠈⢾⠑⡾⠲⣄ ⣀
        ⣀⣤⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠖⠒⠚⠛⠛⠢⠽⢄⣘⣤⡎⠠⠿⠂ ⠠⠴⠶⢉⡭⠃⢸⠃ ⣿⣿⣿⠡⣀
    ⡤⠶⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣋⠁     ⢹⡇    ⠒⠢⣤⠔⠁ ⢀⡏  ⢸⣿⣿ ⢻⡟⠑⠢⢄⡀
    ⢸   ⡀⠉⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⣀⣀⡀ ⢸⣷⡀⣀⣀⡠⠔⠊  ⢀⣠⡞   ⢸⣿⡿ ⠘    ⠈⠑⢤
⢀⣴⣿⡀  ⡇   ⠈⣿⣿⣿⣿⣿⣿       JUST DO IT   ⢀⣠⣴⣾⣿⡿⠁   ⢸⡿⠁        ⡜
⢀⣾⣿⣿⡇ ⢰⣷ ⢀  ⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿   Abdo  ⢀⣀⣤⣶⣾⣿⣿⣿⢿⠿⠁    ⠘         ⡰⠉⢦
⢀⣼⣿⣿⡿⢱ ⢸⣿⡀⢸⣧⡀ ⢿⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡭⠖⠁ ⡠⠂        ⢠   ⢠⠃ ⠈⣀
⢸⣿⣿⣿⡇ ⢧⢸⣿⣇⢸⣿⣷⡀⠈⣿⣿⣇⠈⠛⢿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⠿⠿⠟⡻⠟⠉  ⡠⠊ ⢠        ⣾⡄ ⢠⣿⠔⠁ ⢸
⠈⣿⣿⣿⣷⡀ ⢻⣿⣿⡜⣿⣿⣷⡀⠈⢿⣿⡄  ⠈⠛⠿⣿⣿⣿⣷⣶⣶⣶⡶⠖⠉ ⣀⣤⡶⠋ ⣠⣶⡏       ⢰⣿⣧⣶⣿⣿⠖⡠⠖⠁
⣿⣿⣷⣌⡛⠶⣼⣿⣿⣷⣿⣿⣿⣿⡄⠈⢻⣷ ⣄⡀   ⠈⠉⠛⠛⠛⠁⣀⣤⣶⣾⠟⠋ ⣠⣾⣿⡟        ⣿⣿⣿⣿⣿⠷⠊ ⢰
⢰⣿⣿ ⠈⢉⡶⢿⣿⣿⣿⣿⣿⣿⣿⣿⣆ ⠙⢇⠈⢿⣶⣦⣤⣀⣀⣠⣤⣶⣿⣿⡿⠛⠁⢀⣤⣾⣿⣿⡿⠁       ⣸⣿⡿⠿⠋⠙⠒⠄ ⠉⡄
⣿⣿⡏  ⠁   ⠉⠉⠙⢻⣿⣿⣿⣿⣷⡀   ⠻⣿⣿⣿⣿⣿⠿⠿⠛⠁ ⣀⣴⣿⣿⣿⣿⠟        ⢠⠏         ⠰
===============================================================================================================================*/

const int N =10;
// Adjacency matrix
bool adjMatrixBool[N][N];
int adjMatrixInt[N][N]; /* wighted graph */

// Keep all edges for a given pair of nodes
map<pair<int, int>, int> adjMatrixMap;
// Imagine graph of 100000 nodes, but total number of edges is 50000!
vector<pair<int, int>> adjMatrixAll[N];

// Adjacency lists
vector<vector<int>> adjList1; // Boolean relation
vector<vector<pair<int, int>>> adjList2; // Cost relation (node, cost): Select 1 of multiple edges

// Edges List
struct edge {
    int from, to, w;

    edge(int from, int to, int w): from(from), to(to), w(w) {}

    bool operator<(const edge &e) const {
        return w < e.w; // Sort with smaller weight first
    }
};

vector<edge> edgeList;

struct Task {
    /*priority_queue<Task> pq;*/
    int priority;
    string value;

    // Overload the less-than operator for max-heap
    int timestamp;

    // Overload the less-than operator for a min-heap
    bool operator<(const Task& other) const {
        if (priority == other.priority) {
            return timestamp > other.timestamp;
        }
        return priority > other.priority;
    }
};
ll sum(ll x, ll y, ll mod) {
    return (x % mod + y % mod) % mod;
}
ll sub(ll x, ll y, ll mod) {
    return (x % mod - y % mod + mod) % mod;
}
ll mul(ll x, ll y, ll mod) {
    return (x % mod * y % mod) % mod;
}
ll factorial(ll n) {
    ll res = 1, i;
    for (i = 2; i <= n; i++)
        res = mul(i, res, mod);
    return res % mod;
}
ll cnt(ll num) {
    ll k = 0;
    while (num != 0) {
        int digit = num % 10; // get the rightmost digit
        num = num / 10;       // remove the rightmost digit
        if (digit == 0)
            k++;
        else
            return k;
    }
    return k;
}
long long fastPower(ll base, ll exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = mul(result, base, mod) % mod;
        }
        base = mul(base, base, mod) % mod;
        exponent /= 2;
    }
    return result % mod;
}

int n, m;
vector<vector<int>> grid;
vector<vector<bool>> visited;

int solve(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0 || visited[i][j]) {
        return 0;
    }
    visited[i][j] = true;
    int volume = grid[i][j];
    volume += solve(i + 1, j);
    volume += solve(i - 1, j);
    volume += solve(i, j + 1);
    volume += solve(i, j - 1);
    return volume;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        grid.assign(n, vector<int>(m));
        visited.assign(n, vector<bool>(m, false));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }
        int maxVol = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] > 0 && !visited[i][j]) {
                    int current_volume = solve(i, j);
                    maxVol = max(maxVol, current_volume);
                }
            }
        }
        cout << maxVol<< '\n';
    }

    return 0;
}