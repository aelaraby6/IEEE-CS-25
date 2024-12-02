#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    int minn=vec[0],maxx=vec[0],a=0,b=0;
    for(int i=0;i<n;i++) {
        if(vec[i]<=minn) {
            minn=vec[i];
            a=i;
        }
        if(vec[i]>maxx) {
            maxx=vec[i];
            b=i;
        }
    }
    if(vec[0]==maxx && vec[n-1]==minn) {
        cout<<0<<endl;
        return 0;
    }
    if(a<b) {
        cout<<(((n-1)-a) + b ) -1<<endl;
    }
    else {
        cout<<((n-1) - a)+ b<<endl;
    }
    return 0;
}