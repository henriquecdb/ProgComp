#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int mat[6][6] = {0};
    int line, column;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) {
                line = i; column = j;
            }
        }
    }
    cout << abs(line-3) + abs(column-3) << endl;
    return 0;
}
