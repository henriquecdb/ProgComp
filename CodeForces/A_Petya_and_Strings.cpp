#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(string a, string b);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    solve(a,b);
    return 0;
}

void solve(string a, string b) {
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if (a > b) cout << 1 << endl;
    else if (a < b) cout << -1 << endl;
    else cout << 0 << endl;
}
