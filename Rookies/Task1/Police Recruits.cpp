#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int p=0,s=0;
    for(int i =0;i<n;i++){
        int test;
        cin>>test;
        if(test==-1){
            if(p>0){
                p--;
            }
            else{s++;}
        }
        else{p+=test;}
    }
    cout <<s;
    return 0;
}
