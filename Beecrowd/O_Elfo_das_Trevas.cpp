#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

struct Rena {
    string nome;
    int peso, idade;
    double altura;
};

bool cmp(const Rena& a, const Rena& b) {
    if (a.peso != b.peso)
        return a.peso > b.peso;
    if (a.idade != b.idade)
        return a.idade < b.idade;
    if (a.altura != b.altura)
        return a.altura < b.altura;
    return a.nome < b.nome;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        int n, m;
        cin >> n >> m;
        vector<Rena> renas(n);
        for (int j = 0; j < n; j++) {
            cin >> renas[j].nome >> renas[j].peso >> renas[j].idade >> renas[j].altura;
        }
        sort(renas.begin(), renas.end(), cmp);
        cout << "CENARIO {" << i << "}" << endl;
        for (int k = 0; k < m; k++) {
            cout << k+1 << " - " << renas[k].nome << endl;
        }
    }
    return 0;
}
