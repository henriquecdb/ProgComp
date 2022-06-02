#include <bits/stdc++.h>
#define maxn 1000000

using namespace std;

int main()
{
    int n, soma = 0, num = 0; cin >> n;
    int x[maxn], entrada;
    for (int i = 0; i < n; i++) {
        cin >> entrada;
        if (entrada == 0) num--;
        else {
            x[num] = entrada;
            num++;
        }
    }
    for (int i = 0; i < num; i++)
        soma += x[i];
    cout << soma << endl;
    return 0;
}
