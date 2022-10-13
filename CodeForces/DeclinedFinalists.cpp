#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
  int k; cin >> k;
  int r[1000001] = {}, m = 0;
  for (int i = 0; i < k; i++) {
    cin >> r[i], m = max(m, r[i]);
  }
  if (m <= 25) cout << '0' << endl;
  else cout << m-25 << endl;
  return 0;
}
