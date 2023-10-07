#include <iostream>
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true) {
        int n; cin >> n;
        if (n == 0) break;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            mp[a]++;
            mp[b]--;
        }
        bool ok = true;
        for (auto x : mp) {
            if (x.second != 0) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
