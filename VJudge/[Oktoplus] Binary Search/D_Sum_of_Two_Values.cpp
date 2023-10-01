#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (mp.count(x - a[i])) {
            cout << mp[x - a[i]] + 1 << " " << i + 1;
            return 0;
        }
        mp[a[i]] = i;
    }
    cout << "IMPOSSIBLE" << endl; 
    return 0;
}
