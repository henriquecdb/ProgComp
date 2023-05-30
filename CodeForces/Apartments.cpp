#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
  int n, m, k; cin >> n >> m >> k;
  vector<int> a(n);
  vector<int> b(m);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int ans = 0;
  int i = 0;
  int j = 0;

  while (i < n && j < m) {
    if (abs(a[i] - b[j]) <= k) {
      ans++;
      i++;
      j++;
    } else if (a[i] - b[j] > k) {
      j++;
    } else {
      i++;
    }
  }

  cout << ans << endl;
  
  return 0;
}
