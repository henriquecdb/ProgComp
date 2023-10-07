#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int resp = 1;
    int tam = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i-1]) {
            tam++;
        } else {
            tam = 1;
        }
        resp = max(resp, tam);
    }
    cout << resp << endl;
    return 0;
}
