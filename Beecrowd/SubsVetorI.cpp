#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int x[10];
  for (int i = 0; i < 10; i++) {
    cin >> x[i];
    if (x[i] < 0 or x[i] == 0)
      x[i] = 1;
  }
  for (int i = 0; i < 10; i++) {
    cout << "X[" << i << ']' << " = " << x[i] << endl;
  }
  return 0;
}
