#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(vector<int> v, int n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }
        solve(v, n);
    }
    return 0;
}

void solve(vector<int> v, int n) {
    sort(v.begin(), v.end());
    if (v.front() == v.back()) cout << n << endl;
    else cout << '1' << endl;
}
