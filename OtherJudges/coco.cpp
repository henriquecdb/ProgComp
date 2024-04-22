#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int drink(int n) {
    if (n < 3) return n;
    return n / 3 + drink(n / 3 + n % 3);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n and n != 0) {
        cout << drink(n) - 1 << endl;
    }
    return 0;
}
