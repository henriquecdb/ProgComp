#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  double x;
  cin >> x;
  double n[101] = {0};
  n[0] = x;
  for (int i = 1; i < 100; i++) {
    n[i] = n[i - 1] / 2;
  }
  cout << fixed << setprecision(4);
  for (int i = 0; i < 100; i++) {
    cout << "N[" << i << ']' << " = " << n[i] << endl;
  }
  return 0;
}
