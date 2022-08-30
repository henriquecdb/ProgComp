#include <bits/stdc++.h>
#include <string>

using namespace std;
 
typedef long long ll;
 
int main()
{
    int t; cin >> t;
    int n; string s;
    string name = "Timur";
    sort(name.begin(), name.end());
    for (int i = 0; i < t; i++) {
        cin >> n >> s;
        sort(s.begin(), s.end());
        if (name == s) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
 
