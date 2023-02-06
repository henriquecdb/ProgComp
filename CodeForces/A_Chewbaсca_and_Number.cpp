#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve();

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

void solve() {
    string x; cin >> x;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] > '4')
            x[i] = '9' - x[i] + '0';
    }
    if (x.front() == '0') x.front() = '9';
    cout << x << endl;
}
