
#include <bits/stdc++.h>

using namespace std;


void AbdoPermutations(string s, set<string>& p) {
    sort(s.begin(), s.end());
    do {
        p.insert(s);
    } while (next_permutation(s.begin(), s.end()));
}

int main() {
    string input;
    cin >> input;

    set<string> permutations;
    AbdoPermutations(input, permutations);

    cout << permutations.size() << endl;
    for (const string& str : permutations) {
        cout << str << endl;
    }

    return 0;
}