/*
    TLE
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, good; int k;
    getline(cin, s);
    getline(cin, good);
    cin >> k;
    int n = s.size();
    set<string> resp;
    for (int i = 0; i < n; i++) {
        int bad = 0;
        string t = "";
        for (int j = i; j < n; j++) {
            if (good[s[j] - 'a'] == '0') bad++;
            if (bad > k) break;
            t += s[j];
            resp.insert(t);
        }
    }
    cout << resp.size() << endl;
    return 0;
}
