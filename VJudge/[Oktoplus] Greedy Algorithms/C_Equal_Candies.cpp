#include <iostream>
#include <vector>
#include <algorithm>

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
        int resp = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int menor = *min_element(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            resp += a[i] - menor;
        }
        cout << resp << endl;
    }
    return 0;
}
