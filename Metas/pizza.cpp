#include <bits/stdc++.h>

using namespace std;

double pi = 2 * acos(0.0);

int main()
{
  int a,b,r,g;
  cin >> a >> b >> r >> g;
  double area = pi * pow(r,2);
  if (area <= a*b && 360 % g == 0) cout << 'S' << endl;
  else cout << 'N' << endl;
  return 0;
}
