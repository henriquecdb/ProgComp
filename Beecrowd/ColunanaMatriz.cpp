#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int n;
  cin >> n;
  double mat[12][12] = {0};
  char t;
  cin >> t;
  double soma = 0;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> mat[i][j];
    }
  }
  cout << fixed << setprecision(1);
  for (int i = 0; i < 12; i++)
    soma += mat[i][n];
  cout << (t == 'S' ? soma : soma / 12) << endl;
  return 0;
}
