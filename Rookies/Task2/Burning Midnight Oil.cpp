#include <bits/stdc++.h>

using namespace std;

int test(int mid,int k,int n){
    int ans=mid;
    for(int i=1;i<30;i++){
        int w =mid/ pow(k,i);
        if(w>0)ans+=w;
        if(ans>=n||w<=0)break;
    }
    return ans;
}

int main()
{
    int n,k; cin>>n>>k;
    int l=0,r =n,ans=0;
    while (l<=r){
        int m =(l+r)/2;
        if(test(m,k,n)>=n){
            ans=m;
            r =m-1;
        }else l=m+1;
    }
    cout<<ans<<endl;
}