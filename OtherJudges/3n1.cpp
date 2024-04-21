#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, j;
    while (cin >> i >> j)
    {
        ll resp = 0;
        for (int n = min(i, j); n <= max(i, j); n++)
        {
            ll t = n;
            ll count = 1;
            while (t != 1)
            {
                count++;
                if (t % 2) t = 3 * t + 1;
                else t = t / 2;
            }
            if (count > resp) resp = count;
        }
        cout << i << ' ' << j << ' ' << resp << endl;
    }
    return 0;
}
