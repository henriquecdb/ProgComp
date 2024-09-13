#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

vector<char> segmentedSieve(ll L, ll R) {
    ll lim = sqrt(R);
    vector<char> mark(lim + 1, false);
    vector<ll> primes;
    for (ll i = 2; i <= lim; ++i) {
        if (!mark[i]) {
            primes.emplace_back(i);
            for (ll j = i * i; j <= lim; j += i)
                mark[j] = true;
        }
    }

    vector<char> isPrime(R - L + 1, true);
    for (ll i : primes)
        for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        ll m, n; cin >> m >> n;
        vector<char> isPrime = segmentedSieve(m, n);
        for (long long i = 0; i <= n - m; ++i) {
            if (isPrime[i])
                cout << (m + i) << endl;
        }
        cout << endl;
    }
    return 0;
}
