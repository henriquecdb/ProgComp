#include <iostream>
#include <set>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int n;
  cin >> n;
  set<int> numerosProibidos;
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    numerosProibidos.insert(p);
  }

  int aux;
  while (cin >> aux) {
    cout << (numerosProibidos.count(aux) ? "sim" : "nao") << endl;
  }
  return 0;
}
