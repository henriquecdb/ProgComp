#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Camiseta {
    string nome;
    string cor;
    char tamanho;
};

bool cmp(Camiseta a, Camiseta b) {
    if (a.cor != b.cor)
        return a.cor < b.cor;
    else if (a.tamanho != b.tamanho)
        return a.tamanho > b.tamanho;
    else
        return a.nome < b.nome;
}

int main() 
{
    int N;
    bool primeiro = true;

    while (true) {
        cin >> N;
        if (N == 0) break;
        if (!primeiro)
            cout << endl;
        primeiro = false;

        vector<Camiseta> camisetas(N);

        for (int i = 0; i < N; i++) {
            cin.ignore();
            getline(cin, camisetas[i].nome);
            cin >> camisetas[i].cor >> camisetas[i].tamanho;
        }

        sort(camisetas.begin(), camisetas.end(), cmp);

        for (int i = 0; i < N; i++)
            cout << camisetas[i].cor << " " << camisetas[i].tamanho << " " << camisetas[i].nome << endl;
    }

    return 0;
}
