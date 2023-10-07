#include <iostream>
#include <vector>
#include <set>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        set<int> s;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        int aux = n - s.size();
        if (aux % 2) aux++;
        cout << n - aux << endl;
    }
    return 0;
}
