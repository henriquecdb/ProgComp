#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(string s);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; getline(cin, s);
    solve(s);
    return 0;
}

void solve(string s) {
    char last = ' ';
    ll last_amount = 0, m = 0;
    for (ll i = 0; i < s.length(); i++) {
        if (s[i] != last) {
            m = max(m, last_amount);
            last_amount = 1;
        } else {
            last_amount++;
        }
        last = s[i];
    }
    m = max(m, last_amount);
    cout << m << endl;
}

