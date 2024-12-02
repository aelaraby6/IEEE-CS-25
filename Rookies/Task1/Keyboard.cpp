#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main()
{
   string s="qwertyuiopasdfghjkl;zxcvbnm,./";
   char c;
   cin>>c;
   string d;
   cin>>d;

   for(int i=0;i<d.size();i++){
        int index=s.find(d[i]);
        if(c=='R')
            cout<<s[index-1];
        else
            cout<<s[index+1];
   }


    return 0;
}