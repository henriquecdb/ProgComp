#include <bits/stdc++.h>

using namespace std;

int main()
{
  double X, Y; cin >> X >> Y;
  int Q = floor(X/Y);
  cout << Q << ' ' << fixed << setprecision(2) << X - Q*Y;
  return 0;
}
