#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q; cin >> q;
    while (q--) {
        int n; cin >> n;
        string t; cin >> t;
        string s = "";
        int i = t.size() - 1;
        while (i >= 0) {
            if (t[i] != '0') {
                s += 'a' + t[i] - '0' - 1;
                i--;
            } else {
                s += 'a' + stoi(t.substr(i - 2, 2)) - 1;
                i -= 3;
            }
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
