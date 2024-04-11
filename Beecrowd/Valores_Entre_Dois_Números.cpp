#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v(2, 0);
    cin >> v[0] >> v[1];
    sort(v.begin(), v.end());
    for (int i = v[0]; i <= v[1]; i++)
        cout << i << ' ';
    cout << endl;
    return 0;
}
