#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ll resp[51];

void solve() {
    resp[0] = 1;
    resp[1] = 1;
    resp[2] = 2;
    for(int i = 3; i <= 50; i++) {
        resp[i] = resp[i-1] + resp[i-2];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; solve();
    while(cin >> n and n != 0) {
        cout << resp[n] << endl;
    }

    return 0;
}
