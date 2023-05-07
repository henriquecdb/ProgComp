#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(int n, int a[]);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int a[n] = {0};
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        solve(n, a);
    }
    return 0;
}

void solve(int n, int a[]) {
    long long sum = 0;
    int negs = 0;
    for (int i = 0; i < n; ++i) {
            if (a[i] < 0) {
                ++negs;
                a[i] = -a[i];
            }
            sum += a[i];
        }
        sort(a, a + n);
        if (negs & 1) sum -= 2 * a[0];
        cout << sum << "\n";
}
