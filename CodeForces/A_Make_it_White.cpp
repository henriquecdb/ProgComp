#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int solve(string s, int n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        cout << solve(s, n) << endl;
    }
    return 0;
}

int solve(string s, int n) {
    int i = 0, j = s.size() - 1;
    for (i = 0, j = s.size() - 1; i < n, j >= 0;) {
        if (s[i] != 'B') i++;
        if (s[j] != 'B') j--;
        if (s[i] == 'B' and s[j] == 'B') break;
    }
    if (i == j) return 1;
    else return j - i + 1;
}
