#include <iostream>

using namespace std;

// Função para calcular (base^exponent) % modulus
long long int modExp(long long int base, long long int exponent,
                     long long int modulus) {
  if (modulus == 1)
    return 0;

  long long int result = 1;
  base = base % modulus;

  while (exponent > 0) {
    // Se o expoente for ímpar, multiplicamos o resultado com a base
    if (exponent & 1)
      result = (result * base) % modulus;

    // Exponenciação rápida: dobramos a base e dividimos o expoente por 2
    exponent = exponent >> 1;
    base = (base * base) % modulus;
  }

  return result;
}

int main() {
  long long int b, e, m;
  cin >> b >> e >> m;

  long long int result = modExp(b, e, m);
  cout << result << endl;

  return 0;
}
