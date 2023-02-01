#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(int n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        solve(n);
    }
    return 0;
}

void solve(int n) {
    if (n % 2 == 1) {
        cout << 7;
        n -= 3;
    }
    while (n > 0) {
        cout << 1;
        n -= 2;
    }
    cout << endl;
}
