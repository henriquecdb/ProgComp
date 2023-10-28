#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];

    ll ans = x[0], sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += x[i];
        ans = max(ans, sum);
        sum = max(sum, 0LL);
    }

    cout << ans << endl;

    return 0;
}
