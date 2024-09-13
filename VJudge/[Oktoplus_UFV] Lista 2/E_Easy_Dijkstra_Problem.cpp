#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int> & d, vector<int> & p);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int v, k; cin >> v >> k;
        adj.assign(v + 1, vector<pair<int, int>>());
        for (int i = 0; i < k; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            adj[a].emplace_back(b, c);
        }

        int A, B; cin >> A >> B;

        vector<int> d, p;
        dijkstra(A, d, p);

        if (d[B] == INF) cout << "NO" << endl;
        else {
            cout << d[B] << endl;
        }
    }
    return 0;
}

void dijkstra(int s, vector<int> & d, vector<int> & p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);

    d[s] = 0;
    using pii = pair<int, int>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();
        if (d_v != d[v])
            continue;

        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to], to});
            }
        }
    }
}
