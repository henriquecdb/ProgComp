#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int n;
  cin >> n;
  int x[n] = {0};
  int menor = 10001;
  int pos = 0;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    if (x[i] < menor) {
      menor = x[i];
      pos = i;
    }
  }
  cout << "Menor valor: " << menor << endl;
  cout << "Posicao: " << pos << endl;
  return 0;
}
