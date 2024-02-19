#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

vector<ll> v(200001);

ll getSum(int n) {
    ll sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for (int i = 1; i <= 200000; i++) {
        v[i] = v[i-1] + getSum(i);
    }
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << v[n] << endl;
    }
    return 0;
}
