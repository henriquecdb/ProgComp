#include <bits/stdc++.h>
#define MAX 11234

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int a[MAX], ans;
    while (cin >> n, n != 0) {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        a[n] = a[0];
        a[n+1] = a[1];
        ans = 0;
        for (int i = 1; i <= n; i++) {
            if ((a[i-1] < a[i] and a[i] > a[i+1]) or
                (a[i-1] > a[i] and a[i] < a[i+1])) {
                    ans++;
                }
        }
        cout << ans << endl;
    }
    return 0;
}
