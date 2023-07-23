#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve();

bool hasSumGreaterThanOrEqualTo10(int a, int b, int c) {
  return (a + b >= 10) || (b + c >= 10) || (a + c >= 10);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

void solve() {
  int t;
  cin >> t;

  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    if (hasSumGreaterThanOrEqualTo10(a, b, c)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
