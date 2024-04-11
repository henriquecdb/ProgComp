#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l, c; cin >> l >> c;
    if (l & 1 and c & 1)
        cout << 1 << endl;
    else if (l & 1 and c & 0)
        cout << 0 << endl;
    else if (l % 2 == 0 and c % 2 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
