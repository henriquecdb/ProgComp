#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(int n);

vector<vector<char>> m(50, vector<char>(50));

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                char c; cin >> c;
                m[i][j] = c - '0';
            }
        }
        solve(n);
    }
    return 0;
}

void solve(int n) {
    bool resp = true;
    for (int i = n - 2; i >= 0; i--) {
      for (int j = n - 2; j >= 0; j--) {
        if (m[i][j] && !m[i + 1][j] && !m[i][j + 1]) {
          resp = false;
        }
      }
    }
    cout << (resp ? "YES" : "NO") << endl;
}

