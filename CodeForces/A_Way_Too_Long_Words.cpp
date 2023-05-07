#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

string solve(string s);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string word; cin >> word;
        cout << solve(word) << endl;
    }
    return 0;
}

string solve(string s) {
   if (s.length() <= 10) return s;
   string aux;
   aux += s[0];
   aux += to_string(s.length()-2);
   aux += s[s.length()-1];
   return aux;
}
