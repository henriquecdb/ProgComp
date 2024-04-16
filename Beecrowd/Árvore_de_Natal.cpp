#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i += 2) {
            for (int j = 0; j < (n - i) / 2; j++)
                cout << ' ';
            for (int k = i; k >= 0; k--)
                cout << '*';
            cout << endl;
        }

        for (int i = 0; i < n/2; i++)
            cout << ' ';
        cout << '*' << endl;

        for (int i = 1; i < n/2; i++)
            cout << ' ';
        cout << "***" << endl << endl;
    }
    return 0;
}
