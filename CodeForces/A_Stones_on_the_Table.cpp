#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int resp = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i + 1]) {
            resp++;
        }
    }
    cout << resp << endl;
    return 0;
}
 