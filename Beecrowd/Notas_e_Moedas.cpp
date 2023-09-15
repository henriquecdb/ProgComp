#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double N;
    cin >> N;
    N += 0.001;
    int notas[] = {100, 50, 20, 10, 5, 2};
    double moedas[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    cout << "NOTAS:\n";
    for (int i = 0; i < 6; i++) {
        cout << int(N/notas[i]) << " nota(s) de R$ " << notas[i] << ".00\n";
        N -= int(N/notas[i]) * notas[i];
    }

    cout << "MOEDAS:\n";
    for (int i = 0; i < 6; i++) {
        cout << int(N/moedas[i]) << " moeda(s) de R$ " << fixed << setprecision(2) << moedas[i] << "\n";
        N -= int(N/moedas[i]) * moedas[i];
    }

    return 0;
}
