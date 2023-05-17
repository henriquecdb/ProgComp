#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
ll solve(ll a[], int n, int x, int type);

int main()
{
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n, q; cin >> n >> q;
        ll a[n] = {0};
        for (int j = 0; j < n; j++)
            cin >> a[j];
        int type, x;
        for (int j = 0; j < q; j++) {
            cin >> type >> x;
            cout << solve(a, n, x, type) << endl;
        }
    }
    return 0;
}
 
ll solve(ll a[], int n, int x, int type) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (type == 0 && (a[i] % 2 == 0)) a[i] += x;
        else if (type == 1 && (a[i] % 2 != 0)) a[i] += x;
        sum += a[i];
    }
    return sum;
}
