#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(int n, string s);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        string s; cin >> s;
        solve(n, s);
    }
    return 0;
}

void solve(int n, string s) {
    int aux = 0;
    for (int i = 0; i < n; i++) {
        if (i == n/2) break;
        else if (s[i] == '0' and s[s.length() - i - 1] == '1') aux += 2;
        else if (s[i] == '1' and s[s.length() - i - 1] == '0') aux += 2;
        else break;
    }
    cout << n - aux << endl;
}
