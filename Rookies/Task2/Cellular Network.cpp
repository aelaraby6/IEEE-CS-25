#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m,res=0; cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    for(int i = 0 ;i < n ; i++) {
        int index = lower_bound(b.begin(),b.end(),a[i]) - b.begin();
        if(index == 0) {
            res = max(res,abs(a[i]-b[index]));
        }
        else if (index == m) {
            res = max(res,abs(a[i]-b[index-1]));
        }
        else {
            res = max({res,min(abs(a[i]-b[index-1]),abs(a[i]-b[index]))});
        }
    }
    cout<<res<<endl;


    return 0;
}