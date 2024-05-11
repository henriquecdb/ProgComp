/*
    Wrong answer - 2 atempts (first one was my mistake)
    I have forgotten to comment the setIO line
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // setIO("E_Anagram");
    int t; cin >> t;
    while (t--) {
        string s; getline(cin >> ws, s);
        sort(s.begin(), s.end());
        do {
            cout << s << endl;
        } while (next_permutation(s.begin(), s.end()));
    }
    return 0;
}
