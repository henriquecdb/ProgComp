/*
    Wrong Answer
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
    // setIO("G_File_Fragmentation");
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        vector<string> v;
        while (getline(cin, s))
            v.push_back(s);
        map<string, int> mp;
        for (int i = 0; i < v.size(); i++) {
            for (int j = i+1; j < v.size(); j++) {
                string c1 = v[i] + v[j];
                string c2 = v[j] + v[i];
                mp[c1]++;
                mp[c2]++;
            }
        }
        string resp; int aux = 0;
        for (auto x : mp) {
            if (x.second > aux) {
                aux = x.second;
                resp = x.first;
            }
        }
        cout << resp << endl;
        if (t) cout << endl;
        mp.clear();
        v.clear();
    }
    return 0;
}
