#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    freopen("shell.in", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> v(3);
    for (int i = 0; i < 3; i++) v[i] = i;
    vector<int> resp(3);
    for (int i = 0; i < n; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        a--; b--; g--;
        swap(v[a], v[b]);
        resp[v[g]]++;
    }
    int max = *max_element(resp.begin(), resp.end());
    freopen("shell.out", "w", stdout);
    cout << max << endl;
    return 0;
}
