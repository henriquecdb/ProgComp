#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int cnt1 = 0; int x = 0;
        for (int j = 0; j < n; j++) {
            cin >> x;
            cnt1 += (x == 1);
        }
        cout << n - cnt1 / 2 << endl;
    }
    return 0;
}
