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
    int nc; cin >> nc;
    while (nc--) {
        int n; cin >> n;
        vector<int> v;
        while (n--) {
            int aux; cin >> aux;
            v.push_back(aux);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            if (i == v.size() - 1) {
                cout << v[i];
                continue;
            }
            cout << v[i] << ' ';
        }
        cout << endl;
        v.clear();
    }
    return 0;
}
