#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n; cin>>n;
    string s; cin>>s;
    vector<int>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    int minn =0,flag=0;
    for(int i=0;i<n-1;i++) {
            if(s[i]=='R' && s[i+1]=='L') {
                flag =1;
                int newdis = (vec[i+1] - vec[i]) / 2;
                if(minn == 0 || newdis < minn) minn = newdis;
            }
    }
    if(flag) cout<<minn<<endl;
    else cout<<-1<<endl;
    return 0;
}