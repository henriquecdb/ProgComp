#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // setIO("D_String_Game");
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool check = true;
        vector<int> v(26, 0);
        for (auto x : s) {
            v[x - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (v[i] & 1) {
                check = false;
                break;
            }
        }
        cout << (check ? "YES" : "NO") << endl;
    }
    return 0;
}