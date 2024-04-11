#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int fac(int n) {
    if (n < 2) return 1;
    return n * fac(n - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    cout << fac(n) << endl;
    return 0;
}
