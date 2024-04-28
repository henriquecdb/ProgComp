/*
    TLE
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// bool isPalindrome(const string &s) {
//     int n = s.length();
//     for (int i = 0; i < n / 2; ++i) {
//         if (s[i] != s[n - i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

bool isPalindrome(const string& s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    string s; cin >> s;

    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = s[i];
    }

    for (int i = 0; i < m; i++) {
        int op; cin >> op;

        if (op == 1) {
            int k; char x;
            cin >> k >> x;
            v[k - 1] = x;
        } else if (op == 2) {
            int a, b; cin >> a >> b;
            string aux = "";
            for (int j = a - 1; j < b; j++) {
                aux += v[j];
            }
            cout << (isPalindrome(aux) ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
