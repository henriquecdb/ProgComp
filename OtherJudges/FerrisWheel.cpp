#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
  int n, x; cin >> n >> x;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  sort(p.begin(), p.end());
  
  int carros = 0;
  int inicio = 0;
  int fim = n-1;

  while (inicio <= fim) {
    if (p[inicio] + p[fim] <= x) {
      inicio++;
      fim--;
    }
    else {
      fim--;
    }
    carros++;
  }
  cout << carros << endl;
  return 0;
}

