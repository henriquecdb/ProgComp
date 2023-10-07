#include <iostream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int resp = 0;
    int notas[5] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; i++) {
        resp += n / notas[i];
        n %= notas[i];
    }
    cout << resp << endl;
    return 0;
}
