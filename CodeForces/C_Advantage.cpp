#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(vector<int> v, int s[], int n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int s[n] = {0};
        vector<int> v;
        for (int j = 0; j < n; j++) {
            cin >> s[j];
            v.push_back(s[j]);
        }
        solve(v, s, n);
    }
    return 0;
}

void solve(vector<int> v, int s[], int n) {
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++) {
        if (s[i] == v[0]) cout << s[i] - v[1] << ' ';
        else cout << s[i] - v[0] << ' ';
    }
    cout << endl;
}
