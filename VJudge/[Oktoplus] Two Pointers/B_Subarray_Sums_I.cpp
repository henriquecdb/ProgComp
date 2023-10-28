#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<ll, ll> mp;
    ll sum = 0, resp = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum == x)
            resp++;
        if (mp.find(sum - x) != mp.end())
            resp += mp[sum - x];
        mp[sum]++;
    }

    cout << resp << endl;

    return 0;
}
