#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int t;
  cin >> t;
  int n[1001];
  int j = 0;
  for (int i = 0; i < 1000; i++) {
    n[i] = j;
    if (j + 1 == t) {
      j = 0;
      continue;
    }
    j++;
  }
  for (int i = 0; i < 1000; i++) {
    cout << "N[" << i << ']' << " = " << n[i] << endl;
  }
  return 0;
}
