#include <bits/stdc++.h>
#include <numeric>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int f1, f2;
    cin >> f1 >> f2;
    cout << __gcd(f1, f2) << endl;
  }
  return 0;
}
