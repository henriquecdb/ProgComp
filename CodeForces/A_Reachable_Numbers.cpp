#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    ll resp = 0;
    while (n > 9) {
        resp++, n++;
        while (n % 10 == 0) n /= 10;
    }
    resp += 9;
    cout << resp << endl;
    return 0;
}
