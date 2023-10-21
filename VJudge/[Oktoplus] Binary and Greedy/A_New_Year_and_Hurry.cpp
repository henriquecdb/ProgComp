#include <iostream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int time = 240 - k;
    int resp = 0;
    for (int i = 1; i <= n; i++) {
        if (time - 5*i >= 0) {
            time -= 5*i;
            resp++;
        } else {
            break;
        }
    }
    cout << resp << endl;
    return 0;
}
