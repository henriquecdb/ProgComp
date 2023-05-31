#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int mat[3][3] = {0};
  int maior = -111111;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> mat[i][j];
      if (mat[i][j] > maior)
        maior = mat[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (mat[i][j] == maior)
        cout << -1 << ' ';
      else
        cout << mat[i][j] << ' ';
    }
    cout << endl;
  }
  return 0;
}
