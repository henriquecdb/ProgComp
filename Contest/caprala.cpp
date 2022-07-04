#include <bits/stdc++.h>

using namespace std;

int fatorial(int n);

int main()
{
    int x, v[10] = {0};
    int aux = 0;
    for (int i = 0; i < 6; i++) {
        cin >> x;
        v[x]++;
    }
    for (int i = 0; i <= 9; i++) {
        if (v[i] != 0) aux++;
    }
    cout << aux*(aux-1)*(aux-2)*(aux-3) << endl;
    return 0;
}

int fatorial(int n) {
    if (n == 1 || n == 0) return 1;
    else return n * fatorial(n-1);
}
