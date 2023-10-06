#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true) {
        ll n; cin >> n;
        vector<ll> a(n);
        if (n == 0) break;
        ll resp = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            resp += abs(sum);
        }
        cout << resp << endl;
    }
    return 0;
}
