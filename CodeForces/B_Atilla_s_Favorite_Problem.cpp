#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(string s, int n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        string s; cin >> s;
        solve(s, n);
    }
    return 0;
}

void solve(string s, int n) {
    vector<char> v;
    for (int i = 0; i < n; i++)
        v.push_back(s[i]);
    sort(v.rbegin(), v.rend());
    cout << v[0] - 96 << endl;
}
