#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int mat[3][3] = {0};
  int dp = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> mat[i][j];
      if (i == j)
        dp += mat[i][j];
    }
  }
  int ds = mat[0][2] + mat[1][1] + mat[2][0];
  cout << "Diagonal principal: " << dp << endl;
  cout << "Diagonal secundaria: " << ds << endl;
  return 0;
}
