#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    map<int, int> arr;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (arr.find(num) == arr.end()) {
            arr[num] = i;
        }
    }

    while (q--) {
        int aux; cin >> aux;
        if (arr.find(aux) != arr.end()) {
            cout << arr[aux] << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}

