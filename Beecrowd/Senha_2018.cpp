#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, ans = 0;
    while (cin >> n) {
        if (n == 2018) break;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
