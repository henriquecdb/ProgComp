#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; getline(cin, s);
    string ans = "" ;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p') {
            i++;
        }
        ans += s[i];
    }
    cout << ans << endl;
    return 0;
}
