#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, t, ans = 0, last; 
    cin >> n >> last;
    for (ll i = 1; i < n; i++) {
        cin >> t;
        if (last > t) ans += last - t;
        else last = t;
    }
    cout << ans << endl;
    return 0;
}
