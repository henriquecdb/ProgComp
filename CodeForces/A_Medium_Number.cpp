#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b, c; 
        cin >> a >> b >> c;
        int resp[3] = {a, b, c};
        sort(resp, resp+3);
        cout << resp[1] << endl;
    }
    return 0;
}
