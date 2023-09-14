#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int a, b;
  cin >> a >> b;
  cout << (max(a, b) % min(a, b) == 0 ? "Sao Multiplos" : "Nao sao Multiplos");
  cout << endl;
  return 0;
}
