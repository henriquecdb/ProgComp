#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, l, c;
    while (cin >> n >> l >> c) {
        vector<string> palavras(n);
        for (int i = 0; i < n; ++i) {
            cin >> palavras[i];
        }

        int pag = 1, lines = 1, carac = 0;
        for (int i = 0; i < n; i++) {
            if (carac + palavras[i].size() > c) {
                carac = palavras[i].size() + 1;
                if (++lines > l) {
                    lines = 1;
                    ++pag;
                }
            } else {
                carac += palavras[i].size() + 1;
            }
        }
        cout << pag << endl;
    }

    return 0;
}
