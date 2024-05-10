#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        vector<int> v(3);
        int m;
        cin >> v[0] >> v[1] >> v[2] >> m;
        sort(v.begin(), v.end());
        if (v[0] + v[1] < v[2] - 1) {
            cout << "NO" << endl;
        } else if (v[0] + v[1] + v[2] - 3 < m) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
