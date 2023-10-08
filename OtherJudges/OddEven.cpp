#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    long long a, b, dis, resp;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        if (a == b) {
            cout << "0" << endl;
            continue;
        }
        if (a > b) {
            dis = a - b;
            resp++;
            if (dis % 2 != 0) {
                resp++;
            }
        }
        else if (a < b) {
            dis = b - a;
            resp++;
            if (dis % 2 != 1){
                resp++;
            }
        }
        cout << resp << endl;
        resp = 0;
    }
    return 0;
}
