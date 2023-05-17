#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(int n, int a[]);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    solve(n, a);
    return 0;
}

void solve(int n, int a[]) {
    int resp = 0;
    for (int i = 1; i < n-1; i++) {
        if (a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1) {
            resp++;
			a[i + 1] = 0;
        }
    }
    cout << resp << endl;
}
