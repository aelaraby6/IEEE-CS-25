#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    
    int ans = 0,left = 0, right = 0, sum = 0;
    
    while (right < n) {
        while (right < n && (vec[right] + sum) <= k) {
            sum += vec[right];
            right++;
        }
        
        ans = max(ans, right - left);
        sum -= vec[left];
        left++;
    }
    
    cout << ans << endl;


    return 0;
}