#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  char o;
  cin >> o;
  double mat[12][12] = {0};
  double soma = 0;
  int cnt = 0;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> mat[i][j];
    }
  }
  int start = 11, end = 11;
  for (int i = 1; i < 12; i++) {
    for (int j = start; j <= end; j++) {
      soma += mat[i][j];
      cnt++;
    }
    start--;
  }
  cout << fixed << setprecision(1);
  cout << (o == 'S' ? soma : soma / cnt) << endl;
  return 0;
}
