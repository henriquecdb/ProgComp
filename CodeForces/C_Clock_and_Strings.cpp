#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

bool check(int a, int b, int c, int d) {
    if (a > b)
        swap(a, b);
    if (c > d)
        swap(c, d);
    return (a < c and c < b and b < d) || (c < a and a < d and d < b);
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // setIO("C_Clock_and_Strings");
    int t; cin >> t;
    int a,b,c,d; 
    while (t--) {
        cin >> a >> b >> c >> d;
        cout << (check(a,b,c,d) ? "YES" : "NO") << endl;
    }
    return 0;
}