#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m * a <= b)
        cout << n * a << endl;
    else 
        cout << (n/m) * b + min((n % m) * a, b) << endl;
    return 0;
}
