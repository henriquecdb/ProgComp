#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int mat[3][3] = {0};
  int line = 0, col = 0;
  set<int> s;
  for (int i = 0; i < 3; i++) {
    line = 0;
    for (int j = 0; j < 3; j++) {
      cin >> mat[i][j];
      line += mat[i][j];
    }
    s.insert(line);
  }
  for (int j = 0; j < 3; j++) {
    col = 0;
    for (int i = 0; i < 3; i++) {
      col += mat[i][j];
    }
    s.insert(col);
  }
  int dp = mat[0][0] + mat[1][1] + mat[2][2];
  int ds = mat[2][0] + mat[1][1] + mat[0][2];
  s.insert(dp);
  s.insert(ds);
  cout << (s.size() != 1 ? "NAO" : "SIM") << endl;
  return 0;
}
