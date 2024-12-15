
/*Abdo is tired from life*/

#include <bits/stdc++.h>

using namespace std;

void solve(int idx, int n, long long first, long long total, const vector<int> &w, long long& minDiff) {
    if (idx == n) {
        long long second = total - first;
        minDiff = min(minDiff, abs(first - second));
        return;
    }

    solve(idx + 1, n, first + w[idx], total, w, minDiff);
    solve(idx + 1, n, first, total, w, minDiff);
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    long long totalSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        totalSum +=vec[i];
    }

    long long minDiff = INT_MAX;

    solve(0, n, 0, totalSum, vec, minDiff);
    cout << minDiff << endl;

    return 0;
}
