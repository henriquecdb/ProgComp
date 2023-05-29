#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// a resolucao vai falhar ao tentar usar 0-based
// devemos usar 1-based

int main() {
  bool possivel;
  int saldos[21];
  int B, N, devedor, credor, valor;

  while (cin >> B >> N) {
    if (!B && !N)
      break;

    for (int i = 1; i <= B; ++i) {
      cin >> saldos[i];
    }

    for (int i = 0; i < N; ++i) {
      cin >> devedor >> credor >> valor;

      saldos[devedor] -= valor;
      saldos[credor] += valor;
    }

    possivel = true;
    for (int i = 1; i <= B; ++i) {
      if (saldos[i] < 0) {
        possivel = false;
        break;
      }
    }

    cout << (char)(possivel ? 'S' : 'N') << endl;
  }

  return 0;
}
