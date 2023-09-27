#include <iostream>
#include <unordered_set>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    unordered_set<int> proibidos;
    for (int i = 0; i < N; ++i) {
        int numero;
        cin >> numero;
        proibidos.insert(numero);
    }

    int consulta;
    while (cin >> consulta) {
        if (proibidos.count(consulta)) {
            cout << "sim\n";
        } else {
            cout << "nao\n";
        }
    }

    return 0;
}
