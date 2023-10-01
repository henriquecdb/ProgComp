#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x; cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p.begin(), p.end());

    int carros = 0, inicio = 0, fim = n-1;
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
