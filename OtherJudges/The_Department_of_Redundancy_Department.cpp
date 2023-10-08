#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    unordered_map<int, int> mp;
    vector<int> unique;
    while (cin >> n) {
        if (mp[n]++ == 0) {
            unique.push_back(n);
        }
    }
    for (auto i : unique)
        cout << i << ' ' << mp[i] << endl;
    return 0;
}
