#include <bits/stdc++.h>

using namespace std;


int main()
{

    int n ;
    cin >> n ;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }

    int Alicecnt = 0 , Bobcnt = 0 ;
    int left = 0 , right= n-1 ;
    int Asum = arr[left] , Bsum = arr[right];

    while( left <= right)
    {
        if(Asum <= Bsum)
        {
            Asum += arr[++left];
            Alicecnt ++ ;
        }
        else
        {
            Bsum += arr[--right];
            Bobcnt ++ ;
        }
    }

    cout << Alicecnt << " " << Bobcnt << endl;
}