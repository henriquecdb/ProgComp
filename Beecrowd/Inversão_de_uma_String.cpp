#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    string s; cin >> s;
    a--; b--;
    reverse(s.begin() + a, s.begin() + b + 1);
    cout << s << endl;
    return 0;
}
