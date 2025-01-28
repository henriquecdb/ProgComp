#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int MAXN = 100005;

int bit[MAXN], n;

void upd(int x, int v) {
    for (; x <= n; x += (x&-x))
        bit[x] += v;
}

int soma(int x) {
  int ans = 0;
  for (; x > 0; x -= (x&-x))
    ans += bit[x];
  return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
      int aux; cin >> aux;
      upd(i, aux);
    }
    while (q--) {
      int bin, k, p; cin >> bin;
      if (bin == 1) {
        cin >> k;
        cout << soma(k) << endl;
      }
      else if (bin == 0) {
        cin >> k >> p;
        int dif = p - (soma(k) - soma(k-1));
        upd(k, dif);
      }
    }
    return 0;
}

