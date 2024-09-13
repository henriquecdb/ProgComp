#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int h, c, t;

double f(int x) {
    return abs((((x + 1.0) * h + x * c) / (2.0 * x + 1.0)) - t);
}

double ternary_search(double l, double r) {
    double eps = 1e-9;
    while (r - l > eps) {
        double m1 = l + (r - l) / 3;
        double m2 = r - (r - l) / 3;
        double f1 = f(m1);
        double f2 = f(m2);
        if(f1 > f2)
            l = m1 + 1;
        else
            r = m2 - 1;
    }
    return f(l);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> h >> c >> t;
        if (t <= (h + c)/2) cout << 2 << endl;
        else if (t == h) cout << 1 << endl;
        else {
            cout << ternary_search(1, 1e6) << endl;
		}
    }
    return 0;
}
