#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll altura = (-1 + sqrt(1 + 8*n)) / 2;
        cout << altura << endl;
    }
    return 0;
}
