#include <iostream>
using namespace std;

int main() {
  double etanol, gasolina;
  while (cin >> etanol >> gasolina) {
    double proporcao = etanol / gasolina;
    if (proporcao <= 0.73) {
      cout << "ETANOL" << endl;
    } else {
      cout << "GASOLINA" << endl;
    }
  }
  return 0;
}

