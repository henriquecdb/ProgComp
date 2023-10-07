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
    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        int n; cin >> n;
        vector<ll> v1(n);
        vector<ll> v2(n);
        for (int j = 0; j < n; j++)
            cin >> v1[j];
        for (int j = 0; j < n; j++)
            cin >> v2[j];

        sort(v1.begin(), v1.end());
        sort(v2.rbegin(), v2.rend());

        ll resp = 0;
        for (int j = 0; j < n; j++) {
            resp += v1[j] * v2[j];
        }
        cout << "Case #" << i + 1 << ": " << resp << endl;
    }
    return 0;
}
