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
    int n; cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    sort(t.begin(), t.end());
    int resp = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] >= resp) {
            resp = t[i] + 1;
        } else {
            resp++;
        }
    }
    
    cout << resp + 1 << endl;
    return 0;
}
