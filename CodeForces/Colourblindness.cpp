#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main()
{
    int t; cin >> t;
    string s1, s2;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        cin >> s1 >> s2;
        for (int j = 0; j < n; j++) {
            if (s1[j] == 'B' || s1[j] == 'G')
                s1[j] = 'K';
            if (s2[j] == 'B' || s2[j] == 'G')
                s2[j] = 'K';
        }
        if (s1 == s2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
