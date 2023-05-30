#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;
    int aux = 0;
    unsigned soma = 0;
    for (int i = 0; i < a.size(); i++) {
      aux = b[i] - a[i];
      if (aux < 0)
        soma += aux + 26;
      else
        soma += aux;
    }
    cout << soma << endl;
  }
  return 0;
}
