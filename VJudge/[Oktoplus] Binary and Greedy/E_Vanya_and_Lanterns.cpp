#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    double d = max(a[0], l - a[n-1]);
    for (int i = 0; i < n-1; i++)
        d = max(d, (a[i+1] - a[i]) / 2.0);
    cout << d << endl;
    return 0;
}
