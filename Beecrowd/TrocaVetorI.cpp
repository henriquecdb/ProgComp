#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int n[21];
  int aux = 20;
  while (aux--) {
    cin >> n[aux];
  }
  for (int i = 0; i < 20; i++) {
    cout << "N[" << i << ']' << " = " << n[i] << endl;
  }
  return 0;
}
