#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ull fac(int n) {
  int res = 1;
  for (int i = 2; i <= n; i++) {
    res *= i;
  }
  return res;
}

ull c(int n, int k) { return fac(n) / fac(n - k) / fac(k); }

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int a[n] = {0};
    for (int j = 0; j < n; j++) {
      cin >> a[j];
    }
    cout << c(10 - n, 2) * c(4, 2) << endl;
  }
  return 0;
}
