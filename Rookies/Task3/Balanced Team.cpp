#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*================================================================================================================================
                    ⠘⣷⣶⣤⣄⡀
                    ⠸⣿⣿⣿⣿⣷⡒⢄⡀
                        ⢹⣿⣿⣿⣿⣿⣆⠙⡄ ⠐
        ⣤⣤⣤⣤⣤⣤⣤⣤⣤⠤⢄⡀  ⣿⣿⣿⣿⣿⣿⡆⠘⡄ ⡆
        ⠈⠙⢿⣿⣿⣿⣿⣿⣿⣿⣦⡈⠒⢄⢸⣿⣿⣿⣿⣿⣿⡀⠱ ⡇
            ⠈⠻⣿⣿⣿⣿⣿⣿⣿⣦ ⠱⣿⣿⣿⣿⣿⣿⣇ ⢃⡇
                ⠘⢿⣿⣿⣿⣿⣿⣿⣷⡄⣹⣿⣿⣿⣿⣿⣿⣶⣾⣿⣶⣤⣀
                ⣀⣀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀
        ⢀⣠⣴⣶⣿⣭⣍⡉⠙⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷
    ⢀⣠⣶⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇   ⣀
    ⠉⠉⠛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡷⢂⣓⣶⣶⣶⣶⣤⣤⣄⣀
            ⠈⠙⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⠟⢀⣴⢿⣿⣿⣿⠟⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠋⠉
            ⠤⠤⠤⠤⠙⣻⣿⣿⣿⣿⣿⣿⣾⣿⣿⡏⣠⠟⡉⣾⣿⣿⠋⡠⠊⣿⡟⣹⣿⢿⣿⣿⣿⠿⠛⠉
        ⢀⣠⣤⣶⣤⣭⣤⣼⣿⢛⣿⣿⣿⣿⣻⣿⣿⠇⠐⢀⣿⣿⡷⠋ ⢠⣿⣺⣿⣿⢺⣿⣋⣉⣉⣩⣴⣶⣤⣤⣄
            ⠉⠉⠛⠻⠿⣿⣿⣿⣇⢻⣿⣿⡿⠿⣿⣯⡀ ⢸⣿⠋⢀⣠⣶⠿⠿⢿⡿⠈⣾⣿⣿⣿⣿⡿⠿⠛⠋⠁
                ⠙⠻⢧⡸⣿⣿⣿ ⠃⠻⠟⢦⢾⢣⠶⠿⠏ ⠰ ⣼⡇⣸⣿⣿⠟⠉  ⢀
                ⢀⣠⣴⣾⣶⣽⣿⡟⠓⠒  ⡀ ⠠⠤⠬⠉⠁⣰⣥⣾⣿⣿⣶⣶⣷⡶⠄
                ⠉⠉⠉⠉⠹⠟⣿⣿⡄  ⠠⡇     ⢠⡟⠛⠛⠋⠉
                    ⢀⣠⠋⠹⣷⣄ ⠐⣊⣀  ⢀⡴⠁⠣⣀
                ⢀⣀⣤⣀⠤⠊⢁⡸ ⣆⠹⣿⣧⣀  ⡠⠖⡑⠁   ⠑⢄⣀⣀
            ⣰⣦⣶⣿⣿⣟⣁⣤⣾⠟⠁⢀⣿⣆⠹⡆⠻⣿⠉⢀⠜⡰  ⠈⠑⢦⡀⠈⢾⠑⡾⠲⣄ ⣀
        ⣀⣤⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠖⠒⠚⠛⠛⠢⠽⢄⣘⣤⡎⠠⠿⠂ ⠠⠴⠶⢉⡭⠃⢸⠃ ⣿⣿⣿⠡⣀
    ⡤⠶⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣋⠁     ⢹⡇    ⠒⠢⣤⠔⠁ ⢀⡏  ⢸⣿⣿ ⢻⡟⠑⠢⢄⡀
    ⢸   ⡀⠉⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⣀⣀⡀ ⢸⣷⡀⣀⣀⡠⠔⠊  ⢀⣠⡞   ⢸⣿⡿ ⠘    ⠈⠑⢤
⢀⣴⣿⡀  ⡇   ⠈⣿⣿⣿⣿⣿⣿   L O N Y   C O D E   ⢀⣠⣴⣾⣿⡿⠁   ⢸⡿⠁        ⡜
⢀⣾⣿⣿⡇ ⢰⣷ ⢀  ⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿   Abdo  ⢀⣀⣤⣶⣾⣿⣿⣿⢿⠿⠁    ⠘         ⡰⠉⢦
⢀⣼⣿⣿⡿⢱ ⢸⣿⡀⢸⣧⡀ ⢿⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡭⠖⠁ ⡠⠂        ⢠   ⢠⠃ ⠈⣀
⢸⣿⣿⣿⡇ ⢧⢸⣿⣇⢸⣿⣷⡀⠈⣿⣿⣇⠈⠛⢿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⠿⠿⠟⡻⠟⠉  ⡠⠊ ⢠        ⣾⡄ ⢠⣿⠔⠁ ⢸
⠈⣿⣿⣿⣷⡀ ⢻⣿⣿⡜⣿⣿⣷⡀⠈⢿⣿⡄  ⠈⠛⠿⣿⣿⣿⣷⣶⣶⣶⡶⠖⠉ ⣀⣤⡶⠋ ⣠⣶⡏       ⢰⣿⣧⣶⣿⣿⠖⡠⠖⠁
⣿⣿⣷⣌⡛⠶⣼⣿⣿⣷⣿⣿⣿⣿⡄⠈⢻⣷ ⣄⡀   ⠈⠉⠛⠛⠛⠁⣀⣤⣶⣾⠟⠋ ⣠⣾⣿⡟        ⣿⣿⣿⣿⣿⠷⠊ ⢰
⢰⣿⣿ ⠈⢉⡶⢿⣿⣿⣿⣿⣿⣿⣿⣿⣆ ⠙⢇⠈⢿⣶⣦⣤⣀⣀⣠⣤⣶⣿⣿⡿⠛⠁⢀⣤⣾⣿⣿⡿⠁       ⣸⣿⡿⠿⠋⠙⠒⠄ ⠉⡄
⣿⣿⡏  ⠁   ⠉⠉⠙⢻⣿⣿⣿⣿⣷⡀   ⠻⣿⣿⣿⣿⣿⠿⠿⠛⠁ ⣀⣴⣿⣿⣿⣿⠟        ⢠⠏         ⠰
===============================================================================================================================*/

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());

    reverse(vec.begin(),vec.end());

    int l = 0,r = 0,ans = 0;
    while(r < n) {
        while(vec[l] - vec[r] > 5) l++;
        ans = max(ans,r - l + 1);
        r++;
    }
    cout << ans << endl;

}


 