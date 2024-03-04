#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h1, m1, h2, m2;
    while (cin >> h1 >> m1 >> h2 >> m2) {
        if (h1 == 0 and m1 == 0 and h2 == 0 and m2 == 0)
            break;
        m1 += h1 * 60;
        m2 += h2 * 60;
        if (m1 > m2) {
            m2 += 24 * 60;
        }
        cout << m2 - m1 << endl;
    }
    return 0;
}
