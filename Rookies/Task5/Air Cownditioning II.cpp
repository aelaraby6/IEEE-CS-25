
/*In the end, we only regret the chances we didn’t take.*/

#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool AbdoCheck(int idx, const vector<int>& cooling, const vector<int>& cow_start, const vector<int>& cow_end, const vector<int>& cow_cooling, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = cow_start[i]; j <= cow_end[i]; ++j) {
            if (cooling[j] < cow_cooling[i]) {
                return false;
            }
        }
    }
    return true;
}

int calculate(int idx, vector<int>& cooling, const vector<int>& cow_start, const vector<int>& cow_end, const vector<int>& cow_cooling,
                     const vector<int>& ac_start, const vector<int>& ac_end, const vector<int>& ac_power, const vector<int>& ac_cost,
                     int n, int m, int current_cost) {
    if (idx == m) {
        return AbdoCheck(idx, cooling, cow_start, cow_end, cow_cooling, n) ? current_cost : INT_MAX;
    }

    int cost_without_ac = calculate(idx + 1, cooling, cow_start, cow_end, cow_cooling, ac_start, ac_end, ac_power, ac_cost, n, m, current_cost);

    vector<int> original_cooling = cooling;
    for (int j = ac_start[idx]; j <= ac_end[idx]; ++j) {
        cooling[j] += ac_power[idx];
    }
    int cost_with_ac = calculate(idx + 1, cooling, cow_start, cow_end, cow_cooling, ac_start, ac_end, ac_power, ac_cost, n, m, current_cost + ac_cost[idx]);

    cooling = original_cooling;

    return min(cost_without_ac, cost_with_ac);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> cow_start(n), cow_end(n), cow_cooling(n);
    for (int i = 0; i < n; ++i) {
        cin >> cow_start[i] >> cow_end[i] >> cow_cooling[i];
    }

    vector<int> acstart(m), acend(m), acpower(m), accost(m);
    for (int i = 0; i < m; ++i) {
        cin >> acstart[i] >> acend[i] >> acpower[i] >> accost[i];
    }

    vector<int> cooling(101, 0);
    int min_cost = calculate(0, cooling, cow_start, cow_end, cow_cooling, acstart, acend, acpower, accost, n, m, 0);

    cout << min_cost << endl;
    return 0;
}
