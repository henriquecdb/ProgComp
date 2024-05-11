#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // setIO("C_Fancy_Quotes");
    int t; cin >> t;
    while (t--) {
        string s, aux; getline(cin >> ws, s);
        istringstream iss(s);
        bool found = false;
        while (iss >> aux) {
            if (aux == "not") {
                found = true;
                break;
            }
        }
        cout << (found ? "Real Fancy" : "regularly fancy") << endl;
    }
    return 0;
}