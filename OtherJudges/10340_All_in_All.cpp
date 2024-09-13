#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool isSubsequence(string s, string t) {
    int j = 0;
    for (int i = 0; i < t.length() && j < s.length(); i++) {
        if (s[j] == t[i]) j++;
    }
    return j == s.length();
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    while (cin >> s >> t) {
        cout << (isSubsequence(s, t) ? "Yes" : "No") << endl;
    }
    return 0;
}
