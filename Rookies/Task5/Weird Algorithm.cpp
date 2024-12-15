
#include <bits/stdc++.h>

using namespace std;

void solve(long long n, vector<long long>& vec) {
    vec.push_back(n);
    if (n == 1)
        return;
    if (n % 2 == 0) {
        solve(n / 2, vec);
    }
    else {
        solve(3 * n + 1, vec);
    }
}

int main() {
    long long n;
    cin >> n;

    vector<long long> vec;
    solve(n, vec);

    for (int i = 0; i < vec.size(); i++) {
        if (i > 0)
            cout << " ";
        cout << vec[i];
    }
    cout << endl;

    return 0;
}