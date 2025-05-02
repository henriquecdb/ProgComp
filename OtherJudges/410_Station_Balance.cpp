#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1, c, s, v;
    while (cin >> c >> s) {
        vector<int> specimens(2 * c, 0);
        int total = 0;
        
        for (int i = 0; i < s; i++) {
            cin >> v;
            specimens[i] = v;
            total += v;
        }
        
        double avg = (double)total / c;
        double imbalance = 0;
        sort(specimens.begin(), specimens.end());
        
        cout << "Set #" << tc++ << endl;
        for (int i = 0; i < c; i++) {
            cout << ' ' << i << ':';
            if (specimens[i]) cout << ' ' << specimens[i];
            if (specimens[specimens.size() - 1 - i])
                cout << ' ' << specimens[specimens.size() - 1 - i];
            cout << endl;
            
            imbalance += abs(avg - (specimens[i] + specimens[specimens.size() - 1 - i]));
        }
        
        cout << fixed << setprecision(5);
        cout << "IMBALANCE = " << imbalance << "\n\n";
    }
    return 0;
}
