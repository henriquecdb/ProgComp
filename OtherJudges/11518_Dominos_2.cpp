#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m, l;
        cin >> n >> m >> l;
        vector<vector<int>> graph(n + 1);
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            graph[x].push_back(y);
        }

        unordered_set<int> fallen;
        queue<int> to_fall;

        for (int i = 0; i < l; ++i) {
            int z;
            cin >> z;
            if (fallen.find(z) == fallen.end()) {
                fallen.insert(z);
                to_fall.push(z);
            }
        }

        while (!to_fall.empty()) {
            int current = to_fall.front();
            to_fall.pop();
            for (int neighbor : graph[current]) {
                if (fallen.find(neighbor) == fallen.end()) {
                    fallen.insert(neighbor);
                    to_fall.push(neighbor);
                }
            }
        }

        cout << fallen.size() << endl;
    }
    return 0;
}
