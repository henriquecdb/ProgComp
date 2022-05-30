#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t, a, b, resp = 0;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        if (a % b == 0) {
            cout << "0" << endl;
        }
        else {
            int c = a % b;
            cout << b - c << endl;
        }
    }
 
    return 0;
}
