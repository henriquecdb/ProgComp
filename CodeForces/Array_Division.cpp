#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool check(ll mid, vector<int> &arr, int k) {
    ll sum = 0;
    int cnt = 1;
    for (int i = 0; i < arr.size(); i++) {
        if (sum + arr[i] > mid) {
            sum = arr[i];
            cnt++;
        } else {
            sum += arr[i];
        }
    }
    return cnt <= k;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    vector<int> x(n);
    ll l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        r += x[i];
        l = max(l, (ll)x[i]);
    }
    
    while (l < r) {
        ll mid = l + (r - l) / 2;
        if (check(mid, x, k)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    
    cout << l << endl;
    return 0;
}
