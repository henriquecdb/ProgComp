#include <bits/stdc++.h>
#define MAXN 101

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int n;
  cin >> n;
  int mat[MAXN][MAXN] = {0};
  while (n--) {
    int xi, xf, yi, yf;
    cin >> xi >> xf >> yi >> yf;
    for (int i = xi; i < xf; i++) {
      for (int j = yi; j < yf; j++) {
        mat[i][j] = 1;
      }
    }
  }

  int area = 0;
  for (int i = 0; i < MAXN; i++) {
    for (int j = 0; j < MAXN; j++) {
      if (mat[i][j])
        area++;
    }
  }

  cout << area << endl;
  return 0;
}
