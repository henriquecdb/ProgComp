#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void solve(string s);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // setIO("B_String_Task");
    string s; getline(cin, s);
    solve(s);
    return 0;
}

void solve(string s) {
    string aux = "";
    for (auto x : s) {
        x = tolower(x);
        if (x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u' && x != 'y') {
            aux += '.';
            aux += x;
        }
    }
    cout << aux << '\n';
}
