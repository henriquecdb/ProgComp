#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; vector<int> v;
    while (cin >> n) {
        if (n == 0) break;
        v.push_back(n);
    }
    sort(v.rbegin(), v.rend());
    cout << v[0] << endl;
    return 0;
}
