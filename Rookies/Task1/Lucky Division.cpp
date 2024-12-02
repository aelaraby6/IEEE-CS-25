#include <bits/stdc++.h>

using namespace std;

bool islucky(int n) {
    while(n>0) {
        if(n%10 != 7 && n%10 !=4) {
            return false;
        }
        n/=10;
    }
    return true;
}

int main()
{
   int n; cin>>n;
   for(int i=2;i<=n;i++) {
       if(islucky(i) && n % i ==0) {
           cout<<"YES\n";
           return 0;
       }
   }
    cout<<"NO\n";
    return 0;
}