#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(string s);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        string s; cin >> s;
        solve(s);
    }
    return 0;
}

void solve(string s) {
    pair<int, int> p = {0,0};
    bool resp = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'U') p.second++;
        else if (s[i] == 'D') p.second--;
        else if (s[i] == 'R') p.first++;
        else p.first--;
        if (p.first == 1 && p.second == 1) resp = true;
    }
    cout << (resp ? "YES" : "NO") << endl;
}
