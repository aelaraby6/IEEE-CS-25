#include <bits/stdc++.h>

using namespace std;
#define ll long long;

int arr[100006];
int n,q,c=0,b;
int main() {
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>q;
    sort(arr,arr+n);
    while(q--) {
        cin>>b;
        int low=0,high=n;
        while(low<high) {
            int mid =(low+high)/2;
            if(arr[mid]<=b) {
                low=mid+1;
            }
            else {
                high=mid;
            }
        }
        cout<<low<<endl;
    }

    return 0;
}