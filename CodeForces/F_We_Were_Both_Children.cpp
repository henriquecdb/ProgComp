#include <iostream>
#include <vector>

using namespace std;

// Função para calcular o MDC (maior divisor comum)
int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> hops(n);
    for (int i = 0; i < n; i++) {
      cin >> hops[i];
    }

    int mdc = hops[0];

    // Calcula o MDC dos comprimentos dos saltos
    for (int i = 1; i < n; i++) {
      mdc = gcd(mdc, hops[i]);
    }

    // O número máximo de rãs que podem ser pegas é o valor do MDC ou o número
    // de rãs, o que for menor
    int maxFrogsCaught = min(mdc, n);

    cout << maxFrogsCaught << endl;
  }

  return 0;
}
