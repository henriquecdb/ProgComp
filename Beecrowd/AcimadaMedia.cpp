#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int c;
  cin >> c;
  for (int i = 0; i < c; i++) {
    int n;
    cin >> n;
    double soma = 0;
    vector<int> v;
    for (int j = 0; j < n; j++) {
      int input;
      cin >> input;
      v.push_back(input);
      soma += input;
    }
    double media = soma / n;
    double aux = 0;
    for (int j = 0; j < n; j++) {
      if (v[j] > media)
        aux++;
    }
    cout << fixed << setprecision(3);
    cout << aux * 100.0 / (double)n << '%' << endl;
  }
  return 0;
}
