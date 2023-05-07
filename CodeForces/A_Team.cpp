#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a, b, c; int resp = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        int aux = a + b + c;
        if (aux >= 2) resp++;
    }
    cout << resp << endl;
    return 0;
}
