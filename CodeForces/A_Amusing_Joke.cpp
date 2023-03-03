#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
 
void solve(string a, string b, string c);
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b, c;
    cin >> a >> b >> c;
    solve(a, b, c);
    return 0;
}
 
void solve(string a, string b, string c) {
    string s = a + b;
    sort(s.begin(), s.end());
    sort(c.begin(), c.end());
    cout << (s == c ? "YES" : "NO");
    cout << endl;
}
