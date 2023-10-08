#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool check(int mid, int x[], int n, int c) {
    int cows = 1, last_pos = x[0];
    for (int i = 1; i < n; i++) {
        if (x[i] - last_pos >= mid) {
            if (++cows == c)
                return true;
            last_pos = x[i];
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        int x[n];
        for (int i = 0; i < n; i++)
            cin >> x[i];

        sort(x, x + n);

        int start = 0, end = x[n - 1] - x[0], ans = 0;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (check(mid, x, n, c)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

/*
Explicação:

Primeiro, ordenamos as posições dos estábulos.
Em seguida, usamos a busca binária no intervalo de distâncias possíveis entre os estábulos (de 0 a x[n-1] - x[0]).
Para cada distância média (mid), verificamos se é possível colocar todas as c vacas nos estábulos de tal forma que a distância mínima entre quaisquer duas vacas seja pelo menos mid.
Se for possível, atualizamos a resposta (ans) e tentamos encontrar uma distância maior. Caso contrário, tentamos encontrar uma distância menor.
Finalmente, imprimimos a maior distância mínima encontrada (ans).

*/
