#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const ll MOD = 1e9+7;

ll fast_power(int power);
void solve(int n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    solve(n);
    return 0;
}

void solve(int n) {
    cout << fast_power(n) << endl;
}

ll fast_power(int power) {
    ll res = 1;
    ll a = 2;
    while (power > 0){
        if (power & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        power >>= 1;
    }
    return res;
}
