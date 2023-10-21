// w.a caso 2
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        int resp = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int aux = 0;
                for (int k = 0; k < m; k++)
                    aux += abs(s[i][k] - s[j][k]);
                resp = min(resp, aux);
            }
        }
        cout << resp << endl;
    }
    return 0;
}