#include <iostream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() 
{
    char board[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> board[i][j];
            if (board[i][j] == '*') {
                cout << char('a' + j) << 8 - i << endl;
            }
        }
    }
    return 0;
}
