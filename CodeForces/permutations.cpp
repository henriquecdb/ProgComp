#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(ll n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    solve(n);
    return 0;
}

void solve(ll n) {
    if (n == 1) cout << 1 << endl;
    else if (n < 4) cout << "NO SOLUTION" << endl;
    else if (n == 4) cout << "2 4 1 3" << endl;
    else {
        for (int i = 1; i <= n; i += 2) cout << i << " ";
        for (int i = 2; i <= n; i += 2) {
            cout << i;
            if (i + 2 <= n) cout << " ";
            else cout << endl;
        }
    }
}
