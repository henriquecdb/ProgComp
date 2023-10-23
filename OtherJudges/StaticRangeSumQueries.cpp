#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int n, q;
  cin >> n >> q;
  vector<ll> x(n);
  for (int i = 1; i <= n; i++) {
    cin >> x[i];
    x[i] += x[i - 1];
  }
  while (q--) {
    int a, b;
    cin >> a >> b;
    cout << x[b] - x[a - 1] << endl;
  }
  return 0;
}
