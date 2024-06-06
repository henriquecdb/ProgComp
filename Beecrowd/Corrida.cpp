#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

struct Car {
    int x;
    ll time;
};

bool cmp(const Car& a, const Car& b) {
    return a.time < b.time;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // setIO("main");
    int n, m; cin >> n >> m;
    vector<Car> v(n);
    for (int i = 0; i < n; i++) {
        ll resp = 0;
        for (int j = 0; j < m; j++) {
            ll aux; cin >> aux;
            resp += aux;
        }
        v[i] = {i + 1, resp};
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0].x << endl;
    cout << v[1].x << endl;
    cout << v[2].x << endl;
    return 0;
}