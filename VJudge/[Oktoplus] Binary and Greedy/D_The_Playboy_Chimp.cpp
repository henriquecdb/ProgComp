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
    vector<int> h(n);
    for (int i = 0; i < n; i++) 
        cin >> h[i];

    int q; cin >> q;
    while (q--) {
        int x;
        cin >> x;
        auto it1 = lower_bound(h.begin(), h.end(), x);
        auto it2 = upper_bound(h.begin(), h.end(), x);

        if (it1 == h.begin()) 
            cout << "X ";
        else 
            cout << *(--it1) << ' ';

        if (it2 == h.end()) 
            cout << 'X' << endl;
        else 
            cout << *it2 << endl;
    }
    return 0;
}
