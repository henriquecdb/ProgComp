#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        v.push_back(t);
    }
    int resp = 10;
    for (int i = 1; i < n; i++) {
        if (v[i] - v[i-1] > 10) {
            resp += 10;
            continue;
        }
        resp += v[i] - v[i-1];
    }
    cout << resp << endl;
    return 0;
}
