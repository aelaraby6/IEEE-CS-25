#include <bits/stdc++.h>

using namespace std;

long long arr[222222];

int main()
{

    int t;
    cin>>t;
    while(t--) {
        long long n,l,r,ans=0;
        cin>>n>>l>>r;

        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);

        for(int i = 0; i < n-1; i++)
        {

            ans += (upper_bound(arr+ i + 1, arr + n, r - arr[i])
                   - lower_bound(arr + i + 1, arr + n, l - arr[i]));

        }
        cout<<ans<<endl;
    }
}