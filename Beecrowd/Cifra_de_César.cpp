#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while (n--) {
        string s; int desloc;
        cin >> s >> desloc;
        for (char& c : s) {
            c = 'A' + (c - 'A' - desloc + 26) % 26;
        }
        cout << s << endl;
    }
    return 0;
}
