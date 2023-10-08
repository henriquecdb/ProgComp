#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1e9 + 7;

ll power(ll a, ll b, ll mod) {
  ll res = 1;
  a = a % mod;
  if (a == 0 and b != 0)
    return 0;
  while (b > 0) {
    if (b & 1)
      res = (res * a) % mod;
    b = b >> 1;
    a = (a * a) % mod;
  }
  return res;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    ll a, b;
    cin >> a >> b;
    cout << power(a, b, MOD) << endl;
  }
  return 0;
}
