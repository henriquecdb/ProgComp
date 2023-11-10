#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, d;
    cin >> n >> d;
    vector<int> c;
    c.push_back(0);
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        c.push_back(num);
    }
    for (int i = 1; i <= n; i++) {
        c.push_back(c[i]);
    }
    int soma = c[1], resposta = 0;
    for (int l = 0, r = 1; l <= n;) {
        if (r - l > n) {
            soma -= c[l];
            l++;
        }
        else if (soma < d) {
            r++;
            soma += c[r];
        }
        else if (soma > d) {
            soma -= c[l];
            l++;
        }
        else if (soma == d) {
            resposta++;
            r++;
            soma += c[r];
            soma -= c[l];
            l++;
        }
    }
    cout << resposta << endl;
    return 0;
}
