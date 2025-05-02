#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> prices(n);
        for (int i = 0; i < n; i++) {
            cin >> prices[i];
        }
        
        sort(prices.rbegin(), prices.rend());
        
        int discount = 0;
        for (int i = 2; i < n; i += 3) {
            discount += prices[i];
        }
        
        cout << discount << endl;
    }
    
    return 0;
}
