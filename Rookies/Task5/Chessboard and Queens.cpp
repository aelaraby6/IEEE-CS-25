
#include <bits/stdc++.h>

using namespace std;


vector<string> board(8);
int counter = 0;
vector<bool> column(8, false), diag1(2 * 8 - 1, false), diag2(2 * 8 - 1, false);

void AbdoChessboard(int row) {
    if (row == 8) {
        counter++;
        return;
    }
    for (int col = 0; col < 8; col++) {
        if (board[row][col] == '*' || column[col] || diag1[row - col + 8 - 1] || diag2[row + col]) {
            continue;
        }
        column[col] = diag1[row - col + 8 - 1] = diag2[row + col] = true;
        AbdoChessboard(row + 1);
        column[col] = diag1[row - col + 8 - 1] = diag2[row + col] = false;
    }
}

int main() {
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }
    AbdoChessboard(0);
    cout << counter << endl;
    return 0;
}