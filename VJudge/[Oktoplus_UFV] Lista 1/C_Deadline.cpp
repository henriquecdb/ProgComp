#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool check(int n, int d) {
    if (d <= n) return true;
    for (int i = 0; i * i <= d; ++i) {
        int aux = i + (d + i) / (i + 1);
        if (aux <= n) return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        cout << (check(n, d) ? "YES" : "NO") << endl;
    }
    return 0;
}
