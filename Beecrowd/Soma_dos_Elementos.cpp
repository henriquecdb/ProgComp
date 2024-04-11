#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int sum = 0, value;
    for (int i = 0; i < n; i++) {
        cin >> value;
        sum += value;
    }
    cout << sum << endl;
    return 0;
}
