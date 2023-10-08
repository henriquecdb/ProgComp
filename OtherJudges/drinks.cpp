#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main()
{
  int n; cin >> n;
  int p[101];
  double sum = 0.0, ans = 0.0;
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    sum += p[i];
  }
  ans = sum/n;
  cout << fixed << setprecision(12);
  cout << ans << endl;
  return 0;
}
