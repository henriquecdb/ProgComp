#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        vector<pair<int,int>> botas(61,{0,0});
        for (int i = 0; i < n; i++) {
            int tam; cin >> tam;
            char pe; cin >> pe;
            if (pe == 'E') 
                botas[tam].first++;
            else 
                botas[tam].second++;
        }

        int resposta = 0;

        for (int i = 0; i < botas.size(); i++) {
            resposta += min(botas[i].first, botas[i].second);
        }

        cout << resposta << endl;
        resposta = 0;
    }

    return 0;
}