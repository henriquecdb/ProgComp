#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int median = p[n/2];
    ll cost = 0;
    for (int i = 0; i < n; i++) {
        cost += abs(p[i] - median);
    }
    cout << cost << endl;
    return 0;
}
