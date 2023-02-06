#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,c; cin >> a >> b >> c;
    cout << 2 * c + min(a,b) + min(max(a,b),min(a,b) + 1);
    return 0;
}
