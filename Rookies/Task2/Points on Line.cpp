#include <bits/stdc++.h>

using namespace std;

long long n,m,j,i,res,a[200000];

int main()
{
    cin>>n>>m;
    for (i=0;i<n;i++)
    {
        cin>> a[i];
        while (a[i]-a[j]>m) j++;
        if (i-j>1)
        {
            res+=(i-j-1)*(i-j)/2;
        }
    }
    cout << res;
}