#include <iostream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b; cin >> a >> b;
    int resp = 0;
    while (true) {
        if (a > b) break;
        a *= 3;
        b *= 2;
        resp++;
    }
    cout << resp << endl;
    return 0;
}
